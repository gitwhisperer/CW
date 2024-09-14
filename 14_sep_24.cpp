//wap in c++ enter 5 gpa of a student using array of class concept
//wap in c++ enter n book details, with n writers name using array with class and object concept
#include <iostream>
using namespace std;

class Student {
private:
    float gpas[5];

public:
    void inputGPA() {
        cout << "Enter 5 GPA values: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "GPA " << i + 1 << ": ";
            cin >> gpas[i];
        }
    }

    void displayGPA() {
        cout << "The GPA values are: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "GPA " << i + 1 << ": " << gpas[i] << endl;
        }
    }
};

int main() {
    Student student;
    student.inputGPA();
    student.displayGPA();
    return 0;
}