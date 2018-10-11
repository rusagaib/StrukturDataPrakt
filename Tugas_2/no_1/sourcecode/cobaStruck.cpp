#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct film {     //stroke film
  string nama_f;
  string tahun;
};

film daftar[10]; //indeks-kyaa
int n,i,pilih;  //var globall

int main () {
  yu: //ini tag biar bisa kembali
  cout<<"\n====================\n";
  cout<<"Movie ~~\n";
  cout<<"====================\n";
  cout<<"1.Masukkan Daftar Film\n2.Tampilkan Data Film\n3.Keluar\n";
  cout<<"Masukkan Pilihan anda (1/2/3)= ";
  cin>>pilih;
  switch (pilih) { //pakai swich untuk menu pilihan
    case 1:
      cout<<"\n====================\n";
      cout<<"Masukkan banyak data : ";
      cin>>n;
      cout<<"Daftar Film :"<<endl;
      for (i=1; i<=n; i++) {
        cout<<"\nData ke- "<<i<<endl;
        cout<<"Nama film :";
        cin>>daftar[i].nama_f;
        cout<<"Masukkan Tahun :";
        cin>>daftar[i].tahun;
      }
      getch();
      goto yu; //hehe..

    case 2:
      cout<<"\n====================\n";
      cout<<"Ini Daftar Film-nyan~~";
      cout<<"\n====================\n";
      for (i=1; i<=n; i++) {
        cout<<endl<<endl<<"Data Film ke-  "<<i<<endl;
        cout<<"Nama Film:"<<daftar[i].nama_f<<endl;
        cout<<"Tahun :"<<daftar[i].tahun<<endl;
      }
      cout<<"\n";
      getch();
      goto yu;

    default:
      cout<<"\nTerimakasih.."<<endl;
      break;
  }

}
