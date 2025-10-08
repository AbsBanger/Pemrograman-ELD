/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<int>& a) {
    int total = 0;
    for (int val : a) {
        total += val;
    }
    return total;
}

int minVal(const vector<int>& a) {
    int min = a[0];
    for (int val : a) {
        if (val < min) {
            min = val;
        }
    }
    return min;
}

int maxVal(const vector<int>& a) {
    int max = a[0];
    for (int val : a) {
        if (val > max) {
            max = val;
        }
    }
    return max;
}

double mean(const vector<int>& a) {
    return static_cast<double>(sum(a)) / a.size();
}

int main() {
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    vector<int> a(n);
    cout << "Masukkan " << n << " bilangan:\n";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Jumlah: " << sum(a) << endl;
    cout << "Nilai minimum: " << minVal(a) << endl;
    cout << "Nilai maksimum: " << maxVal(a) << endl;
    cout << "Rata-rata: " << mean(a) << endl;

    return 0;
}