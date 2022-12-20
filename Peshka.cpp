#include "Peshka.h"

using namespace System::Drawing;

Peshka::Peshka(Point point) {
	this->p = point;
	type = 6;
}
Point Peshka::getPeshka() {
	return p;
}
void Peshka::setPeshka(Point point) {
	this->p = point;
}
void Peshka::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Peshka.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Peshka::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
