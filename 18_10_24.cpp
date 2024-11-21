#include <iostream>
using namespace std;

class worker {
    int age;
    char name[10];
public:
    void get();
    void show();
};

void worker::get() {
    cout << "your name please: ";
    cin >> name;
    cout << "your age please: ";
    cin >> age;
}

void worker::show() {
    cout << "My name is: " << name << ", My age is: " << age << endl;
}

class manager : public worker { 
    int now;
public:
    void get();
    void show();
};

void manager::get() {
    worker::get(); 
    cout << "number of workers under you: ";
    cin >> now;
}

void manager::show() {
    worker::show(); 
    cout << "Number of workers under me are: " << now << endl;
}

int main() {
    worker WI;
    manager MI;
    MI.get();
    MI.show();
    return 0;
}