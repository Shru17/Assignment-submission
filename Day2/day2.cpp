//Assignment : Day 2


#include<iostream>
using namespace std;

void enter_detail();
void display();

struct Student
{
    int roll_no;
    float marks;
    struct Student *next;
};

struct Student *head;

int main()
{
    int ch;
    do
    {
        cout<<"\nEnter your choice : ";
        cout<<"\n1) Enter details\n2) Display\n3) Exit\n";
        cin>>ch;

        switch(ch)
        {
        case 1:
            enter_detail();
            break;

        case 2:
            display();
            break;

        case 3:
            return(0);

        default :
            cout<<"Invalid Choice"<<endl;
            break;

        }

    }while(ch!=3);
}

void enter_detail()
{
    struct Student*newnode,*temp;
    newnode=(struct Student*)malloc(sizeof(Student));

    if(newnode==NULL)
    {
        cout<<"Memory is not allocated."<<endl;
        return;
    }

    cout<<"Enter roll no of student: ";
    cin>>newnode->roll_no;
    cout<<"Enter marks of student: ";
    cin>>newnode->marks;

    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;
        cout<<"Your information is recorded successfully."<<endl;
        return;
    }

    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    cout<<"Your information is recorded successfully."<<endl;
}



void display()
{
    struct Student *temp;
    if(head==NULL)
    {
        cout<<"SORRY currently list is EMPTY."<<endl;
        return;
    }

    else
    {
        temp=head;
        cout<<"LIST OF STUDENT DETAILS IS AS FOLLOW : "<<endl;
        while(temp!=NULL)
        {
            cout<<"Roll no. : "<<temp->roll_no<<endl;
            cout<<"Marks    : "<<temp->marks<<endl;

            temp=temp->next;
        }
    }
}






