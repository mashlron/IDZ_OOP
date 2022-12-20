#include "Korol.h"

using namespace System::Drawing;

Korol::Korol(Point point) {
	this->p = point;
	type = 3;
}
Point Korol::getKorol() {
	return p;
}
void Korol::setKorol(Point point) {
	this->p = point;
}
void Korol::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Korol.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Korol::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
