#include <iostream>
#include <conio.h>
using namespace std;

void ktpJudul(){
    cout << "===========================================================" << endl;
    cout << "                   Provinsi Jawa Barat" << endl;
    cout << "                    Kabupaten Cianjur" << endl;
    cout << "===========================================================" << endl;
}

string ktpTgl(string tanggalLahir, string bulanLahir, string tahunLahir){
    return (tanggalLahir + "-" + bulanLahir + "-" + tahunLahir);
}

void ktpNama(string NIG, string nama, string tempat, string lahir, string jenisKelamin){
    cout << "NIK                : " << NIG << endl;
    cout << "Nama               : " << nama << endl;
    cout << "Tempat/Tgl Lahir   : " << tempat << ", " << lahir << endl;
    cout << "Jenis kelamin      : " << jenisKelamin << endl;
}

void ktpAlamat(string alamat, string RT, string RW, string kelurahan, string kecamatan){
    cout << "Alamat             : " << alamat << endl;
    cout << "   RT/RW           : " << RT << "/" << RW << endl;
    cout << "   Kel/Desa        : " << kelurahan << endl;
    cout << "   Kecamatan       : " << kecamatan << endl;
}

string ktpLaku(string berlakuTanggal, string berlakuBulan, string berlakuTahun){
    return (berlakuTanggal + "-" + berlakuBulan + "-" + berlakuTahun);
}

void ktpAgama(string agama, string status, string pekerjaan, string kewarganegaraan, string berlaku){
    cout << "Agama              : " << agama << endl;
    cout << "Status Perkawinan  : " << status << endl;
    cout << "Pekerjaan          : " << pekerjaan << endl;
    cout << "Kewarganegaraan    : " << kewarganegaraan << endl;
    cout << "Berlaku Hingga     : " << berlaku << endl;
}

int main(){
    system("CLS");
    string NIG = "3203012503770011";
    string nama = "Guohui Chen";
    string tempat = "Fujian";
    string tanggalLahir = "25";
    string bulanLahir = "03";
    string tahunLahir = "1977";
    string jenisKelamin = "Male";
    string alamat = "Jl. Selamet Perumahan Rancabali No. 40";
    string RT = "002";
    string RW = "004";
    string kelurahan = "Muka";
    string kecamatan = "Cianjur";
    string agama = "Christian";
    string status = "Married";
    string pekerjaan = "Others";
    string kewarganegaraan = "China";
    string berlakuTanggal = "12";
    string berlakuBulan = "12";
    string berlakuTahun = "2023";

    ktpJudul();
    string lahir = ktpTgl(tanggalLahir, bulanLahir, tahunLahir);
    ktpNama(NIG, nama, tempat, lahir, jenisKelamin);
    ktpAlamat(alamat, RT, RW, kelurahan, kecamatan);
    string berlaku = ktpLaku(berlakuTanggal, berlakuBulan, berlakuTahun);
    ktpAgama(agama, status, pekerjaan, kewarganegaraan, berlaku);



    return 0;
}