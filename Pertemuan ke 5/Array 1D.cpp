#include<iostream>
using namespace std;

int main(){
	int n, arr[100];
	cout << "Masukkan nilai n: "<<endl;
	cin>>n;
	for (int i = 0; i<n; i++){
		cin >> arr[i];
		int mx = arr[0];
		for (int i = 1; i<n; i++){
		if (arr[i] > mx){
			mx = arr[i];
			cout << mx << "\n";
		}
	}
	
	}
}
