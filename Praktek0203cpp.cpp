#include <iostream>
using namespace std;

int main(){
	double ton=35273.92;
	
	double berat;
	cout<<"Masukkan Berapa Berat Sereal dalam 1 kotak kemasan(satuan ounce) = ";
	cin >> berat;
		
	double ounce= 1/ton;
	double beratTon =berat*ounce;
	cout<<"1 kotak kemasan sereal beratnya (satuan Ton)= ";
	cout << beratTon<<endl;
	
	double jumlah=1/beratTon;
	cout<<"jika terdapatt 1 ton sereal, maka akan memerlukan = "<<jumlah;cout<<"kotak"<<endl;
}
