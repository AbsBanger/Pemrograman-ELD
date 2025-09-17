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
    int m[3][3];
    cout << "Masukkan elemen matriks yang ingin kamu masukkan: " << endl;
    for(int i=0; i<3; i++){
    cin >> m[i][0] >> m[i][1] >> m[i][2];}
    cout << "matriks yang kamu masukkan: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << m[i][j];
            if (j < 2) cout << "";
        }
        cout <<"/n";
    }

    return 0;
}