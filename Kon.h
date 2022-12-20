#pragma once
#include "Element.h"
ref class Kon :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Kon(Point point);
    Point getKon();
    void setKon(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
