#pragma once
#include "Element.h"
ref class Black_Slon :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Black_Slon(Point point);
    Point getBlack_Slon();
    void setBlack_Slon(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
