#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n;
	float x[n],jml=0,rata2;
	cout<<"masukkan Jumlah element= ";cin>>n;
	for (float i=0; i<n;i++){
		cout<<"masukkan nilai ke-"<<i+1<<" = ";cin>>x[n];
		jml+=x[n];
	}
	rata2=jml/n;
	cout<<"Jumlah rata-rata adalah= "<<rata2<<endl;
getch();
}
