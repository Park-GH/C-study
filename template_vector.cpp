#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(300);
	v.at(0) = 1;
	for(int i=0; i<4; i++)
	cout << v[i] << endl;
}