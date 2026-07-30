#include<bits/stdc++.h>
using namespace std;

class Person{
protected:
    string name;
    int age;
    int id;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter ID: ";
        cin >> id;
    }

    void displayPersonDetails() {
        cout << "\nName : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "ID   : " << id << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
    string branch;
    float cgpa;

public:
    void getStudentDetails() {
        getPersonDetails();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayStudentDetails() {
        displayPersonDetails();

        cout << "Roll Number : " << rollNo << endl;
        cout << "Branch      : " << branch << endl;
        cout << "CGPA        : " << cgpa << endl;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;
    string department;
    float salary;

public:
    void getEmployeeDetails() {
        getPersonDetails();

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails() {
        displayPersonDetails();

        cout << "Employee ID : " << employeeID << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : " << salary << endl;
    }
};

class Faculty : public Employee {
protected:
    string designation;
    string subject;

public:
    void getFacultyDetails() {
        getEmployeeDetails();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayFacultyDetails() {
        displayEmployeeDetails();

        cout << "Designation : " << designation << endl;
        cout << "Subject     : " << subject << endl;
    }
};

class TeachingAssistant : public Student, public Employee {
protected:
    int tutorialHours;

public:
    void getTADetails() {
        getStudentDetails();

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter Tutorial Hours: ";
        cin >> tutorialHours;
    }

    void displayTADetails() {
        displayStudentDetails();

        cout << "Employee ID : " << employeeID << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : " << salary << endl;
        cout << "Tutorial Hours : " << tutorialHours << endl;
    }
};


int main(){
    
    cout << "\nFACULTY\n";

    Faculty Rakesh;
    Rakesh.getFacultyDetails();
    Rakesh.displayFacultyDetails();

    cout << "\nTEACHING ASSISTANT\n";
    TeachingAssistant Keshav;
    Keshav.getTADetails();
    Keshav.displayTADetails();

    return 0;
}