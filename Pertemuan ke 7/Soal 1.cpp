#include <iostream>
using namespace std;

double celcius(double c,double n){
	cout << "Masukkan Jumlah data suhu: " << endl;
	cin >> n;
	for(int i=0; i < n; i++){
		cout << "Masukkan suhu ke- "<< i+1 << "(celcius): " << endl;
		cin >> c;
		cout << "Celcius: " << c << endl << "Fahrenheit: " << c + 32 << endl << "Kelvin: " << c + 273 << endl; 
	}
};

int main(){
	double n, c;
	cout << celcius(c,n);
	return 0;
}
