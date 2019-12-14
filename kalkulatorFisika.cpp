#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void welcome();
int getPilihan();
int getGerakLurusBeraturan();
int hitungGerakLurusBeraturan(int input);
int getGerakLurusBerubahBeraturan();
int hitungGerakLurusBerubahBeraturan(int input);

int main(){

    labelPilihan:
    welcome();
    int pilihan = getPilihan();
    int inputGLB,inputGLBB;
    char lanjut;
    while(pilihan!=3){

        switch(pilihan){
            case 1:
                cout << "\nGerak Lurus Beraturan (GLB)\n";
                inputGLB = getGerakLurusBeraturan();
                hitungGerakLurusBeraturan(inputGLB);
                break;
            case 2:
                cout << "\nGerak Lurus Berubah Beraturan (GLBB)\n";
                inputGLBB = getGerakLurusBerubahBeraturan();
                hitungGerakLurusBerubahBeraturan(inputGLBB);
                break;
            /*
            case 3:
                cout << "\nGerak Parabola\n";
                break;
            case 4:
                cout << "\nGerak Jatuh Bebas\n";
                break;
            case 5:
                cout << "\nGerak Vertikal ke Atas\n";
                break;
            */
            default:
                cout << "\nERROR : Input Tidak Valid\n";
                break;
        }

        labelLanjut:
        cout << "\nLanjutkan Program?(y/n): ";
        cin >> lanjut;
        if( (lanjut=='y') | (lanjut=='Y') ){
            system("cls");
            goto labelPilihan;
        }else if( (lanjut=='n') | (lanjut=='N') ){
            break;
        }else{
            goto labelLanjut;
        }
        
    }
    labelExit:
    cout << "Akhir dari program" << endl;

    cin.get();
    return 0;
}

void welcome(){
    cout << " _   __        _  _            _         _                 ______  _       _  _                        \n";
    cout << "| | / /       | || |          | |       | |                |  ___|(_)     (_)| |                       \n";
    cout << "| |/ /   __ _ | || | __ _   _ | |  __ _ | |_   ___   _ __  | |_    _  ___  _ | | __  __ _              \n";
    cout << "|    \\  / _` || || |/ /| | | || | / _` || __| / _ \\ | '__| |  _|  | |/ __|| || |/ / / _` |           \n";
    cout << "| |\\  \\| (_| || ||   < | |_| || || (_| || |_ | (_) || |    | |    | |\\__ \\| ||   < | (_| |         \n";
    cout << "\\_| \\_/ \\__,_||_||_|\\_\\ \\__,_||_| \\__,_| \\__| \\___/ |_|    \\_|    |_||___/|_||_|\\_\\ \\__,_| Created by Kelompok 10\n";
    cout << "\nSelamat Datang di Program Kalkulator Kinematika Fisika!\n\n";
}

int getPilihan(){
    int input;
    cout << "NOTE : Semua satuan yang diinputkan dalam program ini harus dalam satuan SI (Satuan Internasional)\n";
    cout << "1. Gerak Lurus Beraturan (GLB)\n";
    cout << "2. Gerak Lurus Berubah Beraturan (GLBB)\n";
    //cout << "3. Gerak Parabola\n";
    //cout << "4. Gerak Jatuh Bebas\n";
    //cout << "5. Gerak Vertikal ke Atas\n";
    cout << "3. Exit\n";
    cout << "Pilih [1-3]?: ";
    cin >> input;
    return input;
}

int getGerakLurusBeraturan(){
    int input;
    cout << "1. Mencari Jarak (s)\n";
    cout << "2. Mencari Kecepatan (v)\n";
    cout << "3. Mencari Waktu (t)\n";
    cout << "4. Exit\n";
    cout << "Pilih [1-4]?: ";
    cin >> input;
    return input;
}

int hitungGerakLurusBeraturan(int input){
    double kecepatan,jarak,waktu;
    while(input!=4){

        switch(input){
            case 1:
                cout << "\nMasukkan kecepatan (v) : ";
                cin >> kecepatan;
                cout << "Masukkan waktu (t): ";
                cin >> waktu;
                jarak = kecepatan*waktu;
                cout << "Jarak (s) : " << jarak << " meter" << endl;
                return jarak;
                break;
            case 2:
                cout << "\nMasukkan jarak (s) : ";
                cin >> jarak;
                cout << "Masukkan waktu (t) : ";
                cin >> waktu;
                kecepatan = jarak/waktu;
                cout << "Kecepatan (v) : " << kecepatan << " m/s" << endl;
                return kecepatan;
                break;
            case 3:
                cout << "\nMasukkan jarak (s) : ";
                cin >> jarak;
                cout << "Masukkan kecepatan (v) : ";
                cin >> kecepatan;
                waktu = jarak/kecepatan;
                cout << "Waktu (t) : " << waktu << " second" << endl;
                return waktu;
                break;
            default:
                cout << "\nERROR : Input Tidak Valid\n";
                return 4;
                break;
        }
    }
}

int getGerakLurusBerubahBeraturan(){
    int input;
    cout << "1. Mencari Kecepatan Awal (Vo) Tanpa Variabel Jarak (s)\n";
    cout << "2. Mencari Kecepatan Awal (Vo) Tanpa Variabel Kecepatan Akhir (Vt)\n";
    cout << "3. Mencari Kecepatan Awal (Vo) Tanpa Variabel Waktu (t)\n";
    cout << "4. Mencari Kecepatan Akhir (Vt) Tanpa Variabel Jarak (s)\n";
    cout << "5. Mencari Kecepatan Akhir (Vt) Tanpa Variabel Waktu (t)\n";
    cout << "6. Mencari Percepatan (a) Tanpa Variabel Jarak (s)\n";
    cout << "7. Mencari Percepatan (a) Tanpa Variabel Kecepatan Akhir (Vt)\n";
    cout << "8. Mencari Percepatan (a) Tanpa Variabel Waktu (t)\n";
    cout << "9. Mencari Jarak (s) Tanpa Variabel Kecepatan Akhir (Vt)\n";
    cout << "10. Mencari Jarak (s) Tanpa Variabel Waktu (t)\n";
    cout << "11. Mencari Waktu (t) Tanpa Variabel Jarak (s)\n";
    cout << "12. Exit\n";
    cout << "Pilih [1-12]?: ";
    cin >> input;
    return input;
}

