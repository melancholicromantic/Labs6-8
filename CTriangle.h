#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "Shapes.h"
#include <iostream>
#include <fstream>

class CTriangle : public Shapes
{
protected:
    int x, y;
    int r = 65;
    bool marked = false;
    bool sticky = false;
    string color = "R";
    int coord[8];
    std::string name = "CTriangle";

public:
    CTriangle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void draw(Graphics^ g) override
    {
        coord[0] = x - r;
        coord[1] = y + r;
        coord[2] = x + r;
        coord[3] = y + r;
        coord[4] = x;
        coord[5] = y;
        coord[6] = x - r;
        coord[7] = y + r;
        if (color == "R") {
            g->DrawLine(Pens::Red, x, y, x - r, y + r);
            g->DrawLine(Pens::Red, x, y, x + r, y + r);
            g->DrawLine(Pens::Red, x - r, y + r, x + r, y + r);
        }
        else if (color == "G") {
            g->DrawLine(Pens::Green, x, y, x - r, y + r);
            g->DrawLine(Pens::Green, x, y, x + r, y + r);
            g->DrawLine(Pens::Green, x - r, y + r, x + r, y + r);
        }
        else if (color == "B") {
            g->DrawLine(Pens::Blue, x, y, x - r, y + r);
            g->DrawLine(Pens::Blue, x, y, x + r, y + r);
            g->DrawLine(Pens::Blue, x - r, y + r, x + r, y + r);
        }
        if (marked == true) {
            g->DrawRectangle(Pens::Black, x - r - 20, y - 20, r * 2 + 40, r + 40);

            g->DrawRectangle(Pens::Black, x - r - 25, y + r / 2 - 5, 10, 10);
            g->DrawRectangle(Pens::Black, x + r + 15, y + r / 2  - 5, 10, 10);
            g->DrawRectangle(Pens::Black, x - 5, y - 25, 10, 10);
            g->DrawRectangle(Pens::Black, x - 5, y + r + 15, 10, 10);
        }
    }

    std::string getName() override
    {
        return name;
    }

    int getSize() override
    {
        return 1;
    }

    String^ ftostring() override
    {
        String^ s = gcnew String("CTriangle()");
        return s;
    }

    void setcolor(string c) override
    {
        color = c;
    }

    int getcoord(int i) override
    {
        return coord[i];
    }

    int getcoordlen() override {
        return sizeof(coord) / sizeof(coord[0]);
    }

    Shapes& getObject(int i)
    {
        return CTriangle(0, 0);
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

    void select() override
    {
        marked = true;
    }

    void unselect() override
    {
        marked = false;
    }

    bool reach(int x, int y) override
    {
        if ((y - (this->y) >= - (x - (this->x))) && (y - (this->y) >= x - (this->x)) && (y - (this->y) <= r))
        {
            return true;
        }
        else
            return false;
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

    void Save()
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