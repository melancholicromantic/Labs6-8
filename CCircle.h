#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

#include "Shapes.h"
#include <iostream>
#include <fstream>

class CCircle : public Shapes
{
protected:
    int x, y;
    int r = 80;
    bool marked = false;
    bool sticky = false;
    string color = "R";
    int coord[8];
    std::string name = "CCircle";

public:
    CCircle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void draw(Graphics^ g) override
    {
        coord[0] = x - r / 2;
        coord[1] = y;
        coord[2] = x;
        coord[3] = y - r / 2;
        coord[4] = x + r / 2;
        coord[5] = y;
        coord[6] = x;
        coord[7] = y + r / 2;
        if (color == "R") {
            g->DrawEllipse(Pens::Red, x - r / 2, y - r / 2, r, r);
        }
        else if (color == "G") {
            g->DrawEllipse(Pens::Green, x - r / 2, y - r / 2, r, r);
        }
        else if (color == "B") {
            g->DrawEllipse(Pens::Blue, x - r / 2, y - r / 2, r, r);
        }
        if (marked == true) {
            g->DrawRectangle(Pens::Black, x - (r / 2 + 20), y - (r / 2 + 20), r + 40, r + 40);

            g->DrawRectangle(Pens::Black, x - (r / 2 + 20) - 5, y - 5, 10, 10);
            g->DrawRectangle(Pens::Black, x + (r / 2 + 20) - 5, y - 5, 10, 10);
            g->DrawRectangle(Pens::Black, x - 5, y - (r / 2 + 20) - 5, 10, 10);
            g->DrawRectangle(Pens::Black, x - 5, y + (r / 2 + 20) - 5, 10, 10);
        }
    }

    std::string getName() override
    {
        return name;
    }

    void select() override
    {
        marked = true;
    }

    void unselect() override
    {
        marked = false;
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

    int getSize() override
    {
        return 1;
    }

    int getcoord(int i) override 
    {
        return coord[i];
    }

    int getcoordlen() override {
        return sizeof(coord)/ sizeof(coord[0]);
    }
    Shapes& getObject(int i)
    {
        return CCircle(0, 0);
    }

    String^ ftostring() override
    {
        String^ s = gcnew String("CCircle()");
        return s;
    }

    bool reach(int x, int y) override
    {
        if (((x - this->x) * (x - this->x)) + ((y - this->y) * (y - this->y)) <= (r * r)/4)
            return true;
        else
            return false;
    }

    void setcolor(string c) override 
    {
        color = c;
    }

    bool is_select() override
    {
        return marked;
    }

    void change_the_size(int r) override
    {
        this->r = r;
    }

    void change_the_x(int x) override
    {
        this->x += x;
    }

    void change_the_y(int y) override
    {
        this->y += y;
    }

    int getX() override
    {
        return x;
    }

    int getY() override
    {
        return y;
    }

    int getR() override
    {
        return r;
    }

    Shapes* returnshapes(int i) override {
        Shapes* rt;
        return rt;
    }

    void Save() override
    {
        std::ofstream out("C:\\Users\\Asus\\a.txt", std::ios::app);

        if (out.is_open())
        {
            out << name << std::endl;
            out << x << std::endl;
            out << y << std::endl;
            out << r << std::endl;
            out << color << std::endl;
        }

        out.close();
    }

    void Load(std::ifstream &fin) override
    {
        fin >> x;
        fin >> y;
        fin >> r;
        fin >> color;
    }
};