int hitungGerakLurusBerubahBeraturan(int input){
    double kecepatanAwal,kecepatanAkhir,percepatan,jarak,waktu;
    while(input!=12){

        switch(input){
            case 1: 
                cout << "\nMasukkan kecepatan akhir (Vt) : ";
                cin >> kecepatanAkhir;
                cout << "Masukkan percepatan (a) : ";
                cin >> percepatan;
                cout << "Masukkan waktu (t) : ";
                cin >> waktu;
                kecepatanAwal = kecepatanAkhir - (percepatan*waktu);
                cout << "Kecepatan Awal (Vo) : " << kecepatanAwal << " m/s" << endl;
                return kecepatanAwal;
                break;
            case 2:
                cout << "\nMasukkan Jarak (s) : ";
                cin >> jarak;
                cout << "Masukkan percepatan (a) : ";
                cin >> percepatan;
                cout << "Masukkan waktu (t) : ";
                cin >> waktu;
                kecepatanAwal = (jarak-(0.5*(percepatan*waktu*waktu) ))/waktu;
                cout << "Kecepatan Awal (Vo) : " << kecepatanAwal << " m/s" << endl;
                return kecepatanAwal;
                break;
            case 3:
                cout << "\nMasukkan Kecepatan Akhir (Vt) : ";
                cin >> kecepatanAkhir;
                cout << "Masukkan Percepatan (a) : ";
                cin >> percepatan;
                cout << "Masukkan Jarak (s) : ";
                cin >> jarak;
                kecepatanAwal = sqrt((kecepatanAkhir*kecepatanAkhir)-(2*percepatan*jarak));
                cout << "Kecepatan Awal (Vo) : " << kecepatanAwal << " m/s" << endl;
                return kecepatanAwal;
                break;
            case 4:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Percepatan (a) : ";
                cin >> percepatan;
                cout << "Masukkan Waktu (t) : ";
                cin >> waktu;
                kecepatanAkhir = kecepatanAwal + (percepatan*waktu);
                cout << "Kecepatan Akhir (Vt) : " << kecepatanAkhir << " m/s" << endl;
                return kecepatanAkhir;
                break;
            case 5:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Percepatan (a) : ";
                cin >> percepatan;
                cout << "Masukkan Jarak (s) : ";
                cin >> jarak;
                kecepatanAkhir = sqrt((kecepatanAwal*kecepatanAwal)+(2*percepatan*jarak));
                cout << "Kecepatan Akhir (Vt) : " << kecepatanAkhir << " m/s" << endl;
                return kecepatanAkhir;
                break;
            case 6:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Kecepatan Akhir (Vt) : ";
                cin >> kecepatanAkhir;
                cout << "Masukkan Waktu (t) : ";
                cin >> waktu;
                percepatan = (kecepatanAkhir-kecepatanAwal)/waktu;
                cout << "Percepatan (a) : " << percepatan << " m/s^2" << endl;
                return percepatan;
                break;
            case 7:
                cout << "\nMasukkan Jarak (s) : ";
                cin >> jarak;
                cout << "Masukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Waktu (t) : ";
                cin >> waktu;
                percepatan = ((jarak-(kecepatanAwal*waktu))*2)/(waktu*waktu);
                cout << "Percepatan (a) : " << percepatan << " m/s^2" << endl;
                return percepatan;
                break;
            case 8:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Kecepatan Akhir (Vt) : ";
                cin >> kecepatanAkhir;
                cout << "Masukkan Jarak (s) : ";
                cin >> jarak;
                percepatan = ((kecepatanAkhir*kecepatanAkhir)-(kecepatanAwal*kecepatanAwal))/(2*jarak);
                cout << "Percepatan (a) : " << percepatan << " m/s^2" << endl;
                return percepatan;
                break;
            case 9:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Kecepatan Percepatan (a) : ";
                cin >> percepatan;
                cout << "Masukkan Waktu (t) : ";
                cin >> waktu;
                jarak = (kecepatanAwal*waktu)+(0.5*(percepatan*(waktu*waktu)));
                cout << "Jarak (s) : " << jarak << " meter" << endl;
                return jarak;
                break;
            case 10:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Kecepatan Akhir (Vt) : ";
                cin >> kecepatanAkhir;
                cout << "Masukkan Percepatan (a) : ";
                cin >> percepatan;
                jarak = ((kecepatanAkhir*kecepatanAkhir)-(kecepatanAwal*kecepatanAwal))/(2*percepatan);
                cout << "Jarak (s) : " << jarak << " meter" << endl;
                return jarak;
                break;
            case 11:
                cout << "\nMasukkan Kecepatan Awal (Vo) : ";
                cin >> kecepatanAwal;
                cout << "Masukkan Kecepatan Akhir (Vt) : ";
                cin >> kecepatanAkhir;
                cout << "Masukkan Percepatan (a) : ";
                cin >> percepatan;
                waktu = (kecepatanAkhir-kecepatanAwal)/percepatan;
                cout << "Waktu (t) : " << waktu << " second" << endl;
                return waktu;
                break;
            default:
                cout << "\nERROR : Input Tidak Valid\n";
                return 4;
                break;
        }
    }
}
