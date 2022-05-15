#include <iostream>
using namespace std;

int main() {

point :

    int a = 1;
    int b;
    int c;

    cout << "what thayyibah sentence do you want? ((1).Astagfirullah, (2).Masyallah, (3).Lailahaillah)? ";
    cin >> c;
    cout << "how much do you want to say the thayyibah sentence? ";
    cin >> b;

    switch (c) {
    case 1 :
        while (a < b) {
            cout << "Astagfirullah, say astaghfirullah as much as possible" << endl;
            a += 1;
        }
        break;
    case 2 :
        while (a < b) {
            cout << "Masyallah, say masyallah as much as possible" << endl;
            a += 1;
        }
        break;
    case 3 :
        while (a < b) {
            cout << "Lailahaillah, say lailahaillah as much as possible" << endl;
            a += 1;
        }
        break;
    }
    cout << "Masyaallah ya Ukhti" << endl; 

    char again;
    cout << "do you want to continue (y/n)? ";
    cin >> again;

    if (again == 'y' || again == 'Y')
        goto point;
    return 0;
}

//Repentance Machine (ver 0,0) (eng)
