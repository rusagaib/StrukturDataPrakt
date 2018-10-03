#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n;
	float x[n],jml=0,jml_2,s_e2,varian;
	cout<<"masukkan Jumlah element= ";cin>>n;
	for (float i=0; i<n;i++){
		cout<<"masukkan nilai ke-"<<i+1<<" = ";cin>>x[n];
		s_e2+=(pow(x[n], 2)); //jumlah dari semua element yang dikuadratkan S(e^2)
		jml+=x[n];
	}
	//kuadrat dari jumlah total semua element (S(e))^2
	jml_2=pow(jml, 2);
	//varian = S" sedangkan Devisiasi = S
	varian=((n*s_e2)-jml_2)/(n*(n-1));
	cout<<"standar Devisiasi= "<<sqrt(varian)<<endl;
getch();
}

