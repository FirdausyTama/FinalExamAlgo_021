#include <iostream>
#include <string>
using namespace std;

class queues() {
	const int MAX_MAHASISWA = 100;

	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];

	int jumlahMahasiswa = 0;

	void tambahMahasiswa() {
		while (true)
		{
			cout << "Masukan Nama Mahasiswa: ";
			cin >> n;

			if (n <= 100)
				break;
			else
				cout << "\nMaksimum Tambah mahasiswa 100" << endl;
		}
		for (int i = 0; i < n; i++)
		{
			cout << "<" << (i + 1) << ">";
			cin >> arr[i];
		}
	};

	//isi disini
	void tampilkanSemuaMahasiswa(){
	int FRONT_position = FRONT;
	int REAR_position = REAR;

	//Cek apakah antrian kosong
	if (FRONT == -1) {
		cout << "Queue is empty\n";
		return;
	}

	cout << "\nElemen in the queue are: \n";
	x
	//Jika FRONT_posisition <= REAR_position, iterasi dari FRONT hhingga REAR
	if (FRONT_position <= REAR_position) {
		while (FRONT_position <= REAR_position) {
			cout << queue_array[FRONT_position] << "   ";
			FRONT_position++;
		}
		cout << endl;
	}
	else {
		// Jika FRONT_posistion > REAR_position, iterasi dari FRONT akhir array
		while (FRONT_position <= max - 1) {
			cout << queue_array[FRONT_position] << "   ";
			FRONT_position++;
		}

		FRONT_position = 0;

		//Iterasi dari awal array hingga REAR
		while (FRONT_position <= REAR_position) {
			cout << queue_array[FRONT_position] << "   ";
			FRONT_position++;
		}
		cout << endl;
	}
}
	//isi disini
	void algoritmacariMahasiswaByNIM();
	//
	void algoritmaSortByTahunMasuk();
};

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarlan Tahun Masuk" << endl;
		cout << "Keluar" << endl;
		cout << "Pilihan : ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			pilihan.tambahMahasiswa();
				break;
		case 2:
				pilihan.tampilkanSemuaMhasiswa
				break;
		case 3:
				pilihan.algoritmacariMahasiswaByNIM()
				break;
		case 4:
				//

				break;
		case 5:
				cout << "Terima kasih! Program selesai." << endl;
				break;
		default:
				cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

	return 0;
}

// ESAY
// 2.memakai algoritma linearsreach dan stack dan bubblesort
// 3. STACK: LIFO (LAST IN FRIST OUT) Menyimpan data dengan cara di tumpuk
//	  QUEUE: FIFO (FRIST IN FRIST OUT) Seperti mengantri, masuk belakang keluar dari depan
// 4. identify the feature of a stack, implement stack, apply stacks to solve programing problems,
//   memakai array karena di tumpuk karna penggunaanya yang terbatas.
// 5. a. 5 Kedalaman
//    b. preorder akar kanan kiri