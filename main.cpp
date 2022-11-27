#include <iostream>     // voeg de I/O bibliotheek toe (voor std::cin en std::cout)
#include <string>       // voeg de string bibliotheek toe (voor std::string)
#include <cmath>        // voeg iets laterige calculaties toe
#include "fstream"

using namespace std;    // maakt namespace std bruikbaar zonder de std::


void myFunction() {
    cout << "I just got executed! \n";
}

class MyClass {
public:
    int myNum;
    string myString;
};


int main1() {
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


    struct {
        int myNum;
        string myString;
    } myStructure;
    myStructure.myNum = 10;
    cout <<"myNum is " << myStructure.myNum << "\n";

    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

// Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

// Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    myFunction();

    MyClass myObj; //creates an object of my class
    myObj.myNum = 15;
    myObj.myString = "Some text";
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";

    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyFile.close();


    return 0;
}
