#include "Black_Kon.h"

using namespace System::Drawing;

Black_Kon::Black_Kon(Point point) {
	this->p = point;
	type = 9;
}
Point Black_Kon::getBlack_Kon() {
	return p;
}
void Black_Kon::setBlack_Kon(Point point) {
	this->p = point;
}
void Black_Kon::draw(Graphics^ g) {
	Image^ img = Image::FromFile("Black_Kon.png");
	width = img->Width;
	height = img->Height;
	g->DrawImage(img, p);
}
Element^ Black_Kon::find(int x, int y)
{

	if (x >= p.X && x <= p.X + width) {
		if (y >= p.Y && y <= p.Y + height)
			return this;
	}
	return nullptr;
}
