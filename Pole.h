#pragma once
#include "Element.h"
ref class Pole :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Pole(Point point);
    Point getPole();
    void setPole(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
