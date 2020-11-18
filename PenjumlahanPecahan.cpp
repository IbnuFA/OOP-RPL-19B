#include <iostream>

using namespace std;

class pecahan{
    public:
        int pembilang1, penyebut1, pembilang2, penyebut2;

    void inputpecahan(){
        cout << "-----------------------------" <<endl;
        cout << "Masukkan Pembilang Pecahan 1 : ";
        cin >> pembilang1;
        cout << "Masukkan Penyebut Pecahan 1 : ";
        cin >> penyebut1;
        cout << "Masukkan Pembilang Pecahan 2 : ";
        cin >> pembilang2;
        cout << "Masukkan Penyebut Pecahan 2 : ";
        cin >> penyebut2;
        cout << "-----------------------------" <<endl;
    };

    void outputpecahan(){
        cout << "Pecahan 1 : " << pembilang1 << "/" << penyebut1 << endl;
        cout << "Pecahan 2 : " << pembilang2 << "/" << penyebut2 << endl;
        cout << "-----------------------------" <<endl;
    }

    int jumlahpecahan(){
        int totalpembilang;
        int totalpenyebut;

        if(penyebut1 != penyebut2){
            cout << "Penyebut tidak sama, tidak bisa dijumlahkan";
            return 0;
        }
        else{
            totalpembilang = pembilang1 + pembilang2;

            cout << pembilang1 << "/" << penyebut1 << " + " << pembilang2 << "/" << penyebut2 << " = " << totalpembilang << "/" << penyebut1 << endl;
            cout << "-----------------------------" <<endl;
        }
    };
};

int main()
{
    pecahan coba;
    coba.inputpecahan();
    coba.outputpecahan();
    coba.jumlahpecahan();
    return 0;
}
