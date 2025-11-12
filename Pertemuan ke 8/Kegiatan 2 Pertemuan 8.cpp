 #include<iostream>
 #include <fstream> 
 #include <vector>
 #include <sstream>
   using namespace std; 
vector<int> bacaDataDariFile(const string &namaFile) {
    ifstream file(namaFile.c_str());
    vector<int> data;
    int angka;

    if (!file) {
        cerr << "Gagal membuka file " << namaFile << endl;
        exit(1); 
    }

   
    while (file >> angka) {
        data.push_back(angka);
    }

    file.close();
    return data;
}


int maksimumRekursif(int arr[], int n) {
    if (n == 1)
        return arr[0]; 

    int maxSubarray = maksimumRekursif(arr, n - 1);
    return (arr[n - 1] > maxSubarray) ? arr[n - 1] : maxSubarray;
}

 
   int main() { 
       vector<int> data = bacaDataDariFile("angka_input.txt");
       int n = data.size();
       int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = data[i];
    }


       cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr, n) << endl; 
       return 0; 
   } 
 