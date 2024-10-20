#include <iostream>
using namespace std;
void print(int r);
main()
{
    int r;
    cout<<"Enter the number of rows:";
    cin>>r;
    print(r);
    
}
void print(int r)
{
    for(int row=r; row>0; row--)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}