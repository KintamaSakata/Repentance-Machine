#include <iostream>
using namespace std;

int main() {

awal :

    int a = 1;
    int b;
    int c;

    cout << "kalimat thoyyibah apa yang and inginkan? ((1).Astagfirullah, (2).Masyallah, (3).Lailahaillah)? ";
    cin >> c;
    cout << "berapa banyak anda mau mengucapkan kalimat thoyyibah? ";
    cin >> b;

    switch (c) {
    case 1 :
        while (a < b) {
            cout << "Astagfirullah, ucapkan astagfirullah sebanyaknya" << endl;
            a += 1;
        }
        break;
    case 2 :
        while (a < b) {
            cout << "Masyallah, ucapkan masyallah sebanyaknya" << endl;
            a += 1;
        }
        break;
    case 3 :
        while (a < b) {
            cout << "Lailahaillah, ucapkan lailahaillah sebanyaknya" << endl;
            a += 1;
        }
        break;
    }
    cout << "Masyaallah ya Ukhti" << endl; 

    char ulang;
    cout << "mau lanjut bertaubat (y/n)? ";
    cin >> ulang;

    if (ulang == 'y' || ulang == 'Y')
        goto awal;
    return 0;
}

//Astagfirullah Machine (ver 0,0) (ID)
