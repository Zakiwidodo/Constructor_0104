#include <iostream>
#include <iostream>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim,string iNama);
    void cetak();

};

mahasiswa::mahasiswa(int iNim){
    nim = iNim;
}

mahasiswa::mahasiswa(string iNama){
    nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama){
    nim = iNim;
    nama = iNama;
}

void  mahasiswa::cetak(){

    cout <<  endl << "Nim =" << nim  << endl;
    cout << "Nama = " << nama << endl;
}

int main(){
    mahasiswa mhs1(102030);
    mahasiswa mhs2("Andi");
    mahasiswa mhs3(01203, "Santi");

    //tampilkan nilai
}