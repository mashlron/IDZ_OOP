#include "Kon.h"

using namespace System::Drawing;

Kon::Kon(Point point) {
	this->p = point;
	type = 2;
}
Point Kon::getKon() {
	return p;
}
void Kon::setKon(Point point) {
	this->p = point;
}
void Kon::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Kon.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Kon::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
