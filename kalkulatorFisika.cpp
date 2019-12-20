//Proses preprocessing directive
//Memanggil library iostream dan file header math.h
#include <iostream>
#include <math.h>
//Menggunakan std (standard) sebagai namespace
using namespace std;

//Prototype fungsi (proses deklarasi fungsi)
void welcome();
int getPilihan();
int getGLB();
void hitungGLB(int input);
int getGLBB();
void hitungGLBB(int input);

//Fungsi main
int main(){

    //Memanggil fungsi "welcome()"
    welcome();
    //Deklarasi variabel "pilihan" sebagai tipe data integer (Bilangan bulat)
    //Assign nilai kembalian dari fungsi "getPilihan()" ke variabel "pilihan"
    int pilihan = getPilihan();
    //Deklarasi variabel "inputGLB" dan "inputGLBB" sebagai tipe data integer (Bilangan bulat)
    int inputGLB, inputGLBB;
        
        //Proses seleksi variabel "pilihan" menggunakan switch case (Struktur kontrol seleksi)
        switch (pilihan){

        //GLB 
        case 1:
            //Proses output tulisan ke console
            cout << "\nGerak Lurus Beraturan (GLB)\n";
            //Assign nilai kembalian dari fungsi "getGLB()" ke variabel "inputGLB"
            inputGLB = getGLB();
            //Memanggil fungsi "hitungGLB()" untuk melakukan proses perhitungan
            //Assign variabel "inputGLB" sebagai parameter pada fungsi "hitungGLB()"
            hitungGLB(inputGLB);
            break;

        //GLBB
        case 2:
            //Proses output tulisan ke console
            cout << "\nGerak Lurus Berubah Beraturan (GLBB)\n";
            //Assign nilai kembalian dari fungsi "getGLBB()" ke variabel "inputGLBB"
            inputGLBB = getGLBB();
            //Memanggil fungsi "hitungGLBB()" untuk melakukan proses perhitungan
            //Assign variabel "inputGLBB" sebagai parameter pada fungsi "hitungGLBB()"
            hitungGLBB(inputGLBB);
            break;

        //Exit
        case 3:
            break;

        //Error Handling
        default:
            //Proses output peringatan error ke console
            cout << "\nERROR : Input Tidak Valid\n";
            break;
        }

    //Memberitahu user jika program telah berakhir
    cout << "\nAkhir dari program\n" << endl;

    //Mengembalikan nilai 0 yang berfungsi untuk memberi tahu compiler jika program berjalan tanpa error
    return 0;
}

//Fungsi Welcome
void welcome(){
    //Selamat datang
    cout << " _   __        _  _            _         _                 ______  _       _  _                        \n";
    cout << "| | / /       | || |          | |       | |                |  ___|(_)     (_)| |                       \n";
    cout << "| |/ /   __ _ | || | __ _   _ | |  __ _ | |_   ___   _ __  | |_    _  ___  _ | | __  __ _              \n";
    cout << "|    \\  / _` || || |/ /| | | || | / _` || __| / _ \\ | '__| |  _|  | |/ __|| || |/ / / _` |           \n";
    cout << "| |\\  \\| (_| || ||   < | |_| || || (_| || |_ | (_) || |    | |    | |\\__ \\| ||   < | (_| |         \n";
    cout << "\\_| \\_/ \\__,_||_||_|\\_\\ \\__,_||_| \\__,_| \\__| \\___/ |_|    \\_|    |_||___/|_||_|\\_\\ \\__,_| Created by Kelompok 10\n";
    cout << "\nSelamat Datang di Program Kalkulator Kinematika Fisika!\n\n";
}

//Fungsi untuk memilih opsi GLB, GLBB, atau Exit
int getPilihan(){
    //Mendeklarasikan variabel "input" sebagai tipe data integer
    int input;
    //Melakukan proses output pilihan yang ada ke console
    cout << "NOTE : Semua satuan yang diinputkan dalam program ini harus dalam satuan SI (Satuan Internasional)\n";
    cout << "1. Gerak Lurus Beraturan (GLB)\n";
    cout << "2. Gerak Lurus Berubah Beraturan (GLBB)\n";
    cout << "3. Exit\n";
    cout << "Pilih [1-3]?: ";
    //Melakukan proses input ke variabel "input"
    cin >> input;
    //Mengembalikan nilai dari variabel "input"
    return input;
}

//Fungsi untuk memilih opsi pilihan yang ada pada GLB
int getGLB(){
    //Mendeklarasikan variabel "input" sebagai tipe data integer (Bilangan bulat)
    int input;
    //Melakukan proses output pilihan yang ada ke console
    cout << "1. Mencari Jarak (s)\n";
    cout << "2. Mencari Kecepatan (v)\n";
    cout << "3. Mencari Waktu (t)\n";
    cout << "4. Exit\n";
    cout << "Pilih [1-4]?: ";
    //Melakukan proses input ke variabel "input"
    cin >> input;
    //Mengembalikan nilai dari variabel "input"
    return input;
}

