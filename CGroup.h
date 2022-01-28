#include "Shapes.h"
#include <iostream>
#include <fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

class CGroup: public Shapes
{
private:
	int size = 0;
	int count = 0;
	Shapes** group;
	bool marked = true;
	bool sticky = false;
	string color = "R";
	int coord[8];
	std::string name = "CGroup";

	int getcoord(int i) override
	{
		return coord[i];
	}

	int getcoordlen() override {
		return sizeof(coord) / sizeof(coord[0]);
	}

	int maxX()
	{
		int max_x = -1;

		for (int i = 0; i < size; i++)
		{
			if (group[i]->getX() > max_x)
				max_x = group[i]->getX();
		}

		return max_x;
	}

	int minX()
	{
		int min_x = 100000;

		for (int i = 0; i < size; i++)
		{
			if (group[i]->getX() < min_x)
				min_x = group[i]->getX();
		}

		return min_x;
	}

	int maxY()
	{
		int max_y = -1;

		for (int i = 0; i < size; i++)
		{
			if (group[i]->getY() > max_y)
				max_y = group[i]->getY();
		}

		return max_y;
	}

	int minY()
	{
		int min_y = 100000;

		for (int i = 0; i < size; i++)
		{
			if (group[i]->getY() < min_y)
				min_y = group[i]->getY();
		}

		return min_y;
	}

	int maxR()
	{
		int max_r = -1;

		for (int i = 0; i < size; i++)
		{
			if (group[i]->getR() > max_r)
				max_r = group[i]->getR();
		}

		return max_r;
	}

public:
	CGroup(int size)
	{
		coord[0] = 10000;
		coord[1] = 10000;
		coord[2] = 10000;
		coord[3] = 10000;
		coord[4] = 0;
		coord[5] = 0;
		coord[6] = 0;
		coord[7] = 0;
		this->size = size;
		group = new Shapes * [size];
	}

	~CGroup()
	{
		delete[] group;
	}

	std::string getName() override
	{
		return name;
	}

	int getSize() override
	{
		return size;
	}

	void add_to_group(int i, Shapes* object)
	{
		group[i] = object;
	}

	int getCount()
	{
		return size;
	}

	void expand_the_group(Shapes* object)
	{
		int size_new = size + 1;
		Shapes** new_objects = new Shapes * [size_new];

		for (int i = 0; i < size; i++)
			new_objects[i] = group[i];

		delete[] group;

		group = new_objects;

		group[size] = object;

		size = size_new;
	}

	String^ ftostring() override
	{
		String^ s = gcnew String("CGroup()");
		return s;
	}

	void select() override
	{
		marked = true;
		for (int i = 0; i < this->getSize(); i++) {
			group[i]->select();
		}
	}

	void unselect() override
	{
		marked = false;
		for (int i = 0; i < this->getSize(); i++) {
			group[i]->unselect();
		}
	}

	void setsticky() override
	{
		sticky = true;
	}

	void assetsticky() override
	{
		sticky = false;
	}

	bool getsticky() override
	{
		return sticky;
	}

	bool reach(int x, int y) override
	{
		for (int i = 0; i < size; i++) {
			if (group[i]->reach(x, y) == true) {
				return true;
			}
		}
		return false;
	}

	bool is_select() override
	{
		return marked;
	}

	void draw(Graphics^ g) override
	{
		coord[0] = 10000;
		coord[1] = 10000;
		coord[2] = 10000;
		coord[3] = 10000;
		coord[4] = 0;
		coord[5] = 0;
		coord[6] = 0;
		coord[7] = 0;
		for (int i = 0; i < size; i++)
		{
			group[i]->draw(g);
			if (group[i]->getcoord(0) < this->coord[0]) {
				coord[0] = group[i]->getcoord(0);
			}
			if (group[i]->getcoord(1) < this->coord[1]) {
				coord[1] = group[i]->getcoord(1);
			}
			if (group[i]->getcoord(2) < this->coord[2]) {
				coord[2] = group[i]->getcoord(2);
			}
			if (group[i]->getcoord(3) < this->coord[3]) {
				coord[3] = group[i]->getcoord(3);
			}
			if (group[i]->getcoord(4) > this->coord[4]) {
				coord[4] = group[i]->getcoord(4);
			}
			if (group[i]->getcoord(5) > this->coord[5]) {
				coord[5] = group[i]->getcoord(5);
			}
			if (group[i]->getcoord(6) > this->coord[6]) {
				coord[6] = group[i]->getcoord(6);
			}
			if (group[i]->getcoord(7) > this->coord[7]) {
				coord[7] = group[i]->getcoord(7);
			}
		}
		if (marked == true) {
			g->DrawRectangle(Pens::Black, coord[0] - 40, coord[3] - 40, coord[4] - coord[0] + 80, coord[7] - coord[3] + 80);

			g->DrawRectangle(Pens::Black, coord[0] - 45, (coord[3] + coord[7]) / 2 - 15, 10, 10);
			g->DrawRectangle(Pens::Black, coord[4] + 35, (coord[3] + coord[7]) / 2 - 15, 10, 10);
			g->DrawRectangle(Pens::Black, (coord[4] + coord[0]) /2, coord[3] - 45, 10, 10);
			g->DrawRectangle(Pens::Black, (coord[4] + coord[0]) / 2, coord[7] + 35, 10, 10);
		}
	}

	void change_the_size(int r) override
	{
		for (int i = 0; i < size; i++)
		{
			group[i]->change_the_size(r);
		}
	}

	void setcolor(string c) override
	{
		color = c;
	}

	void change_the_x(int x) override
	{
		for (int i = 0; i < size; i++)
		{
			group[i]->change_the_x(x);
		}
	}

	void change_the_y(int y) override
	{
		for (int i = 0; i < size; i++)
		{
			group[i]->change_the_y(y);
		}
	}

	int getX() override
	{
		return (minX() + maxX()) / 2;
	}

	int getY() override
	{
		return (minY() + maxY()) / 2;
	}

	int getR() override
	{
		return maxR();
	}

	void Save()
	{
		std::ofstream out;
		out.open("C:\\Users\\Asus\\a.txt");

		if (out.is_open())
		{
			out << name << std::endl;
			out << size << std::endl;

		}

		out.close();
	}

	void Load(std::ifstream &fin) override
	{
		fin >> size;
	}

	Shapes* returnshapes(int i) override{
		return group[i];
	}

	Shapes& getObject(int i)
	{
		return *group[i];
	}
};