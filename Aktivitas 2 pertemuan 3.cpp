/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Masukkan angka"<<endl;
    cin>>x;
    if(x<=1){
        cout<<"Bukan bilangan Prima, harus lebih dari sama dengan 1"<<endl;
    }else if(x%2==0){
        cout<<"Bukan bilangan prima"<<endl;
    }else cout << "merupakan bilangan prima"<<endl;
    return 0;
}