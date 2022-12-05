#include<iostream>
using namespace std;

class LIST {

    struct Node {
        int num;
        struct Node *next;
    };

    Node *first;

public:
    LIST() { first = NULL; }

    void insertfirst();
    void deletefirst();
    void display();

};
void LIST :: insertfirst(){

    Node *nn=new Node;
    cout<<"\nEnter the element to be inserted: ";
    cin>>nn->num;
    nn->next=first;
    first=nn;

}
void LIST :: deletefirst(){

    if(first==NULL)
        cout<<"\nList is empty! \n";

    else{

        Node *temp=first;
        cout<<"\nDeleted element is "<<first->num;
        first=first->next;
        delete(temp);
    }
}

void LIST :: display(){
    if(first==NULL)
        cout<<"\nList is empty! \n";

    else{
        Node *temp=first;
        while(temp!=NULL){
            cout<<temp->num<<" ";
            temp=temp->next;
        }
    }
}
int main(){

    LIST L;
    int ch;
    do{

        cout<<"\n1. Insert at front.\n2. Delete from front\n3. Display\n4. Exit\n\nEnter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1: L.insertfirst(); break;
            case 2: L.deletefirst(); break;
            case 3: L.display(); break;
        }

    }while(ch!=4);

    return 0;
}
