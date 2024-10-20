#include <iostream>
using namespace std;
bool isPrime(int num);
int primorial(int num);
main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    int result=primorial(n);
    cout<<result;
}
bool isPrime(int num)
{
   
        for(int i=2; i<num; i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        if(num<=1)
        {
            return false;
        }
        else
        {
            return true;
        }
   

}
int primorial(int n)
{
    int product=1;
    int num=2;
    int pc=0;
    while(pc<n)
    {
        if(isPrime(num))
        {
            product*=num;
            pc++;
        }
        num++;
    }
    return product;
}