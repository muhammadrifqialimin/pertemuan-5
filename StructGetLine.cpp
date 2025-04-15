#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};


struct mahasiswa
{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs;

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukkan NAMA = ";
    getline(cin , mhs.nama);
    cout << "Masukkan Alamat Desa = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat Kota = ";
    cin >> mhs.alamat.kota;

    

    //menampilkan data struct
    cout << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Desa = " << mhs.alamat.desa << endl;
    cout << "Kota = " << mhs.alamat.kota << endl;

}