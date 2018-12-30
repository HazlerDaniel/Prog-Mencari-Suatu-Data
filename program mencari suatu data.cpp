#include<iostream>
#include<conio.h>
using namespace std;
main(){


int nilai [20];
int i,N,angka,bilangan;
cout<<"Masukan Banyaknya Bilangan =";cin>>N;

/*MEMBACA ELEMEN ARRAY*/
for(i=0;i<N;i++){
cout<<" Masukan elemen ke -"<<i<<" =";cin>>nilai[i]; }
//mencetak elemen array
cout<< " Deretan Bilangan =";
for(i=0;i<N;i++)
cout<<nilai[i]<<" ";
cout<<endl<<endl;
cout<<" Masukan bilangan yang dicari =";
cin>>bilangan;
cout<<endl;

//melakukan pencarian 
i=0;
do{
if(nilai[i]==bilangan)
	angka=nilai[i];
	i++;}
	while(i<N);
	if(angka==bilangan)
	cout<<"Bilangan"<<bilangan<<"ditemukan";
	else
	cout<<"Bilangan"<<bilangan<<"tidak ditemukan";
	getch();
}
