#pragma once
#ifndef Rectangle2D_h
#define Rectangle2D_h
using namespace std;


class Rectangle2D {
public:
	double getX();
	void setX(double x);
	double getY();
	void setY(double x);
	double getHeight();
	void setHeight(double height);
	double getWidth();
	void setWidth(double width);

	const double getArea();
	const double getPerimeter();
	const bool contains(double x, double y);
	const bool contains(const Rectangle2D &r);
	const bool overlaps(const Rectangle2D &r);

	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	double getleft();
	double getright();
	double gettop();
	double getbottom();
	
private:
	double leftside = x - (.5*width);
	double rightside = x + (.5*width);
	double bottom = y - (.5*height);
	double top = y + (.5*height);

	double x, y;
	double height, width;

};
#endif // !Rectangle2D_h
