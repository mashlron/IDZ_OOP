#include "Ladya.h"

using namespace System::Drawing;

Ladya::Ladya(Point point) {
	this->p = point;
	type = 5;
}
Point Ladya::getLadya() {
	return p;
}
void Ladya::setLadya(Point point) {
	this->p = point;
}
void Ladya::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Ladya.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Ladya::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
