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
    int x;
    cout<<"Masukkan bilangan";
    cin>>x;
    if(x%2=0,x>0){
        cout<<"Bilangan genap positif";

    }else if(x%2=0,x<0){
        cout<<"Bilangan genap negatif";

    }else if(x%2!=0,x>0){
        cout<<"Bilangan ganjil positif";

    }else if(x%2!=0,x<0){
        cout<<"Bilangan ganjil negatif";

    }else if(x==0){
        cout<<"Inimah nol atuh!";

    }else cout<<"Inimah bukan angka";
    

    return 0;
}