#include "Black_Slon.h"

using namespace System::Drawing;

Black_Slon::Black_Slon(Point point) {
	this->p = point;
	type = 14;
}
Point Black_Slon::getBlack_Slon() {
	return p;
}
void Black_Slon::setBlack_Slon(Point point) {
	this->p = point;
}
void Black_Slon::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Black_Slon.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Black_Slon::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
