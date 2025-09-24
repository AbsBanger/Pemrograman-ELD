/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan nilai: " << endl;
    cin>>nilai;
    if (nilai >= 80){
        cout<<"Nilaimu adalah A"<<endl;
    }else if (nilai >= 60 && nilai < 80){
        cout<<"Nilaimu adalah B"<<endl;
    }else if (nilai >= 40 && nilai < 60){
        cout<<"Nilaimu adalah C"<<endl;
    }else if (nilai >= 20 && nilai < 40){
        cout<<"Nilaimu adalah D"<<endl;
    }else if (nilai < 20){
        cout<<"Nilaimu adalah E"<<endl;
    }


    return 0;
}