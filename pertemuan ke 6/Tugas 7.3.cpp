#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct karyawan{
    string nama;
    int umur;
    string nik;
    string jabatan;
};

void tampil(const vector<karyawan>& data){
    if(data.empty()){
        cout <<"tidak ada data"<<endl;
    }
     cout << "\n=== Data Karyawan ===\n";
    for (int i = 0; i < data.size(); i++) {
        cout << "Karyawan ke-" << i + 1 << endl;
        cout << "Nama     : " << data[i].nama << endl;
        cout << "Umur     : " << data[i].umur << endl;
        cout << "NIK      : " << data[i].nik << endl;
        cout << "Jabatan  : " << data[i].jabatan << endl;
        cout << "-------------------------\n";
    }
}

void tambah(vector<karyawan>& data){
    karyawan k;
    cin.ignore();
    cout << "masukkan nama: "<<endl;
    getline(cin, k.nama);
    cout << "masukkan umur: "<<endl;
    cin >> k.umur;
    cout << "masukkan nik: "<<endl;
    getline(cin, k.nik);
    cout << "masukkan jabatan: "<<endl;
    getline(cin, k.jabatan);
    data.push_back(k);
    cout<<"data berhasil ditambahkan"<<endl;
}

void edit(vector<karyawan>& data){
string cari;
cin.ignore();
cout<< "Masukkan NIK: " << endl;
getline(cin, cari);

bool ketemu = false;
for (auto &k : data){
        if (k.nik == cari) {
            ketemu = true;
            cout << "Data ditemukan. Masukkan data baru.\n";
            cout << "Nama baru     : ";
            getline(cin, k.nama);
            cout << "Umur baru     : ";
            cin >> k.umur;
            cin.ignore();
            cout << "Jabatan baru  : ";
            getline(cin, k.jabatan);
            cout << "Data berhasil diperbarui!\n";
            break;
        }
if (!ketemu) cout << "Data dengan NIK tersebut tidak ditemukan." << endl;

}
}
void hapus(vector<karyawan>& data){
    string cari;
    cin.ignore();
    cout << "Masukkan NIK yang ingin dihapus: "<<endl;
    getline(cin, cari);
    
    for(int i=0;i<data.size();i++){
        if(data[i].nik==cari){
            data.erase(data.begin() + i);
            cout << "data dihapus"<<endl;
            return;
        }
    }
    cout << "data tidak ditemukan" << endl;
}
int main(){
    vector<karyawan> dataKaryawan;
    int pilihan;
    do{
    cout << "\n=== MENU MANAJEMEN KARYAWAN ===\n";
        cout << "1. Tampilkan semua karyawan\n";
        cout << "2. Tambah karyawan baru\n";
        cout << "3. Edit data karyawan\n";
        cout << "4. Hapus data karyawan\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        
         switch (pilihan) {
            case 1:
                tampil(dataKaryawan);
                break;
            case 2:
                tambah(dataKaryawan);
                break;
            case 3:
                edit(dataKaryawan);
                break;
            case 4:
                hapus(dataKaryawan);
                break;
            case 5:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
}while (pilihan != 5);
return 0;
}