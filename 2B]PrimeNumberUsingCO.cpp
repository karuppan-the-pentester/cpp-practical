#include<iostream>
using namespace std;
class prime {
    int n, i, count;
public:
    void getdata() {
        cout << "\nEnter the value of n: ";
        cin >> n;
    }

    void showdata() {
        count = 0;
        for (i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }
        if (count == 2)
            cout << "The given number is prime";
        else
            cout << "The given number is not prime";
    }
};
int main(){
    prime x;
    x.getdata();
    x.showdata();
}