#pragma once
#include "Element.h"
ref class Korol :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Korol(Point point);
    Point getKorol();
    void setKorol(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
