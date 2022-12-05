#include<iostream>
using namespace std;
main() {
    int a, num, rem, rnum;
    cout << "Enter a number: ";
    cin >> num;
    a = num;
    rnum = 0;
    while (num != 0) {
        rem = num % 10;
        rnum = rnum * 10 + rem;
        num = num / 10;
    }
    if (a == rnum)
        cout << "The given number is palindrome \n";
    else
        cout << "The given number is not palindrome \n";
    return 0;
}
