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

		cout << "1.ť 2.���� 3.���� �����Ͻÿ� : ";
		cin >> num;
		switch (num) {
		case 1:
			cout << "ũ�⸦ �����Ͻÿ� : ";
			cin >> num;
			cout << "ť�� ������ "<<num<<"���� ������ �Է��϶�>> ";
			for (int i = 0; i < num; i++) {
				cin >> n;
				mQ.enqueue(n);
			}
			cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
			while (mQ.length() != 0) {
				cout << mQ.dequeue() << ' ';
			}
			cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
			break;
		case 2:
			cout << "ũ�⸦ �����Ͻÿ� : ";
			cin >> num;
			cout << "���ÿ� ������ "<<num<<"���� ������ �Է��϶�>> ";
			for (int i = 0; i < num; i++) {
				cin >> n;
				mStack.push(n);
			}
			cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
			while (mStack.length() != 0) {
				cout << mStack.pop() << ' ';
			}
			cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
			break;
		case 3:
			return 0;
		}
		cout << "�ƹ� Ű�� �Է��Ͻø� ���� ������ �Է�";
		while (1)
			if (_kbhit())
				break;
		system("cls");

 	}
}