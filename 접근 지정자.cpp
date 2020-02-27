#include <iostream>
using namespace std;

class Tower {
//private:	클래스 내 멤버 함수만 접근 가능
//public:	클래스 내외 모든 함수 접근 허용
//protected:클래스 내 멤버와 상속받은 파생 클래스만 접근 허용
	int height = 10;
public:
	Tower(){ return; }
	int Towerheight() {
		return height;
	}
};

int main() {
	Tower t;
	cout << t.Towerheight();
}