#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    Person(string name, int age, string gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    string getName() const {
        return name;
    }
    void setName(string name) {
        this->name = name;
    }
    int getAge() const {
        return age;
    }
    void setAge(int age) {
        this->age = age;
    }
    string getGender() const {
        return gender;
    }
    void setGender(string gender) {
        this->gender = gender;
    }
private:
    string name;
    int age;
    string gender;
};
class Student : public Person {
public:
    Student(string name, int age, string gender, int rollNumber, string class_) : Person(name, age, gender) {
        this->rollNumber = rollNumber;
        this->class_ = class_;
    }
    int getRollNumber() const {
        return rollNumber;
    }
    void setRollNumber(int rollNumber) {
        this->rollNumber = rollNumber;
    }
    string getClass() const {
        return class_;
    }
    void setClass(string class_) {
        this->class_ = class_;
    }
private:
    int rollNumber;
    string class_;
};
class Teacher : public Person {
public:
    Teacher(string name, int age, string gender, string subject, double salary) : Person(name, age, gender) {
        this->subject = subject;
        this->salary = salary;
    }
    string getSubject() const {
        return subject;
    }
    void setSubject(string subject) {
        this->subject = subject;
    }
    double getSalary() const {
        return salary;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
private:
    string subject;
    double salary;
};
int main() {
    Student student1("John", 15, "Male", 123, "10th");
    Teacher teacher1("Mary", 30, "Female", "Mathematics", 50000);

    cout << "Student: " << student1.getName() << ", " << student1.getAge() << ", " << student1.getGender()
         << ", Roll Number: " << student1.getRollNumber() << ", Class: " << student1.getClass() << endl;
    cout << "Teacher: " << teacher1.getName() << ", " << teacher1.getAge() << ", " << teacher1.getGender()
         << ", Subject: " << teacher1.getSubject() << ", Salary: " << teacher1.getSalary() << endl;

    return 0;
}