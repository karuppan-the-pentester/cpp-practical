#include<iostream>
using namespace std;
main()
{
    int n;
    int i;
    int fact;
    cout<<"Enter the integer: ";
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial is: "<<fact;
    return 0;
}
