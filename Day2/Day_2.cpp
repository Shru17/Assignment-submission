//Assignment : Day 2

#include<iostream>
using namespace std;

struct Student
{
    int roll_no;
    float marks;
    Student *next;

};

int main()
{
    Student *x= new Student;

    cout<<"Enter Roll no. :";
    cin>>x->roll_no;

    cout<<"Enter marks :";
    cin>>x->marks;

    cout<<"Roll no. : "<<x->roll_no<<endl;
    cout<<"Marks    : "<<x->marks<<endl;

}
