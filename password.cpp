#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	while (true) {
		cin >> password;
		if (strcmp(password, "7539") == 0) {
			cout << "��ȣ ����" << endl;
			break;
		}
		cout << "��ȣ Ʋ��" << endl;
	}

	return 0;
}