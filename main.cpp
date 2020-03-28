#include <iostream>

using namespace std;

int main(){
    system("cls"); // Membersihkan Layar Console

    // Deklarasi Variabel
    int Awal = 0, Batas;
    cout << "Masukkan Berapa Kali Perulangan : ";
    cin >> Batas;

    // While
    while (Awal < Batas){
        cout << "Ini Perulangan Ke-" << Awal+1 << endl;
        Awal++;
    }
    cout << "Selesai" << endl;
    cin.get();
    return 0;
}