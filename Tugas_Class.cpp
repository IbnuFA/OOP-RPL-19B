#include <iostream>

using namespace std;

class Account{
    public:
        string nama;
        int nilai;
        int *nilaiDebit = &nilai;

        void PrintData(){
            cout << "Nama Pemilikan Akun = "<< nama<<endl;
            cout << "Jumlah Tabungan = " << *nilaiDebit<<endl;

        }

        void DebitTabungan( int *debit){
            if(*debit > *nilaiDebit){
                cout << "Error : Jumlah Input Lebih Dari Jumlah Tabungan";
                *nilaiDebit = 0;
            }
            else{
                cout << "tabungan = " << *nilaiDebit-*debit<<endl;
            }
        }

        void getBalance(){
            *nilaiDebit = nilai;
        }

        void Credit (int *Balance){
            cout << "Tabungan : " << *nilaiDebit + *Balance;
        }
};


class Employee {
public:
    string FirstName;
    string LastName;
    long int Gaji;

    void PrintData(){
        cout<< "Nama Depan Pegawai = " << FirstName <<endl;
        cout<< "Nama Belakang Pegawai = " << LastName <<endl;
        cout<< "Jumlah Gaji = " << Gaji << endl;
    }

    void upGaji(){
        cout << "Nama Pegawai: " << FirstName << " " << LastName << endl;
        cout << "Gaji Setelah Naik 10% : " << Gaji + (Gaji * 10 / 100) << endl;
    }
};


class Invoice {
public:
    string NamaBarang;
    string DeskripsiBarang;
    int JumlahBarang;
    int HargaBarang;

    void PrintData(){
        cout<< "Nama Barang = "<<NamaBarang<<endl;
        cout<< "Deskripsi Barang = "<<DeskripsiBarang<<endl;
        cout<< "Jumlah Barang = "<<JumlahBarang<<endl;
        cout<< "Harga Barang = "<<HargaBarang<<endl;
    }

    void getInvoiceAmount(){
        int totaljumlah= JumlahBarang * HargaBarang;
        if(totaljumlah < 0){
            totaljumlah = 0;
            cout << "Error : Hasil tidak berangka positif" <<endl;
        }
        else{
            cout << "Harga Total = " << totaljumlah<< endl;
        }

    }
};

int main() {

    int pilih;

    cout << "Pilih Program Class = " << endl;
    cout << "1. Account Class" << endl;
    cout << "2. Employee Class" << endl;
    cout << "3. Invoice Class" << endl;
    cout << "Masukkan Pilihan Anda : ";
    cin >> pilih;

    if(pilih > 3){
        cout << "Error : Pilihan Tidak ada";
    }
    else{
        switch(pilih){
            case 1:{
                int PilihAccount;

                Account PakBudi= {"Budi Kurniawan",150000};
                Account Buaya= {"Bu Aya",200000};


                cout << "Pilih Program Accont = " << endl;
                cout << "1. Tampilkan Akun" << endl;
                cout << "2. Debit Tabungan" << endl;
                cout << "3. Credit Tabungan" << endl;
                cout << "4. getBalance Tabungan" << endl;
                cout << "Masukkan Pilihan Anda : ";
                cin >> PilihAccount;

                if(PilihAccount > 4){
                    cout << "Error : Pilihan Tidak ada";
                }
                else{
                    switch(PilihAccount){

                        case 1:{
                            PakBudi.PrintData();
                            Buaya.PrintData();
                            break;
                        }
                        case 2:{
                            int Debit;
                            cout << "Masukkan debit tabungan = ";
                            cin >> Debit;

                            PakBudi.DebitTabungan(&Debit);
                            Buaya.DebitTabungan(&Debit);
                            break;
                        }
                        case 3:{
                            int Balance;
                            cout<< "Masukkan Tambahan Uang = ";
                            cin >> Balance;

                            PakBudi.Credit(&Balance);
                            Buaya.Credit(&Balance);
                            break;
                        }
                        case 4:{
                            PakBudi.getBalance();
                            Buaya.getBalance();
                            break;
                        }
                    }
                }
            break;
            }
            case 2:{
                int PilihEmployee;

                Employee Ibnu= {"Ibnu","Fauzan",200000};
                Employee Lumine= {"Lumine","Windrunner",250000};

                cout << "Pilih Program Accont = " << endl;
                cout << "1. Tampilkan Akun Pegawai" << endl;
                cout << "2. Gaji Pegawai Setelah Naik 10%" << endl;
                cout << "Masukkan Pilihan Anda : ";
                cin >> PilihEmployee;

                if(PilihEmployee > 2){
                    cout << "Error : Pilihan Tidak ada";
                }
                else{
                    switch(PilihEmployee){
                        case 1:{
                            Ibnu.PrintData();
                            Lumine.PrintData();
                            break;
                        }
                        case 2:{
                            Ibnu.upGaji();
                            Lumine.upGaji();
                            break;
                        }
                    }
                }
            break;
            }
            case 3:{
                int PilihInoive;

                Invoice Smartphone= {"Oddo F9","Hp Gaming Pro",20,4250000};
                Invoice Headset= {"Hiddo 69F","Headset Gaming Pro",25,630000};
                Invoice PowerBank= {"Hiddo Tank 6S","100 Kali Cas Power Bank",18,1250000};

                cout << "Pilih Program Invoice = " << endl;
                cout << "1. Tampilkan Data Barang" << endl;
                cout << "2. Harga Total Barang" << endl;
                cout << "Masukkan Pilihan Anda : ";
                cin >> PilihInoive;

                if(PilihInoive > 2){
                    cout << "Error : Pilihan Tidak ada";
                }
                else{
                    switch(PilihInoive){
                        case 1:{
                            Smartphone.PrintData();
                            Headset.PrintData();
                            PowerBank.PrintData();
                            break;
                        }
                        case 2:{
                            Smartphone.getInvoiceAmount();
                            Headset.getInvoiceAmount();
                            PowerBank.getInvoiceAmount();
                            break;
                        }
                    }
                }
            break;
            }
        }
    }
    return 0;
}
