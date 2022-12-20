#include "Black_Koroleva.h"

using namespace System::Drawing;

Black_Koroleva::Black_Koroleva(Point point) {
	this->p = point;
	type = 11;
}
Point Black_Koroleva::getBlack_Koroleva() {
	return p;
}
void Black_Koroleva::setBlack_Koroleva(Point point) {
	this->p = point;
}
void Black_Koroleva::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Black_Koroleva.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Black_Koroleva::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
