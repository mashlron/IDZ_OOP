#include "Black_Peshka.h"

using namespace System::Drawing;

Black_Peshka::Black_Peshka(Point point) {
	this->p = point;
	type = 13;
}
Point Black_Peshka::getBlack_Peshka() {
	return p;
}
void Black_Peshka::setBlack_Peshka(Point point) {
	this->p = point;
}
void Black_Peshka::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Black_Peshka.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Black_Peshka::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
