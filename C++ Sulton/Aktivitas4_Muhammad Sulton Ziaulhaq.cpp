#include<iostream>
using namespace std;
int main(){
	int a = 10, b = 3, x = 5, y = 10;
	
cout << "Penjumlahan: a + b = " << (a + b) << endl;
cout << "Pengurangan: a - b = " << (a - b) << endl;
cout << "Perkalian: a * b = " << (a * b) << endl;
cout << "Pembagian: a / b = " << (a / b) << endl;
cout << "Modulus: a % b = " << (a % b) << endl;

cout << "x == y : " << (x == y) << endl;
cout << "x != y : " << (x != y) << endl;
cout << "x > y : " << (x > y) << endl;
cout << "x < y : " << (x < y) << endl;
cout << "x >= y : " << (x >= y) << endl;
cout << "x <= y : " << (x <= y) << endl;

bool hasil;
hasil = (10 > 5) && (5 < 10);
cout << "10 > 5 AND 5 < 10 : " << hasil << endl;
hasil = (10 > 5) || (5 > 10);
cout << "10 > 5 OR 5 > 10 : " << hasil << endl;
hasil = !(10 > 5);
cout << "NOT (10 > 5) : " << hasil << endl;

a += 5; 
cout << "a += 5 : " << a << endl;
a -= 3; 
cout << "a -= 3 : " << a << endl;
a *= 2; 
cout << "a *= 2 : " << a << endl;
a /= 4; 
cout << "a /= 4 : " << a << endl;
a %= 3; 
cout << "a %= 3 : " << a << endl;
}
