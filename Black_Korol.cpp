#include "Black_Korol.h"

using namespace System::Drawing;

Black_Korol::Black_Korol(Point point) {
	this->p = point;
	type = 10;
}
Point Black_Korol::getBlack_Korol() {
	return p;
}
void Black_Korol::setBlack_Korol(Point point) {
	this->p = point;
}
void Black_Korol::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Black_Korol.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Black_Korol::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
