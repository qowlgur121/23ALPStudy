#include<iostream>
//2447 �����10 
#include<vector>
using namespace std;
int N;
void func(int x, int y) {
	while (x != 0) {
		if (y % 3 == 1 && x % 3 == 1) {
			cout << " ";
			return;
		}
		x /= 3;
		y /= 3;
	}
	cout << "*";
}
void callfunc() {
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			func(y, x);
		}
		cout << '\n';
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	callfunc();
}
