#pragma once
#include "Element.h"
ref class Peshka :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Peshka(Point point);
    Point getPeshka();
    void setPeshka(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
