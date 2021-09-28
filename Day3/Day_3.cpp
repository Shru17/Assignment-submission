//Assignment : Day 3

#include<iostream>
using namespace std;

void create_list();
void delete_end();
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int main()
{
    int ch;
    do
    {
        cout<<"\nEnter your choice : ";
        cout<<"\n1) Create list\n2) Delete at end\n3) Display \n4) Exit\n";
        cin>>ch;

        switch(ch)
        {
        case 1:
            create_list();
            break;

        case 2:
            delete_end();
            break;

        case 3:
            display();
            break;

        case 4:
            return(0);

        default :
            cout<<"Invalid Choice"<<endl;
            break;

        }

    }while(ch!=3);
}

void create_list()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(node));

    if(newnode==NULL)
    {
        cout<<"Memory is not allocated."<<endl;
        return;
    }

    cout<<"Enter the data: ";
    cin>>newnode->data;

    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;
        cout<<"Data is inserted successfully."<<endl;
        return;
    }

    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    cout<<"Data is inserted successfully."<<endl;
}

void delete_end()
{
    struct node *temp,*prev;
    if(head==NULL)
    {
        cout<<"Underflow."<<endl;
        return;
    }

    if(head->next==NULL)
    {
        temp=head;
        head=NULL;
        cout<<head->data<<" is deleted."<<endl;
        free(temp);

    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        cout<<temp->data<<" is deleted."<<endl;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if(head==NULL)
    {
        cout<<"SORRY currently list is EMPTY."<<endl;
        return;
    }

    else
    {
        temp=head;
        cout<<"LIST : "<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}




