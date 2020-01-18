#include <iostream>
#include <string.h>
using namespace std;

int main(){
	cout<<"Masukkan operasi yang diinginkan : \n1.Penambahan Bilangan\n2.Pengurangan Bilangan\n3.Perkalian Bilangan\n4.Turunan Polinomial\n";
	int P,a,b,c;
	cin>>P;

	if (P<4){
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
	
	else if (P==4){
		int N;
		cout<<"\nMasukkan pangkat tertinggi persamaan polinomial ";
		cin>>N;
		int koef1[N+1];
		int koef2[N];
		string tur="";
		
		for (int i=0;i<N+1;i++){
			cout<<"\nKoefisien pangkat- "<<i<<" =";
			cin>>koef1[i];
		}
		
		for (int i=0;i<N;i++){
			koef2[i]=koef1[i+1]*(i+1);
		}
		cout<<"\nHasil turunan persamaan polinomialnya adalah :";
		for (int i=0;i<N;i++){
			cout<<"\nKoefisien pangkat- "<<i<<" = ";
			cout<<koef2[i];
		}
	}
}
