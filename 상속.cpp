#include <iostream>
#include <string>
using namespace std;

class Point {
	int x = 0, y = 0;
public:
	void set(int x = 1, int y = 1) { this->x = x; this->y = y; }
	void showpoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color = "white") { this->color = color; }
	void showColorPoint();
};
void ColorPoint::showColorPoint() {
	cout << color << ":";
	showpoint();
};


int main() {
	ColorPoint c1;
	c1.setColor("red");
	c1.set(3, 4);
	c1.showpoint();
	c1.showColorPoint();
	ColorPoint c2;
	c2.setColor();
	c2.showpoint();
	c2.showColorPoint();
	ColorPoint c3;
	c3.set(); 
	c3.showpoint();
}