#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n--- Output ---" << endl;
    cout << "Hello " << name << ", you are " << age << " years old" << endl;

    return 0;
}
