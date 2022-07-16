#include<iostream>
#include "ShapeArea.h"
#include<iomanip>

using namespace std;

struct Circle {

	float radius;
};

struct Rectangle {
	float length;
	float width;
};

struct Square {
	float length;
};

int main() {

	Rectangle yard;
	Rectangle rec;
	Circle cir;
	Square sq;

	float lawnArea, yardArea, circleArea, rectangleArea, squareArea;

	cout << "Enter radius :";
	cin >> cir.radius;

	cout << "Enter length for yard :";
	cin >> yard.length;

	cout << "Enter width for yard :";
	cin >> yard.width;

	cout << "Enter length for rectangle :";
	cin >> rec.length;

	cout << "Enter width for rectangle :";
	cin >> rec.width;

	cout << "Enter length for square :";
	cin >> sq.length;

	circleArea = areaCircle(cir.radius);
	yardArea = areaRectangle(yard.length, yard.width);
	rectangleArea = areaRectangle(rec.length, rec.width);
	squareArea = areaSquare(sq.length);

	lawnArea = yardArea - (circleArea + squareArea + rectangleArea);
	
	cout << "Lawn Area :" << setprecision(2) << fixed << lawnArea << endl;
	system("pause");

	return 0;
}