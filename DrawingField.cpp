#include "DrawingField.h"

void DrawingField::addElement(Element^ form)
{
    forms.push_front(form);
}

void DrawingField::drawElement(Graphics^ g)
{
    if (!forms.empty()) {
        for each (Element ^ form in forms) {
            form->draw(g);
        }
    }
}

Element^ DrawingField::findElement(int x, int y)
{
    Element^ result = nullptr;
    for each (Element ^ form in forms)
        if (form->find(x, y) != nullptr)
        {
            result = form;
            forms.remove(form);
            break;
        }

    return result;
}

void DrawingField::clear() {
    forms.clear();
}


void DrawingField::deleteElement(Element^ form)
{
    forms.remove(form);
}
