#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
        string setgpt(string jdl) {
            this ->judul = jdl;
            return this -> judul;
        }
};

int main(){
    buku bukunya;
    cout << bukunya.setgpt("Matematika");
}