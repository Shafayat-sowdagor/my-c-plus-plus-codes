#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string phoneNumber;
    string address;

public:
    void setName(string n) {
        name = n;
    }

    void setRollNumber(int r) {
        rollNumber = r;
    }

    void setPhoneNumber(string p) {
        phoneNumber = p;
    }

    void setAddress(string a) {
        address = a;
    }

    string getName() {
        return name;
    }

    int getRollNumber() {
        return rollNumber;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }

    string getAddress() {
        return address;
    }
};

int main() {
    Student sam, john;

    sam.setName("Samuyel Johnson");
    sam.setRollNumber(1);
    sam.setPhoneNumber("1234567890");
    sam.setAddress("123 Main St. Chicago");

    john.setName("John");
    john.setRollNumber(2);
    john.setPhoneNumber("0987654321");
    john.setAddress("456 Elm St.");

    cout << "Student 1: " << sam.getName() << endl;
    cout << "Roll Number: " << sam.getRollNumber() << endl;
    cout << "Phone Number: " << sam.getPhoneNumber() << endl;
    cout << "Address: " << sam.getAddress() << endl << endl;

    cout << "Student 2: " << john.getName() << endl;
    cout << "Roll Number: " << john.getRollNumber() << endl;
    cout << "Phone Number: " << john.getPhoneNumber() << endl;
    cout << "Address: " << john.getAddress() << endl;

    return 0;
}

