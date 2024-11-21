#include <iostream>
#include <cstring> 
#define MAX 20
class student {
private:
    char name[30];
    int rollNo;
    int total;
    float perc;
public:
    void getDetails();
    void putDetails();
};
void student::getDetails() {
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter roll number: ";
    std::cin >> rollNo;
    std::cout << "Enter total marks out of 500: ";
    std::cin >> total;
    perc = (float)total / 500 * 100;
}
void student::putDetails() {
    std::cout << "Student details:\n";
    std::cout << "Name: " << name << ", Roll number: " << rollNo;
    std::cout << ", Total: " << total << ", Percentage: " << perc << "%\n";
}
int main() {
    int n;
    student std[MAX];
    std::cout << "Enter total number of students (max " << MAX << "): ";
    std::cin >> n;
    if (n > MAX) {
        std::cout << "Number of students cannot exceed " << MAX << ".\n";
        return 1;
    }

    for (int loop = 0; loop < n; loop++) {
        std::cout << "Enter details of student " << (loop + 1) << ":\n";
        std[loop].getDetails();
    }
    for (int loop = 0; loop < n; loop++) {
        std::cout << "Details of student " << (loop + 1) << ":\n";
        std[loop].putDetails();
    }

    return 0;
}