#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    cout << "initzalling..." << endl;

    string instruction;

    cout << "initzalling OK" << endl;

    while(true) {
        cout << "MENU" << endl
             << "1. clean TEMP FILE" << endl
             << "9. exit" << endl;

        cin >> instruction;

        switch(instruction) {
            case "1":
                cout << "cleaning..." << endl;
                system("start shells/cleanTemp.bat");
                cout << "cleaning OK." << endl;
            case "9":
                break;
        }
    }
}