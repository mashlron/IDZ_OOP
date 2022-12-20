#include "Black_Ladya.h"

using namespace System::Drawing;

Black_Ladya::Black_Ladya(Point point) {
	this->p = point;
	type = 12;
}
Point Black_Ladya::getBlack_Ladya() {
	return p;
}
void Black_Ladya::setBlack_Ladya(Point point) {
	this->p = point;
}
void Black_Ladya::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Black_Ladya.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Black_Ladya::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
