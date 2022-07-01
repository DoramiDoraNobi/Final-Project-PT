#include <iostream>

using namespace std;

int main(){
	string nama, nim, user_fakul, fakul[3];
	fakul[0] = "Fakultas Ilmu Komputer";
	fakul[1] = "Fakultas Ekonomi dan Sosial";
	fakul[2] = "Fakultas Sains dan Teknologi";
	int fakultas, prodi, spp_tetap, sks, spp_vbl, totbay;
	bool kelas;
	
	// Code Input Nama dan Nim 
	cout<<"Masukkan NIM Anda : "<<endl;
	cin>>nim;
	cout<<"Masukkan Nama Anda : "<<endl;
	cin>>nama;
	cout<<"Silahkan Masukkan Fakultas Anda"<<endl;
	cout<<"Ketik 1 untuk Fakultas Ilmu Komputer"<<endl;
	cout<<"Ketik 2 untuk Fakultas Ekonomi dan Sosial"<<endl;
	cout<<"Ketik 3 untuk Fakultas Sains dan Teknologi"<<endl;
	cin>>fakultas;
	
	//Code If ELse
	if(fakultas == 1){
		user_fakul = fakul[0];
		cout<<"Kamu adalah Anggota dari "<<user_fakul<<endl;
		cout<<"Apakah Anda Kelas International atau Kelas Reguler. Ketik 1 Untuk Kelas International dan Ketik 2 Untuk Kelas Reguler"<<endl;
		cin>>kelas;
		if(kelas == 1 ){
			spp_tetap = 2550000;
			spp_vbl = 180000*sks;
		}
		else{
			spp_tetap = 2075000;
			spp_vbl = 140000*sks;
		}
	}
	else if(fakultas == 2){
		cout<<"Kamu adalah Anggota dari "<<user_fakul<<endl;
		spp_tetap == 1475000;
		spp_vbl == 140000;
	}
	else if(fakultas == 3){
		cout<<"Kamu adalah Anggota dari "<<user_fakul<<endl;
		spp_tetap = 2075000;
		spp_vbl = 140000*sks;
	}
	else{
		cout<<"Mohon Masukkan Input yang sudah disediakan di atas"<<endl;
	}
	
	cout<<"Masukkan SKS : "<<endl;
	cin>>sks;
	totbay = spp_tetap + spp_vbl;
	cout<<"Administrasi Mahasiswa Amikom"<<endl; 
	cout<<"Nama Mahasiswa : "<<nama<<endl;
	cout<<"NIM Mahasiswa : "<<nim<<endl;
	cout<<"Jumlah SPP Tetap yang harus di bayarkan : Rp."<<spp_tetap<<endl;
	cout<<"jumlah SPP Variabel yang harus di bayarkan : Rp."<<spp_vbl<<endl;
	cout<<"Maka Total Bayar : Rp."<<totbay;
	
	
}
