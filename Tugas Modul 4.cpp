#include <iostream>
using namespace std;

class Pengguna{
	public:
	string nama;

	void user (){
		cout << "============================================" << endl;
		cout << "        Masukkan nama Anda: "; 	
		cin >> nama; 
	
		cout << "|________________Halo " << nama << "!________________|" << endl;
		cout << endl;
		if (nama =="Hasna" || nama == "Ainaya" || nama == "Syasa" || nama == "Josh"){
			cout << "Anda merupakan member premium." << endl;
			cout << "Biaya wahana sebesar Rp20.000 per orang" << endl;
		}
		else {
			cout << "Anda merupakan non-member." << endl;
			cout << "Biaya wahana sebesar Rp30.000 per orang" << endl;
		}
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		cout << endl;
	}
};

string status(int umur){
	if (umur > 15){
		return "Anda BOLEH menaiki wahana!";
	}
	else {
		return "Anda TIDAK BOLEH menaiki wahana!";
	}
}

string next(){
	int lanjut;
	if (lanjut==1){
		return "Masukkan data usia teman Anda";
	}
	else if (lanjut == 0){
		return "Tidak perlu memasukkan data usia teman Anda";
	}
	

	
}

int main(){

	cout << "********************************************" << endl;
	cout << "|      Selamat Datang di Taman Sapali      |" << endl;
	cout << "********************************************" << endl;
	cout << endl;
	
	
	Pengguna data1;
	data1.user();
	
	int umur;
	cout << "============================================" << endl;
	cout << "           Masukkan usia Anda: ";
	cin >> umur;
	cout << status(umur) << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << endl;
	
	int lanjut;
	cout << "============================================" << endl;
	cout << "Apakah Anda lebih dari 1 orang?" << endl;
	cout << "Ketik 1, jika iya. Ketik 0, jika tidak: "; cin >> lanjut;
	cout << next() << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << endl;
	
	int jumlah;	
	cout << "============================================" << endl;
	cout << "Berapa total yang menaiki wahana? " << endl; 
	cout << "(TIDAK TERMASUK ANDA)" << endl;
	cout << "Ketik 0 jika Anda tidak membawa teman: ";cin >> jumlah;

	int i;
	if (jumlah > 0){
		for (i=1 ; i <= jumlah ; i++){
		cout << "Masukkan usia teman Anda: ";
		cin >> umur;
		cout << "Teman " << status(umur) << endl;
		}
	}
	
	
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << endl;
	cout << "SELESAI!" << endl;
}

