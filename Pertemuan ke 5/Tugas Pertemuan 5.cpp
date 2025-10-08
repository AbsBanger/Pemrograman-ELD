#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <limits>
using namespace std;
using pii = pair<string,int>;

void bersihkan(vector<pii>& v) {
    vector<pii> temp;
    for (const auto& p : v) {
        if (p.second > 0) temp.push_back(p);
    }
    v = move(temp);
}

void hapusduplikat(vector<pii>& v) {
    unordered_map<string,int> terakhir;
    // Simpan harga terakhir per nama
    for (const auto& p : v) {
        terakhir[p.first] = p.second;
    }
    v.clear();
    for (const auto& p : terakhir) {
        v.emplace_back(p.first, p.second);
    }
}

void ringkasan(const vector<pii>& v) {
    if (v.empty()) {
        cout << "Data kosong\n";
        return;
    }
    int jumlah = 0, minh = numeric_limits<int>::max(), maxh = numeric_limits<int>::min();
    for (const auto& p : v) {
        jumlah += p.second;
        if (p.second < minh) minh = p.second;
        if (p.second > maxh) maxh = p.second;
    }
    double rata = (double)jumlah / (int)v.size();
    cout << "Jumlah unik: " << v.size() << "\n";
    cout << "Harga minimum: " << minh << "\n";
    cout << "Harga maksimum: " << maxh << "\n";
    cout << "Rata-rata harga: " << rata << "\n";
}

int main(){
    vector<pii> data={{"apel",2000},{"jeruk",1500},{"apel",-100},
                     {"mangga",3000},{"jeruk",1500},{"pisang",0},
                     {"apel",2500},{"mangga",3000}};
    bersihkan(data);
    hapusduplikat(data);
    ringkasan(data);
    return 0;
}

 
