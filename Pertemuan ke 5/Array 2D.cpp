#include<iostream>
using namespace std;
 int main(){
 	int R,C, m[10][10];
 	cout << "Masukkan nilai R dan C" << endl;
 	cin >> R >> C;
 	for(int r=0; r<R; r++){
 		for(int c=0; c<C; c++){
 			int s=0;
 			cout << "Masukkan nilai m[r][c]" << endl;
 			cin>>m[r][c];
 			for(int c=0;c<C;c++){
 				s=s+m[r][c];
 				cout << s << "\n";
			 }
 				
		 }
	 }
 }
