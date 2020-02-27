#include <iostream>
using namespace std;

class Rectangle {
public:
	int w, h;
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int c);
	~Rectangle();
	bool isSquare();
};
Rectangle::Rectangle() {
	w = h = 1;
}

Rectangle::Rectangle(int a, int b) {
	w = a;
	h = b;
}

Rectangle::Rectangle(int c) {
	w = c;
	h = c;
}

bool Rectangle::isSquare() {
	if (w == h)
		return true;
	return false;
}

Rectangle::~Rectangle() {
	cout << "���簢�� ����" << w <<" " << h << "�Ҹ�" << endl;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}