//Fungsi untuk menghitung GLB
void hitungGLB(int input){
    //Meklarasikan variabel "kecepatan", "jarak", dan "waktu" sebagai tipe data double (Bilangan real)
    double kecepatan, jarak, waktu;

    //Melakukan proses seleksi variabel "input" yang ada pada parameter menggunakan switch case (Struktur kontrol seleksi)
    switch (input){

    //1. Mencari Jarak (s)
    case 1:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan kecepatan (v) : ";
        //Melakukan proses input ke variabel "kecepatan"
        cin >> kecepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan waktu (t): ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        jarak = kecepatan * waktu;
        //Proses output hasil ke console
        cout << "Jarak (s) : " << jarak << " meter" << endl;
        break;

    //2. Mencari Kecepatan (v)
    case 2:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        kecepatan = jarak / waktu;
        //Melakukan proses output hasil ke console
        cout << "Kecepatan (v) : " << kecepatan << " m/s" << endl;
        break;

    //3. Mencari Waktu (t)
    case 3:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan kecepatan (v) : ";
        //Melakukan proses input ke variabel "kecepatan"
        cin >> kecepatan;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        waktu = jarak / kecepatan;
        //Melakukan proses output hasil ke console
        cout << "Waktu (t) : " << waktu << " second" << endl;
        break;

    //4. Exit
    case 4:
        break;

    //Error handling
    default:
        //Melakukan proses output tulisan ke console
        cout << "\nERROR : Input Tidak Valid\n";
        break;
    }
}

//Fungsi untuk memilih opsi pilihan yang ada pada GLBB
int getGLBB(){
    //Mendeklarasikan variabel "input" sebagai tipe data integer (Bilangan bulat)
    int input;
    //Melakukan proses output pilihan yang ada ke console
    cout << "1. Mencari Kecepatan Awal (Vo) Jika Variabel Jarak (s) Tidak Diketahui\n";
    cout << "2. Mencari Kecepatan Awal (Vo) Jika Variabel Kecepatan Akhir (Vt) Tidak Diketahui\n";
    cout << "3. Mencari Kecepatan Awal (Vo) Jika Variabel Waktu (t) Tidak Diketahui\n";
    cout << "4. Mencari Kecepatan Akhir (Vt) Jika Variabel Jarak (s) Tidak Diketahui\n";
    cout << "5. Mencari Kecepatan Akhir (Vt) Jika Variabel Waktu (t) Tidak Diketahui\n";
    cout << "6. Mencari Percepatan (a) Jika Variabel Jarak (s) Tidak Diketahui\n";
    cout << "7. Mencari Percepatan (a) Jika Variabel Kecepatan Akhir (Vt) Tidak Diketahui\n";
    cout << "8. Mencari Percepatan (a) Jika Variabel Waktu (t) Tidak Diketahui\n";
    cout << "9. Mencari Jarak (s) Jika Variabel Kecepatan Akhir (Vt) Tidak Diketahui\n";
    cout << "10. Mencari Jarak (s) Jika Variabel Waktu (t) Tidak Diketahui\n";
    cout << "11. Mencari Waktu (t) Jika Variabel Jarak (s) Tidak Diketahui\n";
    cout << "12. Exit\n";
    cout << "Pilih [1-12]?: ";
    //Melakukan proses input ke variabel "input"
    cin >> input;
    //Mengembalikan nilai dari variabel "input"
    return input;
}

