#include <iostream>
using namespace std;

struct Mahasiswa {
string nama;
int umur;
string nik;
};
Mahasiswa mhs1;
Mahasiswa mhs2;

int main() {

mhs1.nama = "Andi";
mhs1.umur = 20;
mhs1.nik = "1234567890123456";
mhs2.nama = "Budi";
mhs2.umur = 22;
mhs2.nik = "0987654321123456";

cout << "Nama: " << mhs1.nama << endl;
cout << "Umur: " << mhs1.umur << endl;
cout << "Nilai: " << mhs1.nik << endl;
cout << "Nama: " << mhs2.nama << endl;
cout << "Umur: " << mhs2.umur << endl;
cout << "Nilai: " << mhs2.nik << endl;
return 0;
}