#include "Slon.h"

using namespace System::Drawing;

Slon::Slon(Point point) {
	this->p = point;
	type = 8;
}
Point Slon::getSlon() {
	return p;
}
void Slon::setSlon(Point point) {
	this->p = point;
}
void Slon::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Slon.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Slon::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
