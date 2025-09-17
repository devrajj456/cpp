#include<iostream>
#include<string>
using namespace std;

class Teacher{

public:
    // properties/attributes
    string name;
    string dept;
    string subject;

    // non-parameterized constructor
    // Teacher(){
    //     dept = "Computer Science";
    // }

    // parameterized constructor
    // Teacher(string n,string d,string s,double sal){
    //     name=n;
    //     dept=d;
    //     subject=s;
    //     salary=sal;
    // }

    Teacher(string name,string dept,string subject,double salary){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj){ // pass by reference
        cout<<"I am copy constructor"<<endl;
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
    }
private:
    double salary;
public:
    // // properties/attributes
    // string name;
    // string dept;
    // string subject;

    // methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }

    // setter
    void setSalary(double s){
        salary=s;
    }

    // getter
    double getSalary(){
        return salary;
    }
};

int main(){
    // Teacher t1; // constructor call
    // Teacher t2;
    // t1.name="Sakshi";
    // t1.subject="C++";
    // // t1.dept="Computer Science";
    // t1.setSalary(25000);
    Teacher t1("Sakshi","Computer Science","C++",300000);

    // cout<<t1.name<<endl;
    // cout<<t1.getSalary()<<endl;
    // cout<<t1.dept<<endl;
    t1.getInfo();
    // Teacher t2(t1); // default copy constructor
    Teacher t2(t1); // custom copy constructor
    t2.getInfo();
    return 0;
}