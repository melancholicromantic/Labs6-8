#pragma once

#include <iostream>
#include <fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

class Shapes
{
public:
	virtual void setsticky() = 0;
	virtual void assetsticky() = 0;
	virtual bool getsticky() = 0;
	virtual void select() = 0;
	virtual void setcolor(string c) = 0;
	virtual void unselect() = 0;
	virtual bool reach(int x, int y) = 0;
	virtual bool is_select() = 0;

	virtual void draw(Graphics^ g) = 0;

	virtual void change_the_size(int r) = 0;
	virtual void change_the_x(int x) = 0;
	virtual void change_the_y(int y) = 0;

	virtual int getcoord(int i) = 0;
	virtual int getcoordlen() = 0;

	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual int getR() = 0;

	virtual void Save() = 0;
	virtual void Load(std::ifstream &fin) = 0;

	virtual std::string getName() = 0;
	virtual int getSize() = 0;
	virtual Shapes& getObject(int i) = 0;
	virtual String^ ftostring() = 0;
	virtual Shapes* returnshapes(int i) = 0;
};