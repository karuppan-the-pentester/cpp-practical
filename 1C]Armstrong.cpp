#include<iostream>
using namespace std;
main()
{
    int a,num,i,sum;
    cout<<"Enter a number: ";
    cin>>num;
    a=num;
    sum=0;

    while(num>0){
        i=num%10;
        sum=sum+i*i*i;
        num=num/10;
    }

    if(a==sum)
        cout<<"Given number is armstrong"<<endl;
    else
        cout<<"Given number is not armstrong"<<endl;
    return 0;

}
