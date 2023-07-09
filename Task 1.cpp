#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
    string name;
    int id;
};

int main() {
    Student john;
    john.name = "John Cena";
    john.id = 2222;

    cout << "Student Name: " << john.name << endl;
    cout << "Student ID: " << john.id << endl;

    return 0;
}

