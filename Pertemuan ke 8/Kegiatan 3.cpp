#include<iostream>
using namespace std;

int fibonacci(int n) {
if (n == 0) return 0;
if (n == 1) return 1;
if (n > 1 ) return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
	int n;
	cout << "Masukkan angka untuk fibonacci" << endl;
	cin >> n;
	cout << "Fibonacci dari " << n << " adalah: " << fibonacci(n) << endl;
	return 0;
}
