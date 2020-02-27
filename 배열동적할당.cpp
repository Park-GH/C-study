#include <iostream>
using namespace std;

int main() {

	char* p = new char[10];
	char* q = p;
	q[0] = 'a';
	delete[] q;
	//delet  e[] p;
}