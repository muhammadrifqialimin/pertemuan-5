#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran, wajib langsung diisi data
int nilai[]={1,2,3};


//deklarasi array dengan ukuran, dan diberi nilai awal
int skor[4]={9,13,20,11};

// deklarasi array dengan ukuran, tanpa nilai awal
string nama[3];

int main(){
    cout << "isi data skor yang ketiga = " << skor[2] << endl;
    //mengisi array pada index tertentu secara langsunng
    skor[2] = 50;
    cout << "isi data skor yang ketiga = " << skor[2] << endl;

    //mengisi array dengan looping for
    for(int i = 0; i < 3; i++){
        cout << "Mahasiswa ke-" << i+1 << " = ";
        cin >> nama[i];
    }

    
}
