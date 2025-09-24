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
    int x,y,pilihan,hasil;
    cout<<"Masukkan bilangan pertama"<<endl;
    cin>>x;
    cout<<"Masukkan bilangan kedua"<<endl;
    cin>>y;
    cout<<"Mau tambah, kurang, kali atau bagi?[1/2/3/4]"<<endl;
    cin>>pilihan;
    switch(pilihan){
        case 1: hasil=x+y;
        cout << "Hasilnya adalah: "<<hasil<<endl;
        break;
        case 2: hasil=x-y;
        cout << "Hasilnya adalah: "<<hasil<<endl;
        break;
        case 3: hasil=x*y;
        cout << "Hasilnya adalah: "<<hasil<<endl;
        break;
        case 4: hasil=x/y;
        cout << "Hasilnya adalah: "<<hasil<<endl;
        break;
    }

    

    return 0;
}