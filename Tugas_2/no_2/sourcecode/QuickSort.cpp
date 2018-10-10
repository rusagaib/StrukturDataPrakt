#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int Ar[n];
void quickSort(int arr[], int left, int right);

int main(){

  int Ar[8]={5,34,32,25,75,42,22,2};

  cout<<"Data sebelum diurutkan: \n";
  for (int d=0; d<8; d++){
  cout<<setw(3)<<Ar[d];
  }

  cout<<endl<<endl;
  quickSort(Ar,0,8);
  cout<<"Data yang telah diurutkan: "<<endl;
  for(int i=0; i<8;i++){
    cout<<setw(3)<<Ar[i];
  }
  cout<<endl;

}

void quickSort(int arr[], int left, int right){
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];
  while (i <= j) {
    while (arr[i] < pivot)
      i++;
      while (arr[j] > pivot)
      j--;
        if (i <= j) {
          tmp = arr[i];
          arr[i] = arr[j];
          arr[j] = tmp;
          i++;
          j--;
        }
    };
  if (left < j){
    quickSort(arr, left, j);
  }
  if (i < right){
    quickSort(arr, i, right);
  }

}
