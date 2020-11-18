#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

class playerGame1{
    public:
        string namaplayer1;
        int normalattack1;
        int hardattack1;
        int nyawa1;
        int *lifepoint1 = &nyawa1;

    void dataplayer1(){
        cout << "---------------------------" << endl;
        cout << "Data Player 1" << endl;
        cout << "Nama Player 1 : " << namaplayer1 << endl;
        cout << "HP Player 1 : " << *lifepoint1 << endl;
        cout << "Damage Pukul : " << normalattack1 << endl;
        cout << "Damage Tendang : " << hardattack1 << endl;
        cout << "---------------------------" << endl << endl;
    };

    void datanyawa1(){
        cout << "nyawa " << namaplayer1 << " Tersisa " << *lifepoint1 << endl << endl;
    };
};

class playerGame2{
    public:
        string namaplayer2;
        int normalattack2;
        int hardattack2;
        int nyawa2;
        int *lifepoint2 = &nyawa2;

    void dataplayer2(){
        cout << "---------------------------" << endl;
        cout << "Data Player 2" << endl;
        cout << "Nama Player 2 : " << namaplayer2 << endl;
        cout << "HP Player 2 : " << *lifepoint2 << endl;
        cout << "Damage Pukul : " << normalattack2 << endl;
        cout << "Damage Tendang : " << hardattack2 << endl;
        cout << "---------------------------" << endl << endl;
    };

    void datanyawa2(){
        cout << "nyawa " << namaplayer2 << " Tersisa " << *lifepoint2 << endl << endl;
    };
};

void attack (int atk, int *hp, string player1, string player2){
    *hp = *hp - atk;
    cout << player1 << " Menyerang " << player2 << "!"<< endl;
    cout << player2 << " Menerima " << atk << " damage!" << endl << endl;
    usleep(2000000);

};

int main() {

    playerGame1 Raiden = {"Raiden", 10, 20, 100};
    Raiden.dataplayer1();

    playerGame2 SubZero = {"SubZero", 5, 25, 100};
    SubZero.dataplayer2();

    attack(Raiden.hardattack1, SubZero.lifepoint2, Raiden.namaplayer1, SubZero.namaplayer2);

    attack(SubZero.hardattack2, Raiden.lifepoint1, SubZero.namaplayer2, Raiden.namaplayer1);

    attack(SubZero.normalattack2, Raiden.lifepoint1, SubZero.namaplayer2, Raiden.namaplayer1);

    attack(SubZero.normalattack2, Raiden.lifepoint1, SubZero.namaplayer2, Raiden.namaplayer1);

    attack(SubZero.normalattack2, Raiden.lifepoint1, SubZero.namaplayer2, Raiden.namaplayer1);

    attack(Raiden.hardattack1, SubZero.lifepoint2, Raiden.namaplayer1, SubZero.namaplayer2);

    attack(Raiden.hardattack1, SubZero.lifepoint2, Raiden.namaplayer1, SubZero.namaplayer2);

    attack(Raiden.hardattack1, SubZero.lifepoint2, Raiden.namaplayer1, SubZero.namaplayer2);

    attack(Raiden.hardattack1, SubZero.lifepoint2, Raiden.namaplayer1, SubZero.namaplayer2);

    Raiden.datanyawa1();

    SubZero.datanyawa2();

    if( Raiden.lifepoint1 > SubZero.lifepoint2){
        cout << "Pemenangnya adalah Raiden!" << endl;
    }
    else{
        cout << "Pemenangnya adalah SubZero!" << endl;
    }

    return 0;
}
