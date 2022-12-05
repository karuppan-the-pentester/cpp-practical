#include<iostream>
using namespace std;
class record {
private:
    char name[20];
    int regno;
    int marks, m1, m2, m3, sum;
    float avg;

public:
    void getdata() {
        cout<<"\nenter the name: ";
        cin>>name;
        cout<<"enter the regno: ";
        cin>>regno;
        cout<<"enter the m1,m2,m3: ";
        cin>>m1>>m2>>m3;
    }

    void calculate() {
        sum = m1 + m2 + m3;
        avg = sum / 3;
    }

    void display() {
        cout<<"\nName: "<<name;
        cout<<"\nRegno: "<<regno;
        cout<<"\nMark1: "<<m1;
        cout<<"\nMark2: "<<m2;
        cout<<"\nMark3: "<<m3;
        cout<<"\nTotal: "<<sum;
        cout<<"\nAverage: "<<avg;
    }
};
int main(){
    record r;
    r.getdata();
    r.calculate();
    r.display();
}