//Fungsi untuk menghitung GLBB
void hitungGLBB(int input){
    //Meklarasikan variabel "kecepatanAwal", "kecepatanAkhir", "percepatan", "jarak", dan "waktu" sebagai tipe data double (Bilangan real)
    double kecepatanAwal, kecepatanAkhir, percepatan, jarak, waktu;

    //Melakukan proses seleksi variabel "input" yang ada pada parameter menggunakan switch case (Struktur kontrol seleksi)
    switch (input){

    //1. Mencari Kecepatan Awal (Vo) Jika Variabel Jarak (s) Tidak Diketahui
    case 1:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan kecepatan akhir (Vt) : ";
        //Melakukan proses input ke variabel "kecepatanAkhir"
        cin >> kecepatanAkhir;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        kecepatanAwal = kecepatanAkhir - (percepatan * waktu);
        //Proses output hasil ke console
        cout << "Kecepatan Awal (Vo) : " << kecepatanAwal << " m/s" << endl;
        break;

    //2. Mencari Kecepatan Awal (Vo) Jika Variabel Kecepatan Akhir (Vt) Tidak Diketahui
    case 2:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        kecepatanAwal = (jarak - (0.5 * (percepatan * waktu * waktu))) / waktu;
        //Melakukan proses output hasil ke console
        cout << "Kecepatan Awal (Vo) : " << kecepatanAwal << " m/s" << endl;
        break;

    //3. Mencari Kecepatan Awal (Vo) Jika Variabel Waktu (t) Tidak Diketahui
    case 3:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Akhir (Vt) : ";
        //Melakukan proses input ke variabel "kecepatanAkhir"
        cin >> kecepatanAkhir;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        kecepatanAwal = sqrt((kecepatanAkhir * kecepatanAkhir) - (2 * percepatan * jarak));
        //Proses output hasil ke console
        cout << "Kecepatan Awal (Vo) : " << kecepatanAwal << " m/s" << endl;
        break;

    //4. Mencari Kecepatan Akhir (Vt) Jika Variabel Jarak (s) Tidak Diketahui
    case 4:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        kecepatanAkhir = kecepatanAwal + (percepatan * waktu);
        //Proses output hasil ke console
        cout << "Kecepatan Akhir (Vt) : " << kecepatanAkhir << " m/s" << endl;
        break;

    //5. Mencari Kecepatan Akhir (Vt) Jika Variabel Waktu (t) Tidak Diketahui
    case 5:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        kecepatanAkhir = sqrt((kecepatanAwal * kecepatanAwal) + (2 * percepatan * jarak));
        //Proses output hasil ke console
        cout << "Kecepatan Akhir (Vt) : " << kecepatanAkhir << " m/s" << endl;
        break;

    //6. Mencari Percepatan (a) Jika Variabel Jarak (s) Tidak Diketahui
    case 6:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Kecepatan Akhir (Vt) : ";
        //Melakukan proses input ke variabel "kecepatanAkhir"
        cin >> kecepatanAkhir;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        percepatan = (kecepatanAkhir - kecepatanAwal) / waktu;
        //Proses output hasil ke console
        cout << "Percepatan (a) : " << percepatan << " m/s^2" << endl;
        break;

    //7. Mencari Percepatan (a) Jika Variabel Kecepatan Akhir (Vt) Tidak Diketahui
    case 7:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        percepatan = ((jarak - (kecepatanAwal * waktu)) * 2) / (waktu * waktu);
        //Proses output hasil ke console
        cout << "Percepatan (a) : " << percepatan << " m/s^2" << endl;
        break;

    //8. Mencari Percepatan (a) Jika Variabel Waktu (t) Tidak Diketahui
    case 8:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Kecepatan Akhir (Vt) : ";
        //Melakukan proses input ke variabel "kecepatanAkhir"
        cin >> kecepatanAkhir;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Jarak (s) : ";
        //Melakukan proses input ke variabel "jarak"
        cin >> jarak;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        percepatan = ((kecepatanAkhir * kecepatanAkhir) - (kecepatanAwal * kecepatanAwal)) / (2 * jarak);
        //Proses output hasil ke console
        cout << "Percepatan (a) : " << percepatan << " m/s^2" << endl;
        break;

    //9. Mencari Jarak (s) Jika Variabel Kecepatan Akhir (Vt) Tidak Diketahui
    case 9:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Waktu (t) : ";
        //Melakukan proses input ke variabel "waktu"
        cin >> waktu;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        jarak = (kecepatanAwal * waktu) + (0.5 * (percepatan * (waktu * waktu)));
        //Proses output hasil ke console
        cout << "Jarak (s) : " << jarak << " meter" << endl;
        break;

    //10. Mencari Jarak (s) Jika Variabel Waktu (t) Tidak Diketahui
    case 10:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Kecepatan Akhir (Vt) : ";
        //Melakukan proses input ke variabel "kecepatanAkhir"
        cin >> kecepatanAkhir;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        jarak = ((kecepatanAkhir * kecepatanAkhir) - (kecepatanAwal * kecepatanAwal)) / (2 * percepatan);
        //Proses output hasil ke console
        cout << "Jarak (s) : " << jarak << " meter" << endl;
        break;

    //11. Mencari Waktu (t) Jika Variabel Jarak (s) Tidak Diketahui
    case 11:
        //Melakukan proses output tulisan ke console
        cout << "\nMasukkan Kecepatan Awal (Vo) : ";
        //Melakukan proses input ke variabel "kecepatanAwal"
        cin >> kecepatanAwal;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Kecepatan Akhir (Vt) : ";
        //Melakukan proses input ke variabel "kecepatanAkhir"
        cin >> kecepatanAkhir;
        //Melakukan proses output tulisan ke console
        cout << "Masukkan Percepatan (a) : ";
        //Melakukan proses input ke variabel "percepatan"
        cin >> percepatan;
        //Melakukan proses kalkulasi menggunakan rumus fisika yang ada
        waktu = (kecepatanAkhir - kecepatanAwal) / percepatan;
        //Proses output hasil ke console
        cout << "Waktu (t) : " << waktu << " second" << endl;

    //12. Exit
    case 12:
        break;

    //Error handling
    default:
        cout << "\nERROR : Input Tidak Valid\n";
        break;
    }
}
