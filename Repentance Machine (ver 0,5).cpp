#include <iostream>
using namespace std;

int main() {

awal :
    int a = 1;
    int b;
    int c;

    cout << "kalimat thoyyibah apa yang and inginkan? ((1).Astagfirullah, (2).Masyallah, (3).Lailahaillah)? ";
    cin >> b;
    cout << "berapa banyak anda mau mengucapkan kalimat thoyyibah? ";
    cin >> c;
    
    switch (b) {
    case 1 :
        while (a <= c) {
            cout << "Astagfirullah, ucapkan astagfirullah sebanyaknya" << endl;
            a += 1;
        }
        break;
    case 2 :
        while (a <= c) {
            cout << "Masyallah, ucapkan masyallah sebanyaknya" << endl;
            a += 1;
        }
        break;
    case 3 :
        while (a <= c) {
            cout << "Lailahaillah, ucapkan lailahaillah sebanyaknya" << endl;
            a += 1;
        }
        break;
    }
    cout << "Masyaallah ya Ukhti" << endl; 

    char ulang;
    cout << "mau lanjut bertaubat (y/n)? ";
    cin >> ulang;

    if (ulang == 'y' || ulang == 'Y') {
        goto awal;
    }
    return 0;
}

/*
Repentance Machine (ver 0,0) (ID) = Raw (13 may 2022)
Repentance Machine (ver 0,5) (ID) = clearner "int" nothing much (14 may 2022)
*\
