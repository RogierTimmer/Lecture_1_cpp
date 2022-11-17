#include <iostream>     // voeg de I/O bibliotheek toe (voor std::cin en std::cout)
#include <string>       // voeg de string bibliotheek toe (voor std::string)
#include <cmath>        // voeg iets laterige calculaties toe

using namespace std;    // maakt namespace std bruikbaar zonder de std::


int main() {
    cout << "Hello World! \n";
    cout << "I am learning C++\n";
    int mynum;
    mynum = 3;
    cout << "x = " << mynum <<"\n" << mynum <<mynum+mynum;
    cout << "\n";
    int x=3, y=5, z=12;
    cout << x+y+z << "\n";
    cout << "squareroot of x = " << sqrt(mynum) << "\n";
    cout << "log of x = " << log(mynum);

    bool isCodingFun = true;
    cout << "\n" <<isCodingFun;
    x = 9;
    y = 10;
    cout << (x>y) << "\n";

    if (20<10) {
        cout << "If-statement is true " << true <<"\n";
    } else {
        cout << "If-statement is false " << false <<"\n";
    }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout <<"My numbers is equal to " << myNumbers[5] << "\n";
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }



    return 0;
}