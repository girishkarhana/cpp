#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    T course;
    T department;

    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> student1("Alice", 20, "B.Tech", "Computer Science");
    student1.display();

    cout << endl;

    Student<string> student2("Bob", 22, "MBA", "Business Administration");
    student2.display();

    return 0;
}
