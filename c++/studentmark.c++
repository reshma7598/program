#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll_number;
    char grade;

public:
    Student() {
        name = "";
        roll_number = 0;
        grade = ' ';
    }
    Student(string n, int roll, char g) {
        name = n;
        roll_number = roll;
        grade = g;
    }
    void setName(string n) {
        name = n;
    }

    void setRollNumber(int roll) {
        roll_number = roll;
    }

    void setGrade(char g) {
        grade = g;
    }
    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return roll_number;
    }

    char getGrade() const {
        return grade;
    }
};

int main() {
    Student student1;

    student1.setName("John");
    student1.setRollNumber(101);
    student1.setGrade('A');
    cout << "Name: " << student1.getName() << endl;
    cout << "Roll Number: " << student1.getRollNumber() << endl;
    cout << "Grade: " << student1.getGrade() << endl;
    Student student2("Alice", 102, 'B');

    // Displaying second student information
    cout << "\nName: " << student2.getName() << endl;
    cout << "Roll Number: " << student2.getRollNumber() << endl;
    cout << "Grade: " << student2.getGrade() << endl;

    return 0;
}
