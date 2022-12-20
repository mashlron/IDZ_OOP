#pragma once
#include <cliext/list>
#include "Element.h"

ref class DrawingField
{
private:
	cliext::list<Element^> forms;

public:
	void addElement(Element^ form);
	void drawElement(Graphics^ g);
	Element^ findElement(int x, int y);
	void deleteElement(Element^ form);
	void clear();
};
