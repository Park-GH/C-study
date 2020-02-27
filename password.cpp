#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	while (true) {
		cin >> password;
		if (strcmp(password, "7539") == 0) {
			cout << "암호 맞음" << endl;
			break;
		}
		cout << "암호 틀림" << endl;
	}

	return 0;
}