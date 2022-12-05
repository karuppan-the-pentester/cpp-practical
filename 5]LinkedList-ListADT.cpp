#include<iostream>
using namespace std;
class shape {

public:
    virtual void getdata() = 0;
    virtual void display() = 0;

};

class circle:public shape {

private:
    float a, r;

public:
    void getdata() {
        cout << "\nEnter the radius: ";
        cin>>r;
    }

    void display() {
        a = 3.14 * r * r;
        cout << "\nArea of the circle" << a << "square units";
    }
};

class triangle:public shape {

private:
    int b, h;
    float a;

public:
    void getdata() {
        cout << "\nEnter b and h values: ";
        cin >> b >> h;
    }
    void display() {
        a = 0.5 * b * h;
        cout << "\nArea of the triangle " << a << "square units\n\t";
    }

};

int main(){
    shape *s[2];
    circle c;
    triangle t;
    s[0]=&c;
    s[0]->getdata();
    s[0]->display();
    s[1]=&t;
    s[1]->getdata();
    s[1]->display();
    return 0;
}
