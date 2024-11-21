#include <iostream>
#include <string>
using namespace std;

class Student12th {
protected:
    string n;
    int r;
    int m[5];
public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter roll number: ";
        cin >> r;
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> m[i];  
        }
    }
    void displayDetails() {
        cout << "Name: " << n << endl;
        cout << "Roll Number: " << r << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Marks for subject " << i + 1 << ": " << m[i] << endl;
        }
    }
};

class BTechITStudent : public Student12th {
private:
    int sm[5];
public:
    void getDetails() {
        Student12th::getDetails();
        for (int i = 0; i < 5; i++) {
            cout << "Enter semester marks for subject " << i + 1 << ": ";
            cin >> sm[i];
        }
    }
    void displayDetails() {
        Student12th::displayDetails();
        for (int i = 0; i < 5; i++) {
            cout << "Semester marks for subject " << i + 1 << ": " << sm[i] << endl;
        }
    }
};

int main() {
    BTechITStudent s;
    s.getDetails();
    s.displayDetails();
    return 0;
}