#include <iostream>

#include <stdexcept> 

using namespace std;

string nama, kls, nim, user_fakul, fakul[3];
int fakultas, prodi, spp_tetap, sks, spp_vbl, totbay;
char pli;

void Percabangan(int fakul_kuliah){
	//Code untuk If ELse
	char kelas;
	if(fakul_kuliah == 1){
		user_fakul = fakul[0];
		cout<<"\nKamu adalah Anggota dari "<<user_fakul<<endl;
		cout<<"Apakah Anda Memilih Kelas International (Y/n) : ";
		cin>>kelas;
		if(kelas == 'Y' || kelas == 'y' ){ // Ya untuk kelas inter
			spp_tetap = 2550000;
			spp_vbl = 180000;
			kls = "International";
		}
		else{ // untuk tidak, default reguler
			spp_tetap = 2075000;
			spp_vbl = 140000;
			kls = "Reguler";
		}
	}
	else if(fakul_kuliah == 2){
		user_fakul = fakul[1];
		cout<<"\nKamu adalah Anggota dari "<<user_fakul<<endl;
		spp_tetap = 1475000;
		spp_vbl = 140000;
		kls = "Reguler";
	}
	else if(fakul_kuliah == 3){
		user_fakul = fakul[2];
		cout<<"\nKamu adalah Anggota dari "<<user_fakul<<endl;
		spp_tetap = 2075000;
		spp_vbl = 140000;
		kls = "Reguler";
	}
	else{
		throw range_error(" Mohon Masukkan Input yang sudah disediakan di atas.\n");
	}
}




//Fungsi untuk menghitung Total pembayaran
int Perhitungan(int spp_ttp, int spp_variabel, int sks){
	int spp_totVbl = spp_variabel * sks;
	int tot_bay = spp_ttp + spp_totVbl;
	cout<<"Total SPP Tetap \t\t: "<<spp_ttp<<endl;
	cout<<"\tSPP Variabel \t: "<<spp_variabel<<endl;
	cout<<"\tsks \t\t: "<<sks<<endl;
	cout<<"Total SPP Variabel \t\t: "<<spp_totVbl<<endl;
	cout<<"Total Yang Harus Dibayarkan \t: "<<tot_bay<<endl;
	return tot_bay;
}

int main(){
	
	fakul[0] = "Fakultas Ilmu Komputer";
	fakul[1] = "Fakultas Ekonomi dan Sosial";
	fakul[2] = "Fakultas Sains dan Teknologi";
	
	do{
	
	// Code untuk input Nama dan NIM 
	cout<<"\n--------------Administrasi Mahasiswa Amikom--------------\n"<<endl; 
	cout<<" Masukkan NIM Anda  : ";
	cin>>nim;
	cout<<" Masukkan Nama Anda : ";
	getline(cin >> ws, nama);
	cout<<"\n---------------------------------------------------------\n"<<endl;
	
	cout<<"\n ---Silahkan Masukkan Fakultas Anda---\n"<<endl; 
	cout<<" Pilih 1 untuk Fakultas Ilmu Komputer"<<endl;
	cout<<" Pilih 2 untuk Fakultas Ekonomi dan Sosial"<<endl;
	cout<<" Pilih 3 untuk Fakultas Sains dan Teknologi"<<endl;
	cout<<" Pilih Fakultas : "; 
	cin>>fakultas;
	try
	{
		Percabangan(fakultas);
		cout<<"\nMasukkan SKS : ";
		cin>>sks;
		
		cout<<"\n---------------------------------------------------------"<<endl;
		cout<<"\n--------------Administrasi Mahasiswa Amikom--------------"<<endl;
		cout<<"\n Nama Mahasiswa               : "<<nama<<endl;
		cout<<" NIM                          : "<< nim << endl;
		cout<<" Fakultas                     : "<<user_fakul<<endl;
		cout<<" Kelas                        : "<<kls<<endl;
		cout<<"\n---------------------------------------------------------"<<endl;
		
		Perhitungan(spp_tetap, spp_vbl, sks);
		
	}
	catch(const exception& e)
	{
		cerr << '\n' << e.what();
	}
	cout<<"\n\n---------------------------------------------------------"<<endl;
	cout<<"\n Melakukan Lagi [Y/N] : ";
	cin>>pli;
	cout<<"\n-----------------------------------------------------------\n\n"<<endl;
	
	}
	while (pli == 'Y' || pli == 'y');
	cout<<"---------------------------SELESAI---------------------------\n";
	return 0;
}
