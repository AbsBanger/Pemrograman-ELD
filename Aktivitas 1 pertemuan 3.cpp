/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int A,B,C=0;
    cout<< "Masukkan Nilai A: " << endl;
    cin >> A;
    cout<< "Masukkan Nilai B: " << endl;
    cin >> B;
    cout<< "Berikut adalah hasil A dan B: " << endl;
    cout << A << " dan " << B;
    cout<< "Mau ditukar?[1/2] 1=yes 2= no  " << endl;
    cin >> C;
    if(C==1){
        cout<< "Berikut adalah hasil A dan B: " << endl;
        cout << B << " dan " << A << endl;
    }else if(C==2){
        cout<< "Berikut adalah hasil A dan B: " << endl;
        cout << A << " dan " << B << endl;
    }else  cout << "system error" << endl;
    
    
    

    return 0;
}