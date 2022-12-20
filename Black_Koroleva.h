#pragma once
#include "Element.h"
ref class Black_Koroleva :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Black_Koroleva(Point point);
    Point getBlack_Koroleva();
    void setBlack_Koroleva(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
