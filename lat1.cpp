
/*#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Data {
    string nama, gender;
    int umur;
    // Anda dapat menambahkan lebih banyak atribut sesuai kebutuhan
};

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "Pilih operasi yang ingin Anda lakukan:" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Tampilkan Data" << endl;
    cout << "4. Cari Data" << endl;
    cout << "5. Ubah Data" << endl;
    cout << "6. Keluar" << endl;
}

int main() {
    vector<Data> daftarData;

    while (true) {
        tampilkanMenu();
        int pilihan;
        cin >> pilihan;

        switch (pilihan) {
            case 1: // Tambah Data
                {
                    Data dataBaru;
                    cout << "Masukkan Nama: ";
                    cin >> dataBaru.nama;
                    cout << "Masukkan Umur: ";
                    cin >> dataBaru.umur;
                    cout << "Masukkan Gender: ";
                    cin >> dataBaru.gender;
                    daftarData.push_back(dataBaru);
                    cout << "Data telah ditambahkan." << endl;
                }
                break;

            case 2: // Hapus Data
                {
                    string namaHapus;
                    cout << "Masukkan Nama yang akan dihapus: ";
                    cin >> namaHapus;
                    bool ditemukan = false;
                    for (auto it = daftarData.begin(); it != daftarData.end(); ++it) {
                        if (it->nama == namaHapus) {
                            daftarData.erase(it);
                            ditemukan = true;
                                cout << "Data telah dihapus." << endl;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;*/

            /*case 3: // Tampilkan Data
                cout << "Data yang tersimpan:" << endl;
                for (const auto& data : daftarData) {
                    cout << "Nama: " << data.nama << endl;
                    cout << "Usia: " << data.umur << endl;
                    cout << "Gender: " << data.gender << endl;

                    
                }
                break;*/

            /*case 4: // Cari Data
                {
                    string namaCari;
                    cout << "Masukkan Nama yang ingin dicari: ";
                    cin >> namaCari;
                    bool ditemukan = false;
                    for (const auto& data : daftarData) {
                        if (data.nama == namaCari) {
                            cout << "Data ditemukan"<< endl<< "Nama: " << data.nama << endl<< "Umur: " << data.umur << endl<< "Gender:"<< data.gender<<endl;
                            ditemukan = true;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;

            case 5: // Ubah Data
                {
                    string namaUbah;
                    cout << "Masukkan Nama yang ingin diubah: ";
                    cin >> namaUbah;
                    bool ditemukan = false;
                    for (auto& data : daftarData) {
                        if (data.nama == namaUbah) {
                            cout << "Masukkan data yang baru:" << endl;
                            cout << "Nama: ";
                            cin >> data.nama;
                            cout << "Usia: ";
                            cin >> data.umur;
                            cout << "Gender: ";
                            cin >> data.gender;
                            cout << "Data telah diubah." << endl;
                            ditemukan = true;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;

            
            case 3: // Tampilkan Data
                cout << "Data yang tersimpan:" << endl;
                for (const auto& data : daftarData) {
                    cout << "Nama: " << data.nama << endl;
                    cout << "Usia: " << data.umur << endl;
                    cout << "Gender: " << data.gender << endl;
                    cout << endl;

                    
                }
                break;
                

            case 6: // Keluar
                cout << "Program selesai." << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}*/


#include <iostream>
#include <string>
using namespace std;

const int maxData = 100;  // Jumlah maksimum data yang dapat disimpan

struct Data {
    string nama, gender;
    int umur;
    // Anda dapat menambahkan lebih banyak atribut sesuai kebutuhan
};

// Fungsi untuk menampilkan menu
void DaftarMenu() {
    cout << "Pilih menu yang ingin dilakukan (angka) :" << endl;
    cout << "1 : Tambah Data" << endl;
    cout << "2 : Tampilkan Data" << endl;
    cout << "3 : Hapus Data" << endl;
    cout << "4 : Cari Data" << endl;
    cout << "5 : Ubah Data" << endl;
    cout << "6 : Keluar" << endl;
}

int main() {
    Data daftarData[maxData];  // Gunakan array statis
    int jumlahData = 0;  // Menyimpan jumlah data yang ada

    while (true) {
        DaftarMenu();
        int pilihan;
        cin >> pilihan;

        switch (pilihan) {
            case 1: // Tambah Data
                if (jumlahData < maxData) {
                    Data dataBaru;
                    cout << "Masukkan Nama: ";
                    cin >> dataBaru.nama;
                    cout << "Masukkan Umur: ";
                    cin >> dataBaru.umur;
                    cout << "Masukkan Gender: ";
                    cin >> dataBaru.gender;
                    daftarData[jumlahData] = dataBaru;
                    jumlahData++;
                    cout << "Data telah ditambahkan." << endl;
                } else {
                    cout << "Batas maksimum data telah tercapai." << endl;
                }
                break;

           
            case 2: // Tampilkan Data
                cout << "Data yang tersimpan:" << endl ;
                for (int i = 0; i < jumlahData; ++i) {
                    cout << "Nama: " << daftarData[i].nama << endl;
                    cout << "Umur: " << daftarData[i].umur << endl;
                    cout << "Gender: " << daftarData[i].gender << endl;
                    cout << endl;
                }
                break; 
                
            case 3: // Hapus Data
                {
                    string namaHapus;
                    cout << "Masukkan Nama yang akan dihapus: ";
                    cin >> namaHapus;
                    bool ditemukan = false;
                    for (int i = 0; i < jumlahData; ++i) {
                        if (daftarData[i].nama == namaHapus) {
                            // Geser data-data berikutnya untuk menggantikan data yang dihapus
                            for (int j = i; j < jumlahData - 1; ++j) {
                                daftarData[j] = daftarData[j + 1];
                            }
                            jumlahData--;
                            ditemukan = true;
                            cout << "Data telah dihapus." << endl;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;

            case 4: // Cari Data
                {
                    string namaCari;
                    cout << "Masukkan Nama yang ingin dicari: ";
                    cin >> namaCari;
                    bool ditemukan = false;
                    for (const auto& data : daftarData) {
                        if (data.nama == namaCari) {
                            cout << "Data ditemukan"<< endl<< "Nama: " << data.nama << endl
                            << "Umur: " << data.umur << endl<< "Gender:"<< data.gender<<endl;
                            ditemukan = true;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;

            case 5: // Ubah Data
                {
                    string namaUbah;
                    cout << "Masukkan Nama yang ingin diubah: ";
                    cin >> namaUbah;
                    bool ditemukan = false;
                    for (auto& data : daftarData) {
                        if (data.nama == namaUbah) {
                            cout << "Masukkan data yang baru:" << endl;
                            cout << "Nama: ";
                            cin >> data.nama;
                            cout << "Usia: ";
                            cin >> data.umur;
                            cout << "Gender: ";
                            cin >> data.gender;
                            cout << "Data telah diubah." << endl;
                            ditemukan = true;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;

            // Kasus lainnya sama seperti kode sebelumnya

            case 6: // Keluar
                cout << "Program selesai." << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}

