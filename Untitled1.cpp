/*
Nama: Mohammad Dhikri
npm: 140810180075
tanggal pembuatan: 26 Maret 2019
Deskripsi: pretest 04
no :1
Kelas: A
*/
#include <iostream>
using namespace std;
struct elmntList{
	char npm[14];
	char nama[40];
	float ipk;
	elmntList* next;
};
typedef elmntList* pointer;
typedef pointer list;

void createList(list& first){
	first=NULL;
}
void createElement(pointer& pBaru){
	pBaru= new elmntList;
	cout<<"NPM : "; cin>>pBaru->npm;
	cout<<"Nama: "; cin>>pBaru->nama;
	cout<<"IPK : "; cin>>pBaru->ipk;
	pBaru->next=NULL;
}
void insertsortNPM(list& first, pointer pBaru){
	if(first==NULL){
		first=pBaru;
	}
	else{
		pBaru->next=first;
		pBaru=first;
	}
}
void traversal(list first){
	pointer pBantu;
	if(first==NULL){
		cout<<"empty list... "<<endl;
	}
	else{
		pBantu=first;
		do{
			cout<<"\t"<<pBantu->npm;
			cout<<"\t\t"<<pBantu->nama;
			cout<<"\t\t"<<pBantu->ipk;
			pBantu=pBantu->next;
			cout<<endl;
		}
		while(pBantu!= NULL);
	}
}
void insertLast(list& First, pointer pBaru){ 
 
	pointer last;       
	pBaru= new elmntList;
	cout<<"NPM : "; cin>>pBaru->npm;
	cout<<"Nama: "; cin>>pBaru->nama;
	cout<<"IPK : "; cin>>pBaru->ipk;
	pBaru->next=NULL; 
	if (First==NULL){ 
		First=pBaru; 
	}	 
	else {             
		last=First;     
		while (last->next!=NULL){   
			last=last->next; 
		} 
		last->next=pBaru; 
	} 
}
typedef pointer poin[100];
main(){
	list mahasiswa;
	int n, pil;
	poin p;
	pointer po;
	createList(mahasiswa);
	 cout<<"Masukan banyak inputan : "; cin>>n;
	 for(int i=0; i<n; i++){
	 	createElement(p[i]);
	 	insertsortNPM(mahasiswa, p[i]);
	 }
	cout<<"No.\tNPM\t\t\tNama\t\tIPK"<<endl;
	traversal(mahasiswa);
	cout<<endl;
	do{
	cout<<endl<<"1. Tambah data "<<endl;
	cout<<"2.Keluar"<<endl;
	cout<<"Pilih : "; cin>>pil; 
	switch(pil<2){
		case 1:
		insertLast(mahasiswa, po);
		cout<<"No.\tNPM\t\t\tNama\t\tIPK"<<endl;
		traversal(mahasiswa);
		break;
		default:
		cout<<"Thank you "<<endl;
		break;	
	}
 }while(pil<2);
}
