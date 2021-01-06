#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

class player{
    public:
        string namaplayer;
        int attack;
        int defense;
        int mp;
        int hp;
        int fury;
        int *lifepoint = &hp;
        int *magic = &mp;
        int *serangan = &attack;
        int *pertahanan = &defense;
        int *limitbreak = &fury;

    void dataplayer(){
        cout << "---------------------------" << endl;
        cout << "Status " << namaplayer << endl;
        cout << "HP : " << *lifepoint << endl;
        cout << "MP : " << *magic << endl;
        cout << "Limit Break: " << *limitbreak << endl;
        usleep(1000000);
    };
};



void attack (int *atk1, int *hp2, int *def2, string player1, string player2){
    int serang = *atk1 - *def2;
    *hp2 = *hp2 - serang;

    cout << player1 << " Menyerang " << player2 << "!"<< endl;
    cout << player2 << " Menerima " << serang << " damage!" << endl << endl;
    usleep(2000000);
};

void heal(int *mp1, int *hp1, string player1){
    int heal = *hp1 * 10 / 100;

    *mp1 = *mp1 - 35;
    *hp1 = *hp1 + heal;
    cout << player1 << " Menggunakan Spirit's Blessing! Nyawa Bertambah " << heal << " Points! "<< endl <<endl;
    usleep(2000000);
};

// Pahlawan Angel's Blessing
void buff(int *atk1, int *def1, int *mp1, string player1){
    *mp1 = *mp1 - 80;
    *atk1= *atk1 + 10;
    *def1= *def1 + 2;

    cout << player1 << " Menggunakan Angel's Blessing! "<< endl;
    usleep(1000000);
    cout << "Damage Bertambah 10 Points!" << endl;
    usleep(1000000);
    cout << "Defense Bertambah 5 Points!" << endl;
    usleep(2000000);
};

//Pahlawan Sword of Light
void magic(int *atk1, int *mp1, int *hp2, int *def2, string player1, string player2){
    int magicattack = *atk1 * 2;

    *mp1 = *mp1 - 50;
    *hp2 = *hp2 - magicattack;

    cout << player1 << " Menggunakan Sword of Light! "<< endl;
    usleep(1000000);
    cout << player2 << " Menerima " << magicattack << " damage!" << endl << endl;
    usleep(2000000);
};

int giveup(int *hp){
    return *hp = *hp - *hp;
};

//RajaIblis Dark Pulse
void darkmagic(int *atk1, int *mp1, int *hp2, int *def2, string player1, string player2){
    int magicattack = (*atk1 * 1.5) - *def2;

    *mp1 = *mp1 - 80;

    cout << player1 << " Menggunakan Dark Pulse!" << endl;
    usleep(1000000);
    *hp2 = *hp2 - magicattack;
    cout << player2 << " Menerima " << magicattack << " damage!" << endl;
    usleep(1000000);
    *hp2 = *hp2 - magicattack;
    cout << player2 << " Menerima " << magicattack << " damage!" << endl;
    usleep(2000000);
};

void ultimate(int *atk1, int *fury, int *def2, int *hp2, string player1, string player2){
    // Pahlawan Ulti
    int ulti = (*atk1 * 1.5)-*def2;

    *fury = *fury - 100;

    cout << player1 << " Menggunakan Ultimate Skill : Seven Star of Destruction!"<< endl;
    usleep(2000000);
    cout <<"7 Bintang Penghancur membentuk konstelasi dan Menyerang "<< player2 << " !" << endl;
    usleep(2000000);

    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl;
    usleep(1500000);
    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl;
    usleep(1500000);
    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl;
    usleep(1500000);
    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl;
    usleep(1500000);
    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl;
    usleep(1500000);
    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl;
    usleep(1500000);
    *hp2 = *hp2 - ulti;
    cout << player2 << " Menerima " <<ulti << " damage!" << endl << endl;
    usleep(1500000);
};

void ultiiblis(int *atk1, int *fury ,int *def2, int *hp2, string player1, string player2){
    int ulti = (*atk1 * 2)- *def2;
    *fury = *fury - 100;

    cout << player1 << " menggunakan Domain of Nightmare!"<< endl;

    *hp2 = *hp2 - ulti;
    cout << player2 << "Menerima " << ulti << " damage!" << endl;

    *hp2 = *hp2 - ulti;
    cout << player2 << "Menerima " << ulti << " damage!" << endl;

    *hp2 = *hp2 - ulti;
    cout << player2 << "Menerima " << ulti << " damage!" << endl;
};

void regen(int *mp, int *fury, int x, int y){
    *mp = *mp + x;
    *fury = *fury + y;
};

void loading(){
    system("pause");
    system("cls");
};


