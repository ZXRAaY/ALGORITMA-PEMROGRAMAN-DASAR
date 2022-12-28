/* Nama : Hafiyan Sayidan
NPM : 4521210074
Praktek : Tugas Besar
Materi : Si pembayaran Telephone
*selection 
*repetation
*Array
*Function
*String / File
*Selection sort descending*/
					

#include <iostream> // library untuk input dan output
#include <fstream> // library untuk membuka file
#include <string.h> // library untuk memberikan nilai suatu karakter string 
#include<math.h> // untuk operasi matematika
using namespace std;

const int MaxMenu = 50; 
char penyangga[MaxMenu+1];
char daftarMenu[] = {"daftarMenu.txt"};

void buatdaftarMenu(){//materi file 
	//buat dan buka teks daftar menu 
	ofstream Fileku("daftarMenu.txt");
	//tulis file daftar menu
	Fileku <<"1.XL" << endl;
	Fileku <<"2.TRI" << endl;
	Fileku <<"3.Indosat" << endl;
	Fileku <<"4.Axis" << endl;
	Fileku <<"5.by.U" << endl;   
	//tutup file daftarMenu
	Fileku.close();
}
void bacadaftarMenu(){
	ifstream Fileku("daftarMenu.txt");
	//membaca seluruh data dari daftarMenu
	while(Fileku)
	{
		 Fileku.getline(penyangga,MaxMenu);
		 cout << penyangga << endl;
	}
	//menutup file
	Fileku.close();
}
void menampilkanmenu(){ //menggunakan fungsi
	int pilih = 4;
	double biaya,diskon,bayar;
	double lama = 54;
	double lama1 = 40;
	double lama2 = 25;
	double lama3 = 30;
	double lama4 = 15;
	double bayar0 = 19000;
	double bayar1 = 20000;
	double bayar2 = 15000;
	double bayar3 = 10000;
	double bayar4 = 8000;
	char ya='y';
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "MEMILIH MENU " << pilih;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout <<endl; 
	switch(pilih){//materi selection
		case 1: cout <<"Di bawah ini merupakan data pemakaian telepon anda : " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Menggunakan kartu XL"<< endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Dan anda telah bertelepon selama = 54 menit " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				if (lama>=50)
				{
					biaya=50*300;
					diskon=(lama-50)*15;
					bayar=biaya+diskon;
				}
				else
				bayar=lama*200;
			cout <<"bayaran yang di tanggung anda selama anda menelpon adalah.. Rp" << bayar << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"NOTE:[Bayaran ini berupa pulsa yang di tagih selama anda menelpon]" << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"Pembayaran lanjutan ada di bawah ini  " << endl;
			cout << endl;
				 {
					 if (ya == 'y')
					 {
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Tagihan yang harus anda bayar adalah..." << bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Pembayaran ....." << bayar0 << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Uang kembalian...." << bayar0 - bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 }
					 else (ya =='t');
					 { 
					 
					 }
					 
				 }
		break;
		
		case 2: cout <<"Di bawah ini merupakan data pemakaian telepon anda : " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Menggunakan kartu TRI"<< endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Dan anda telah bertelepon selama = 40 menit " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				if (lama2>=20)
				{
					biaya=30*250;
					diskon=(lama1-30)*10;
					bayar=biaya+diskon;
				}
				else
				bayar=lama1*275;
			cout <<"bayaran yang di tanggung anda selama anda menelpon adalah.. Rp" << bayar << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"NOTE:[Bayaran ini berupa pulsa yang di tagih selama anda menelpon]" << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"Pembayaran lanjutan ada di bawah ini  " << endl;
				 {
					 if (ya == 'y')
					 {
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Tagihan yang harus anda bayar adalah..." << bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Pembayaran ....." << bayar1 << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Uang kembalian...." << bayar1 - bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 }
					 else (ya =='t');
					 { 
					 
					 }
					 
				 }
		break;
		
		case 3: cout <<"Di bawah ini merupakan data pemakaian telepon anda : " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Menggunakan kartu INDOSAT"<< endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Dan anda telah bertelepon selama = 25 menit " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				if (lama2>=20)
				{
					biaya=20*350;
					diskon=(lama2-20)*35;
					bayar=biaya+diskon;
				}
				else
				bayar=lama2*320;
			cout <<"bayaran yang di tanggung anda selama anda menelpon adalah.. Rp" << bayar << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"NOTE:[Bayaran ini berupa pulsa yang di tagih selama anda menelpon]" << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"Pembayaran lanjutan ada di bawah ini  " << endl;
				 {
					 if (ya == 'y')
					 {
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Tagihan yang harus anda bayar adalah..." << bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Pembayaran......" << bayar2 << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Uang kembalian...." << bayar2 - bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 }
					 else (ya =='t');
					 { 
					 
					 }
					 
				 }
		break;
		
		case 4: cout <<"Di bawah ini merupakan data pemakaian telepon anda : " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Menggunakan kartu AXIS"<< endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Dan anda telah bertelepon selama = 30 menit " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				if (lama3>=25)
				{
					biaya=25*295;
					diskon=(lama3-25)*25;
					bayar=biaya+diskon;
				}
				else
				bayar=lama3*285;
			cout <<"bayaran yang di tanggung anda selama anda menelpon adalah.. Rp" << bayar << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"NOTE:[Bayaran ini berupa pulsa yang di tagih selama anda menelpon]" << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"Pembayaran lanjutan ada di bawah ini  " << endl;
				 {
					 if (ya == 'y')
					 {
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Tagihan yang harus anda bayar adalah..." << bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Pembayaran....." << bayar3 << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Uang kembalian...." << bayar3 - bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 }
					 else (ya =='t');
					 { 
					 
					 }
					 
				 }
		break;
		
		case 5: cout <<"Di bawah ini merupakan data pemakaian telepon anda : " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Menggunakan kartu by.U"<< endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout <<"Dan anda telah bertelepon selama = 15 menit " << endl;
				cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				if (lama4>=10)
				{
					biaya=10*275;
					diskon=(lama4-10)*10;
					bayar=biaya+diskon;
				}
				else
				bayar=lama4*250;
			cout <<"bayaran yang di tanggung anda selama anda menelpon adalah.. Rp" << bayar << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"NOTE:[Bayaran ini berupa pulsa yang di tagih selama anda menelpon]" << endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout <<"Pembayaran lanjutan ada di bawah ini  " << endl;
				 {
					 if (ya == 'y')
					 {
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Tagihan yang harus anda bayar adalah..." << bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Pembayaran....." << bayar4 << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 cout<<"Uang kembalian...." << bayar4 - bayar << endl;
					 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					 }
					 else (ya =='t');
					 { 
					 
					 }
					 
				 }
		break;
		
		default :cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
				 cout << "Pilihan tidak sesuai dengan menu !!! " << endl;
				 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				 
	}
}
void pembukaan(){//repetation
	int w = 0;
	while (w ==0)
	{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Selamat datang di sistem pembayaran telephone" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "	~~~~~ by : Hafiyan Sayidan ~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Dibawah ini merupakan Kartu telepon yang kita pakai" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	w++;
	}
}
void kartuTOP(){//array 1 dimensi 
	 string	 Nilai[3] = { "TRI" , "by.U" , "INDOSAT" };
	 int iyan;
	 cout << endl;
	 cout <<"========================================"<< endl;
	 cout <<"TOP 3 KARTU YANG SERING DI PAKAI" << endl;
	 cout <<"========================================"<< endl;
	 for (iyan=0; iyan < 3; iyan++)
	 {
	 cout <<" TOP  " << iyan+1 << " : " << Nilai[iyan] << endl;
	 cout <<"========================================"<< endl;
	 }
	 cout <<"==============TERIMAKASIH===============" << endl;
}
void pengurutan(){//sort selection descending 
	#define n 5
	#include <string.h> 
	int i,yan, sayidan;
	int nilai[n] = {7600,15060,7175,7500,5000};
	cout <<"========================================="<< endl;
	cout << "INFORMASI TAMBAHAN ADA DI BAWAH INI" << endl;
	cout <<"========================================="<< endl;
	cout <<"||||||||||||||||||||||||||||||||||||||" << endl;
	cout <<"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv" << endl;
	cout <<"Harga kartu rata rata dari yang tertinggi hingga terendah "<<endl;
	cout <<"[Dilihat dari pemakaian akhir akhir ini~~]" << endl;
	cout <<"============================================================="<< endl;
	cout<<endl;
	for(i=0; i<=n-1; i++)
		cout << nilai[i] << "  " ;
		cout << endl;
		cout <<"================================================================"<< endl;
		
	for (yan=0; yan<=n; yan++)
	{
		i=yan;
		sayidan=nilai[i];
		while (i>=0 && nilai[i-1] < sayidan)
		{
			nilai[i] = nilai[i-1];
			i--;
		}
		nilai[i]=sayidan;
	}
	cout <<"================================================================"<< endl;
	cout << "Harga kartu rata rata dari yang tertinggi hingga terendah[Sesudah di urutkan] " << endl;
	cout <<"[Dilihat dari pemakaian akhir akhir ini~~]" << endl;
	cout <<"================================================================"<< endl;
	for(i=0; i<=n-1; i++)
		cout << nilai[i] << "  " ;
		cout << endl;
		cout <<"================================================================"<< endl;
		cout << "[XL : 15060] [TRI : 7600] [AXIS : 7500] [INDOSAT : 7175] [byU : 5000] " << endl;
	cout << endl;
}
int main(){
	pembukaan();
	buatdaftarMenu();
	bacadaftarMenu();
	menampilkanmenu();
	pengurutan();
	kartuTOP();
	
	cin.get();
	cout <<endl;
}