#include <iostream>
using namespace std;

class Tower {
//private:	Ŭ���� �� ��� �Լ��� ���� ����
//public:	Ŭ���� ���� ��� �Լ� ���� ���
//protected:Ŭ���� �� ����� ��ӹ��� �Ļ� Ŭ������ ���� ���
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