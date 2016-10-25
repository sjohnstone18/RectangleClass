#include "Rectangle2D.h"
#include <iostream>
using namespace std;

Rectangle2D::Rectangle2D() {
	Rectangle2D::x = 0;
	Rectangle2D::y = 0;
	Rectangle2D::height = 1;
	Rectangle2D::width = 1;
}
Rectangle2D::Rectangle2D(double x, double y, double width, double height) {
	setX(x);
	setY(y);
	setHeight(height);
	setWidth(width);
}

double Rectangle2D::getX() {
	return x;
}
void Rectangle2D::setX(double x) {
	Rectangle2D::x = x;
}
double Rectangle2D::getY() {
	return y;
}
void Rectangle2D::setY(double y) {
	Rectangle2D::y = y;
}
double Rectangle2D::getHeight() {
	return height;
}
void Rectangle2D::setHeight(double height) {
	Rectangle2D::height = height;

}
double Rectangle2D::getWidth() {
	return width;
}
void Rectangle2D::setWidth(double width) {
	Rectangle2D::width = width;
}

const double Rectangle2D::getArea() {
	double area = height*width;
	return area;
}
const double Rectangle2D::getPerimeter() {
	double perimeter = height + width +height + width;
	return perimeter;
}
const bool Rectangle2D::contains(double x, double y) {
	if (x > leftside && x < rightside && y < top && y > bottom)
		return true;
	else 
		return false;
}
const bool Rectangle2D::contains(const Rectangle2D &r) {
	if (leftside < r.leftside && rightside > r.rightside && top > r.top && bottom < r.bottom)
		return true;
	else
		return false;
}
const bool Rectangle2D::overlaps(const Rectangle2D &r) {
	bool xc, yc, overlap = false;
	if (r.leftside > leftside &&r.leftside < rightside)
		xc = true;
	else if (r.rightside > leftside &&r.rightside < rightside)
		xc = true;
	if (r.top > bottom &&r.top < top)
		yc = true;
	else if (r.bottom > bottom &&r.bottom < top)
		yc = true;

	if (yc == true && xc == true)
		overlap = true;
	return overlap;
}
double Rectangle2D::getleft() {
	return leftside;
}
double Rectangle2D::getright() {
	return rightside;
}
double Rectangle2D::gettop() {
	return top;
}
double Rectangle2D::getbottom() {
	return bottom;
}
