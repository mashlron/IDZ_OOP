#pragma once
#include "Element.h"
ref class Black_Korol :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Black_Korol(Point point);
    Point getBlack_Korol();
    void setBlack_Korol(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
