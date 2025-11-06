#include<iostream>
#include<cmath>
using namespace std;

int pangkatrekursif(int x, int y) {
if (y == 0) return 1;
if (y > 0 ) return x*x^(y-1);
}

int main() {
int a,b;
cout << "Masukkan angka untuk faktorial 1: ";
cin >> a;
cout << "Masukkan angka untuk faktorial 2: ";
cin >> b;
cout << "Faktorial dari " << a << " adalah " << pangkatrekursif(a,b) << endl;
return 0;
}
