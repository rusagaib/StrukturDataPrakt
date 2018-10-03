#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a,b[a];
	float jumlah=0,rata2;
	cout<<"masukkan Jumlah element= ";cin>>a;
	for (int i=0; i<a;i++){
		cout<<"masukkan nilai ke-"<<i+1<<" = ";cin>>b[a];
		jumlah+=b[a];
	}
	rata2=jumlah/a;
	cout<<"Jumlah rata-rata adalah= "<<rata2<<endl;
getch();
}
