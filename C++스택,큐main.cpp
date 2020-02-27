#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include "MyQueue_BaseArray.h"
#include "MyStack_BaseArray.h"
using namespace std;




int main() {
	int num;
	int n;
	MyQueue mQ(100);
	MyStack mStack(100);
	while (1) {

		cout << "1.큐 2.스택 3.종료 선택하시오 : ";
		cin >> num;
		switch (num) {
		case 1:
			cout << "크기를 설정하시오 : ";
			cin >> num;
			cout << "큐에 삽입할 "<<num<<"개의 정수를 입력하라>> ";
			for (int i = 0; i < num; i++) {
				cin >> n;
				mQ.enqueue(n);
			}
			cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
			while (mQ.length() != 0) {
				cout << mQ.dequeue() << ' ';
			}
			cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
			break;
		case 2:
			cout << "크기를 설정하시오 : ";
			cin >> num;
			cout << "스택에 삽입할 "<<num<<"개의 정수를 입력하라>> ";
			for (int i = 0; i < num; i++) {
				cin >> n;
				mStack.push(n);
			}
			cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
			while (mStack.length() != 0) {
				cout << mStack.pop() << ' ';
			}
			cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
			break;
		case 3:
			return 0;
		}
		cout << "아무 키나 입력하시면 다음 데이터 입력";
		while (1)
			if (_kbhit())
				break;
		system("cls");

 	}
}