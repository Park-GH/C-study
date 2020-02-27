#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class GameObject {
protected:
	int distance;
	int x, y;
public:
	GameObject(int startX,int startY, int distance){
		this->x = startX; this->y = startY;
		this->distance = distance;
	}
	virtual ~GameObject() {};

	virtual void move() = 0;
	virtual char getShape() = 0;

	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject* p) {
		if (this->x == p->getX() && this->y == p->getY())
			return true;
		else
			return false;
	}
};

class Human :public GameObject {
public:
	Human(int startX, int startY, int distance) :GameObject(startX, startY, distance) {};
	void move();
	char getShape() { return 'H'; }
};
class Monster :public GameObject {
public:
	Monster(int startX, int startY, int distance) :GameObject(startX, startY, distance) {};
	void move();
	char getShape() { return 'M'; }
};
class Food :public GameObject {
	int moveStack = 0;
public:
	Food(int startX, int startY, int distance) :GameObject(startX, startY, distance) {};
	void move();
	char getShape() { return '@'; }
};

void Human::move() {
	char kbhit;
	cout << "¹æÇâÅ° wasd >> ";
	cin >> kbhit;
	switch (kbhit) {
	case 'w':
		y-=distance;
		if (y < 0)
			y = 0;
		break;
	case 'a':
		x-=distance;
		if (x < 0)
			x = 0;
		break;
	case 's':
		y+=distance;
		if (y > 9)
			y = 9;
		break;
	case 'd':
		x+=distance;
		if (x > 19)
			x = 19;
		break;
	}
}

void Monster::move() {
	switch (rand() % 4) {
	case 0:
		x -= distance;
		if (y < 0)
			y = 0;
		break;
	case 1:
		y -= distance;
		if (x < 0)
			x = 0;
		break;
	case 2:
		x += distance;
		if (x > 19)
			x = 19;
		break;
	case 3:
		y += distance;
		if (y > 9)
			y = 9;
		break;
	}
}

void Food::move() {
	if (moveStack > 2) {
		switch (rand() % 4) {
		case 0:
			y -= distance;
			if (y < 0)
				y = 0;
			break;
		case 1:
			x -= distance;
			if (x < 0)
				x = 0;
			break;
		case 2:
			x += distance;
			if (x > 19)
				x = 19;
			break;
		case 3:
			y += distance;
			if (y > 9)
				y = 9;
			break;
		}
	}
	moveStack++;
	if (moveStack == 5)
		moveStack = 0;

}
void draw(char (* map)[20]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}
int main() {
	srand((unsigned int)time(NULL));
	Human human(0, 0, 1);
	Monster monster(5, 5, 2);
	Food food(10, 9, 1);
	char map[10][20] = { {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'} };
	while (1) {
		map[human.getY()][human.getX()] = human.getShape();
		map[monster.getY()][monster.getX()] = monster.getShape();
		map[food.getY()][food.getX()] = food.getShape();
		draw(map);
		map[human.getY()][human.getX()] = '-';
		map[monster.getY()][monster.getX()] = '-';
		map[food.getY()][food.getX()] = '-';
		human.move();
		monster.move();
		food.move();
		if (human.collide(&monster))
		{
			draw(map);
			cout << "Á×À½" << endl;
			return 0;
		}
		if (human.collide(&food))
		{
			draw(map);
			cout << "ÀÌ±è" << endl;
			return 0;
		}
	}


}