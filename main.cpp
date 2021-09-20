#include <iostream>
#include "MyHeader.h"

using namespace std;

int main() {

    int n, m;
    string name;
    cout << "Hello, what's your name?  ";
    cin >> name;
    do {
        cout << "Select your choice, "<< name << endl;
        cout << "plus1 (1)" << endl;
        cout << "Programmende (0)" << endl;
        cin >> m;

        switch (m) {

            case 1:

                cout << "n=";
                cin >> n;
                cout << n << "+1=" << plus1(n) << endl; // 17+1=18
        }

    } while (m != 0);



    return 0;
}
