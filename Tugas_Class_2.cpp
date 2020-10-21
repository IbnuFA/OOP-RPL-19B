#include <iostream>
#include <windows.h>

using namespace std;

class deret_angka{
public:
    int awal,beda,jumlah_angka;

    void input(){
        cout << "Masukkan Nilai Awal : ";
        cin >> awal;
        cout << "Masukkan Beda : ";
        cin >> beda;
        cout << "Masukkan Jumlah Deret: ";
        cin >> jumlah_angka;
    }

    void proses(){
        for(int i=0; i < jumlah_angka; i++){
            cout << "Deret Angka : ";
            cout << awal + (i*beda) << " ";
        }
    }
};

class ganjil_genap{
public:
    int angka;

    void proses(){
        cout << "Masukkan angka : " << endl;
        cin >> angka;

        if(angka == 0){
            cout << "angka merupakan bilangan 0 / Kosong"<<endl;
        }
        else if(angka > 0){
            if(angka % 2 == 0){
                cout << angka << " Merupakan Bilangan Genap Positif" << endl;
            }
            else{
                cout << angka << " Merupakan Bilangan Ganjil Positif" << endl;
            }
        }
        else{
            if(angka % 2 == 0){
                cout << angka << " Merupakan Bilangan Genap Negatif" << endl;
            }
            else{
                cout << angka << " Merupakan Bilangan Ganjil Negatif" << endl;
            }
        }
    }
};

class novel{
public:
    string judul_novel;
    string nama_pengarang;
    int tahun_novel;
    int harga_beli;

    void PrintData(){
        cout << "====================" <<endl;
        cout<< "Judul Novel = "<<judul_novel<<endl;
        cout<< "Nama Pengarang = "<<nama_pengarang<<endl;
        cout<< "Tahun Terbit = "<<tahun_novel<<endl;
        cout<< "Harga Beli = "<<harga_beli<<endl;
    }

    void jual_kembali(){
        int jual_lagi= harga_beli - (harga_beli * 20 / 100);
        if(jual_lagi < 0){
            cout << "Error : Hasil tidak berangka positif" <<endl;
        }
        else{
            cout << "Harga Jual Kembali = " << jual_lagi<< endl;
        }

    }
};

int main()
{
    int pilihan;

    cout << "Program Pratikum Class dan Object 2" << endl;
    cout << "Silahkan Pilih Program" << endl;
    cout << "1. Program Ganjil Genap"<<endl;
    cout << "2. Program Deret Angka"<<endl;
    cout << "3. Program Mas Conan jual Novel"<<endl;
    cout << "Masukkan Pilihan Anda : ";
    cin >> pilihan;

    switch(pilihan){
        case 1:{
            system("CLS");

            ganjil_genap tugas;
            tugas.proses();
            break;
        }

        case 2:{
            system("CLS");

            deret_angka tugas;
            tugas.input();
            tugas.proses();
            break;
        }

        case 3:{
            system("CLS");

            int pilih;

            novel tensura={"Tensura","Fuse",2013,125000};
            novel classroom={"Classroom of Elite","Shogo Kinugusa",2015,135000};
            novel ngnl={"No Game No Life","Yu Kamiya",2012,150000};

            cout << "Pilih Program Invoice = " << endl;
            cout << "1. Tampilkan Data Novel" << endl;
            cout << "2. Harga Novel Bila Dijual Kembali" << endl;
            cout << "Masukkan Pilihan Anda : ";
            cin >> pilih;

            switch(pilih){
                case 1:{
                    tensura.PrintData();
                    classroom.PrintData();
                    ngnl.PrintData();
                    break;
                }
                case 2:{
                    tensura.PrintData();
                    tensura.jual_kembali();
                    classroom.PrintData();
                    classroom.jual_kembali();
                    ngnl.PrintData();
                    ngnl.jual_kembali();
                    break;
                }
                default:{
                    cout << "Error : Pilihan Tidak ada";
                    break;
                }
            }
            break;
        }
        default:{
            cout << "Error : Pilihan Tidak ada";
            break;
        }
    }
    return 0;
}
