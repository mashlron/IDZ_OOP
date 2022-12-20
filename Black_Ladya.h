#pragma once
#include "Element.h"
ref class Black_Ladya :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Black_Ladya(Point point);
    Point getBlack_Ladya();
    void setBlack_Ladya(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
