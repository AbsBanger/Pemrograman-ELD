#include <iostream>
using namespace std;
double totalNilai=0;
double hasil;
int kehadiran(double x, double z){
    cout << "masukkan jumlah nilai: ";
    cin >> x;
    for(int i=0;i<x;i++){
        cout << "Masukkan nilai ke-"<< i+1 <<": ";
        cin >> z;
        totalNilai += z;
        hasil = totalNilai/x;
    }
    cout << "Rata-Rata: " << hasil << endl;
    if(hasil >= 76){
            cout << "LULUS" << endl;
        }else if(hasil < 76){
            cout << "TIDAK LULUS" << endl;
        }
}

int main(){
    double x, z;
    cout << kehadiran(x, z) << endl;
    return 0;
}


