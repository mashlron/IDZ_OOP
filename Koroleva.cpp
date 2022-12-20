#include "Koroleva.h"

using namespace System::Drawing;

Koroleva::Koroleva(Point point) {
	this->p = point;
	type = 4;
}
Point Koroleva::getKoroleva() {
	return p;
}
void Koroleva::setKoroleva(Point point) {
	this->p = point;
}
void Koroleva::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Koroleva.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Koroleva::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
