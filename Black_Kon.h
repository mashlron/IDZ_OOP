#pragma once
#include "Element.h"
ref class Black_Kon :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Black_Kon(Point point);
    Point getBlack_Kon();
    void setBlack_Kon(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};
