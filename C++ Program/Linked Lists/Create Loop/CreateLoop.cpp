
#include<bits/stdc++.h>
using namespace std;

//*Initialisation of a linkedlist
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

//*Creating a loop in linkedlist from end point to given position (pos)
void makeCycle(node* &head,int pos){
    int count=0;
    node* startNode;
    node* temp=head;
    while (temp->next!=NULL)
    {
        if (count==pos)
        {
            startNode=temp;
        }
        
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

//*Insert an element in a list
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if (head==NULL)
    {
        head=n;
        n->next=NULL;
        return;
    }
    
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}

//*To print a linkedlist
void print(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    int n;
    cout<<"Enter no. of nodes in Linkedlist"<<endl;
    cin>>n;
    node* head=NULL;
    for (int i = 1; i <= n; i++)
    {
        insertAtTail(head,i);
    }

    print(head);
    makeCycle(head,3);
    print(head);           //Caution⚠️: Infinite loop execute i.e. loop does not terminate until you press ctrl+c or kill the terminal
    return 0;
}
