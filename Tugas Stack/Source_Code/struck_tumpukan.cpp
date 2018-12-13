#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int pil;
int add_pilih();
int add_belakang();
int delete_belakang();
int tampil();


struct simpul
{
   char nama[15], posisiLur[20];
   int nPungung;
   struct simpul *next;
} *baru, *awal=NULL, *akhir=NULL,*hapus,*tempk;

int main()
{
   do
   {
     cout << "Linked list Tumpukan" << '\n';
     cout << "1. Push" << '\n';
     cout << "2. Pop" << '\n';
     cout << "3. Tampil" << '\n';
     cout << "4. Exit" << '\n';
     cout << "Pilih (1-4) : ";
     cin>>pil;
     add_pilih();
   }while(pil!=4);
  return 0;
}

int add_pilih()
{
   if(pil==1)
       add_belakang();
   else if(pil==2)
       delete_belakang();
   else if(pil==3)
       tampil();
   else
       cout<<"Terimakasih"<<endl;
}

int add_belakang()
{
   baru=(simpul*)malloc(sizeof(struct simpul));

   cout<<"no. Punggung   : ";cin>>baru->nPungung;
   cout<<"Nama  : ";cin.ignore();cin.getline(baru->nama, 15);
   cout<<"Posisi  : ";cin.ignore();cin.getline(baru->posisiLur, 20);
   baru->next=NULL;
   if(awal==NULL)
   {
       awal=baru;
   }
   else
   {
       akhir->next=baru;
   }
   akhir=baru;
   akhir->next=NULL;
   cout<<endl<<endl;

}

int delete_belakang()
{
   if (awal==NULL)
       cout<<"Kosong"<<endl;
   else if(awal==akhir)
   {
        hapus=awal;
        awal=awal->next;
        free(hapus);
   }
   else
   {
       hapus=awal;
       while(hapus->next!=akhir)
            hapus=hapus->next;
       akhir=hapus;
       hapus=akhir->next;
       akhir->next=NULL;
       free(hapus);
   }
   cout<<endl<<endl;

}

int tampil()
{
    if (awal==NULL)
         cout<<"Kosong"<<endl;
    else
    {
        tempk=awal;
        while(tempk!=NULL)
        {
           cout<<"  No  : "<<tempk->nPungung;
           cout<<"  Nama : "<<tempk->nama;
           cout<<"  Posisi : "<<tempk->posisiLur<<endl;
           tempk=tempk->next;
        }
    }
    getch();
}
