#pragma once
#include "Element.h"
ref class Black_Peshka :
    public Element
{
private:
    Point p;
    int width, height;
public:
    Black_Peshka(Point point);
    Point getBlack_Peshka();
    void setBlack_Peshka(Point point);

    virtual void draw(Graphics^ g) override;
    virtual Element^ find(int x, int y) override;
};

