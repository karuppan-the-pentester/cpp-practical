#include<iostream>
#include<stdlib.h>
#define pi 3.14
using namespace std;
class fn {
public:
    void area(int);
    void area(int, int);
    void area(float, int, int);
};

void fn::area(int r){
    cout<<"Area of circle:"<<pi*r*r;
}

void fn::area(int l,int h){
    cout<<"Area of rectangle:"<<l*h;
}

void fn::area(float t,int b,int h){
    cout<<"Area of triangle:"<<0.5*b*h;
}

int main(){
    int ch;
    int r,l,b,h;
    float t;
    fn obj;
    cout<<"FUNCTION OVERLOADING";
    cout<<"\n 1.Area of circle\n 2.Area of rectangle\n 3.Area of traingle\n 4.exit\n";
    cout<<"enter your choice\n";
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"enter the radius\n";
            cin>>r;
            obj.area(r);
            break;

        case 2:
            cout<<"enter the sides of rectangle\n";
            cin>>l>>h;
            obj.area(l,h);
            break;

        case 3:
            cout<<"enter the sides of triangle\n";
            cin>>b>>h;
            obj.area(0.5,b,h);
            break;

        case 4:
            exit(0);
    }
    return 0;
}
