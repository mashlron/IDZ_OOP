#pragma once
#include "Element.h"
ref class Koroleva :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Koroleva(Point point);
    Point getKoroleva();
    void setKoroleva(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
