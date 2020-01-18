#include <iostream>
#include <string.h>
using namespace std;

int main(){
	cout<<"Masukkan operasi yang diinginkan : \n1.Penambahan Bilangan\n2.Pengurangan Bilangan\n3.Perkalian Bilangan\n4.Turunan Polinomial\n";
	int P,a,b,c;
	cin>>P;
	cout<<"\nMasukkan bilangan pertama\n";
	cin>>a;
	cout<<"Masukkan bilangan kedua\n";
	cin>>b;
	
	if (P==1){
		c=a+b;
		cout<<"\nHasil penjumlahan: "<<c;
		
	}
	
	else if(P==2){
		c=a-b;
		cout<<"\nHasil pengurangan: "<<c;
		
	}
	
	else if (P==3){
		c=a*b;
		cout<<"\nHasil perkalian: "<<c;
	}
	
}
