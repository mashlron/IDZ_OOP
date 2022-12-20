#pragma once
#include "Element.h"
ref class Ladya :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Ladya(Point point);
    Point getLadya();
    void setLadya(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
