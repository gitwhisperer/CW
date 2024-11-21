#include <iostream>
#include <conio.h>
#define MAX 10

using namespace std;

class Student {
    char name[30];
    int roll_no;
    int total;
    float perc;
    float div;

public:
    void get_details(void);
    void print_details(void);
    void print_division(void);
};

void Student::get_details(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_no;
    cout << "Enter total marks out of 500: ";
    cin >> total;
    
    perc = (float)total / 500 * 100;
}

void Student::print_division(void) {
    if (perc >= 60) {
        div = 1;  
    } else if (perc >= 50 && perc < 60) {
        div = 2; 
    } else if (perc >= 40 && perc < 50) {
        div = 3;  
    } else {
        div = 4;  
    }

    if (div == 1) {
        cout << "Division: First" << endl;
    } else if (div == 2) {
        cout << "Division: Second" << endl;
    } else if (div == 3) {
        cout << "Division: Third" << endl;
    } else {
        cout << "Division: Fail" << endl;
    }
}

void Student::print_details(void) {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll_no << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << perc << "%" << endl;
    print_division();
}

int main() {
    Student std[MAX];
    for (int i = 0; i < MAX; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        std[i].get_details();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < MAX; i++) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        std[i].print_details();
    }

    return 0;
}
