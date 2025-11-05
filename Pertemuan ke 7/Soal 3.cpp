#include <iostream>
using namespace std;
int totalHadir=0;
int kehadiran(int x, int y, int z){
    cout << "masukkan jumlah mahasiswa: " << endl;
    cin >> x;
    cout << "masukkan total pertemuan: " << endl;
    cin >> y;
    for(int i=0;i<x;i++){
        cout << "Kehadiran mahasiswa ke-"<< i+1 <<": "<< endl;
        cin >> z;
        totalHadir += z;
    }
    cout << "Total kehadiran kelas: " << totalHadir << " dari " << x*y << endl;
    cout << "Presentase kehadiran mahasiswa adalah " << totalHadir/x*y*100/100 << "%" << endl;
}

int main(){
    int x, y, z;
    cout << kehadiran(x, y, z) << endl;
    return 0;
}


