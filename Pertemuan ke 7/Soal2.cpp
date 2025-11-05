#include <iostream>
using namespace std;

int v,z;
void passByValue(int x, int y) {
 x = v;
 y = z;
 }
 void passByReference(int &x, int &y) {
 int temp=x;
 x=y;
 y=temp;
 }
 int main() {
 cout << "Masukkan bilangan pertama: " << endl;
 cin>>v;
 cout << "Masukkan bilangan kedua: " << endl;
 cin>>z;
 cout << "sebelum ditukar: a: " << v << ", b: "<< z << endl;
 passByValue(v,z);
 cout << "Pass by Value: " << v << "," << z << endl;
 passByReference(v,z);
 cout << "Pass by Reference: " << v << "," << z << endl;
 return 0;
 }


