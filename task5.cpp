#include <iostream>
using namespace std;
bool isPrime(int num);
main()
{
    int num;
    cout<<"Enter Number:";
    cin>>num;
    bool result=isPrime(num);
    cout<<result;
}
bool isPrime(int num)
{
   
    for(int n=2;n*n<num;n++)
    {
        if(num%n==0)
        {
        return false;
        }
    }
     if(num <= 1)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}