int main() {
    int menu;

    player Pahlawan = {"Pahlawan", 50, 20,300, 500, 0};
    player RajaIblis = {"Raja Iblis", 50, 15,70, 1000, 0};


    cout << "-------------------------------------------" << endl;
    cout << "Game RPG Sederhana Pahlawan vs Raja Iblis"<< endl;
    usleep(1500000);
    cout << "Tutorial Singkat" << endl;
    usleep(1500000);
    cout << "1. Kalahkan Raja Iblia" << endl;
    usleep(1500000);
    cout << "2. Kalau Kalah ys Game Over" << endl;
    usleep(1500000);
    cout << "-------------------------------------------" << endl;
    loading();
    goto start;

    startmenu:

    regen(Pahlawan.magic,Pahlawan.limitbreak, 25, 10);
    regen(RajaIblis.magic,RajaIblis.limitbreak,20, 8);

    start:

    Pahlawan.dataplayer();
    RajaIblis.dataplayer();

    cout << "---------------------------" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Magic"<< endl;
    cout << "3. Ultimate (Limit Break = 100)"<< endl;
    cout << "4. Menyerah" << endl;
    cout << "Input Pilihan : ";
    cin >> menu;

    switch(menu){
        case 1:{
            attack(Pahlawan.serangan,RajaIblis.lifepoint,RajaIblis.pertahanan,Pahlawan.namaplayer,RajaIblis.namaplayer);

            if(RajaIblis.fury >= 100){
                ultiiblis(RajaIblis.serangan,RajaIblis.limitbreak,Pahlawan.pertahanan,Pahlawan.lifepoint,RajaIblis.namaplayer,Pahlawan.namaplayer);
            }
            else if(RajaIblis.mp >= 80){
                darkmagic(RajaIblis.serangan,RajaIblis.magic,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
            }
            else{
                attack(RajaIblis.serangan,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
            }

            loading();
            break;
        }
        case 2:{
            int pilihan;

            system("cls");

            menumagic:

            Pahlawan.dataplayer();

            cout << "---------------------------" << endl;
            cout << "1. Sword of Light (50 MP)" << endl;
            cout << "2. Water Spirit's (35 MP)"<< endl;
            cout << "3. Angel's Blessing (80 MP)"<< endl;
            cout << "4. Kembali"<< endl;
            cout << "Input Pilihan : ";
            cin >> pilihan;

            switch(pilihan){
                case 1:{
                    if(Pahlawan.mp <= 50){
                        cout << "Mana anda tidak cukup" <<endl;
                        goto menumagic;
                    }
                    else{
                        magic(Pahlawan.serangan,Pahlawan.magic,RajaIblis.lifepoint,RajaIblis.pertahanan,Pahlawan.namaplayer,RajaIblis.namaplayer);

                        if(RajaIblis.fury >= 100){
                            ultiiblis(RajaIblis.serangan,RajaIblis.limitbreak,Pahlawan.pertahanan,Pahlawan.lifepoint,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                        else if(RajaIblis.mp >= 80){
                            darkmagic(RajaIblis.serangan,RajaIblis.magic,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                        else{
                            attack(RajaIblis.serangan,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                    }
                    loading();
                    break;
                }
                case 2:{
                    if(Pahlawan.mp <= 35){
                        cout << "Mana anda tidak cukup" <<endl;
                        goto menumagic;
                    }
                    else{
                        heal(Pahlawan.magic,Pahlawan.lifepoint,Pahlawan.namaplayer);

                        if(RajaIblis.fury >= 100){
                            ultiiblis(RajaIblis.serangan,RajaIblis.limitbreak,Pahlawan.pertahanan,Pahlawan.lifepoint,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                        else if(RajaIblis.mp >= 80){
                            darkmagic(RajaIblis.serangan,RajaIblis.magic,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                        else{
                            attack(RajaIblis.serangan,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                    }
                    loading();
                    break;
                }
                case 3:{
                    if(Pahlawan.mp <= 80){
                        cout << "Mana anda tidak cukup" <<endl;
                        goto menumagic;
                    }
                    else{
                        buff(Pahlawan.serangan,Pahlawan.pertahanan,Pahlawan.magic,Pahlawan.namaplayer);

                        if(RajaIblis.fury >= 100){
                            ultiiblis(RajaIblis.serangan,RajaIblis.limitbreak,Pahlawan.pertahanan,Pahlawan.lifepoint,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                        else if(RajaIblis.mp >= 80){
                            darkmagic(RajaIblis.serangan,RajaIblis.magic,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                        else{
                            attack(RajaIblis.serangan,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                        }
                    }
                    loading();
                    break;
                }
                case 4:{
                    goto startmenu;
                }
                default:{
                    cout << "Pilihan Salah" <<endl;
                    goto start;
                }
            }
            break;
        }
        case 3:{
            if(Pahlawan.fury >= 100){
                ultimate(Pahlawan.serangan,Pahlawan.limitbreak,RajaIblis.pertahanan,RajaIblis.lifepoint,Pahlawan.namaplayer,RajaIblis.namaplayer);

                if(RajaIblis.fury >= 100){
                    ultiiblis(RajaIblis.serangan,RajaIblis.limitbreak,Pahlawan.pertahanan,Pahlawan.lifepoint,RajaIblis.namaplayer,Pahlawan.namaplayer);
                }
                else if(RajaIblis.mp >= 80){
                    darkmagic(RajaIblis.serangan,RajaIblis.magic,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                }
                else{
                    attack(RajaIblis.serangan,Pahlawan.lifepoint,Pahlawan.pertahanan,RajaIblis.namaplayer,Pahlawan.namaplayer);
                }
            }
            else{
            cout << "Limit Break Anda tidak cukup" <<endl;
            goto start;
            }
            loading();
            break;
        }
        case 4:{
            giveup(Pahlawan.lifepoint);
            break;
        }
        default:{
            cout << "Pilihan Salah" <<endl;
            goto start;
        }
    }

    if(Pahlawan.hp <= 0){
        cout << "Pahlawan Telah DiKalahkan oleh Raja Iblis...." << endl;
        usleep(1500000);
        cout << "Kehancuran dunia tidak dapat dihindari lagi" << endl;
        usleep(1500000);
    }
    else if(RajaIblis.hp <= 0){
        cout << "Raja Iblis telah Dikalahkan!" << endl;
        usleep(1500000);
        cout << "Kedamaian dunia telah didapatkan kembali!" << endl << endl <<endl;
        usleep(1500000);
        cout << "-------------------------------------------" << endl;
        cout << "Created by Ibnu Fauzan Affifudin" << endl;
        cout << "-------------------------------------------" << endl;
        usleep(1500000);
    }
    else{
        goto startmenu;
    }

    return 0;
}
