//WAP in cpp of a student enrollment system using inheritence all data manipulation shall be on the basis of templates use exception handling when required.
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

template <typename T>
class Person {
protected:
    T name;
    T address;
    T phone;
public:
    Person(T name, T address, T phone) : name(name), address(address), phone(phone) {}
    virtual void display() const {
        std::cout << "Name: " << name << "\nAddress: " << address << "\nPhone: " << phone << std::endl;
    }
};

template <typename T>
class Student : public Person<T> {
private:
    T studentID;
    T course;
public:
    Student(T name, T address, T phone, T studentID, T course) 
        : Person<T>(name, address, phone), studentID(studentID), course(course) {}
    void display() const override {
        Person<T>::display();
        std::cout << "Student ID: " << studentID << "\nCourse: " << course << std::endl;
    }
};

template <typename T>
class EnrollmentSystem {
private:
    std::vector<Student<T>> students;
public:
    void enrollStudent(const Student<T>& student) {
        students.push_back(student);
    }
    void displayAllStudents() const {
        for (const auto& student : students) {
            student.display();
            std::cout << "-----------------" << std::endl;
        }
    }
};

int main() {
    try {
        EnrollmentSystem<std::string> system;
        Student<std::string> student1("Harshit", "20, shankar nagar", "9462075155", "S12345", "Computer Science");
        Student<std::string> student2("Hemant", "13, Jagatpura", "9462351565", "S67890", "Information technology");

        system.enrollStudent(student1);
        system.enrollStudent(student2);

        system.displayAllStudents();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}