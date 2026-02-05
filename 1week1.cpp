#include <iostream>
#include <string>
using namespace std;

class student {
    private :
    int rollNumber;
    string name;
    float marks;
    public : 
    student () {
        rollNumber = 0;
        name = " ";
        marks = 0.0;
    }
    void input () {
        cout << "Enter Roll number:";
        cin.ignore();
        cout << "Enter name:";
        getline (cin,name);
        cout << "Enter marks:";
        cin >> marks;
    }
    void display() {
        cout << rollNumber << "\t" << name << "\t" << marks << endl;
    }
    ~student () {
        cout << "Student object with roll no" << rollNumber << "is destroyed";
    }
};

int main () {
    int n,i;
    cout << "Enter number of students:";
    cin >> n;

    student * students = new student[n];
    for (int i = 0;i<n;i++){
        cout << "\nEnter details pf student" << i+1 << endl;
        students[i].input();
    }
    cout <<"\nRollNo\tName\tMarks\n";
    for (i=0;i<n;i++){
        students[i].display();
    }
        delete[] students;

}
