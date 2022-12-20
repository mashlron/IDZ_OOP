#pragma once
#include "Element.h"
ref class Slon :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Slon(Point point);
    Point getSlon();
    void setSlon(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
