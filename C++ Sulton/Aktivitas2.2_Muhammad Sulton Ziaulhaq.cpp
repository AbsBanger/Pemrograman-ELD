#include <iostream>
#include <string>
using namespace std;

int main() {
string kalimat;
cout << "Masukkan sebuah kalimat: ";
getline(std::cin, kalimat);
cout << "Kalimat yang Anda masukkan: " << kalimat << endl;
return 0;
}
