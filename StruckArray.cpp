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
    mahasiswa mhs[2];

    for (int i = 0; i  < 2; i++){
        cout << "Mahasiswa ke-"<< i+1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[i].nim;
        cin.ignore();
        cout << "Masukkan NAMA = ";
        getline(cin , mhs[i].nama);
        cout << "Masukkan Alamat Desa = ";
        cin >> mhs[i].alamat.desa;
        cout << "Masukkan Alamat Kota = ";
        cin >> mhs[i].alamat.kota;
    }
