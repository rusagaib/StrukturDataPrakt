#include <iostream>
#include <conio.h>
using namespace std;
int n;
int main(){
	 int x[n];
	float rata,jml=0;
	cout<<"masukkan Jumlah element= ";cin>>n;
	for (int i=0; i<n; i++){
		cout<<"masukkan nilai ke-"<<i+1<<" = ";cin>>x[n];
		jml+=x[n];
	}
	rata=jml/n;
	cout<<"Rata-Ratanya adalah= "<<rata<<endl;
}
