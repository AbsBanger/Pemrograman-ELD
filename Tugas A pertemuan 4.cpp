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
    int x,y,opsi;
    cout<<"Masukkan Nilai X"<<endl;
    cin>>x;
    switch(x){
        case 1:
        y = 2;
        cout<<"Karena nilai X yang anda masukkan adalah: "<<x<<" Maka nilai yang keluar adalah: "<<y;
        break;
        case 2:
        y = 5;
        cout<<"Karena nilai X yang anda masukkan adalah: "<<x<<" Maka nilai yang keluar adalah: "<<y;
        break;
        case 3:
        y = 10;
        cout<<"Karena nilai X yang anda masukkan adalah: "<<x<<" Maka nilai yang keluar adalah: "<<y;
        break;
        case 4:
        y = 17;
        cout<<"Karena nilai X yang anda masukkan adalah: "<<x<<" Maka nilai yang keluar adalah: "<<y;
        break;
        case 5:
        y = 26;
        cout<<"Karena nilai X yang anda masukkan adalah: "<<x<<" Maka nilai yang keluar adalah: "<<y;
        break;
        case 6:
        y = 37;
        cout<<"Karena nilai X yang anda masukkan adalah: "<<x<<" Maka nilai yang keluar adalah: "<<y;
        break;
    }
    return 0;
}