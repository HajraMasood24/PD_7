#include <iostream>
using namespace std;
void cal(int d);
main()
{
    int d;
    cout<<"Enter the number of days you visited Hospital:";
    cin>>d;
    cal(d);
}
void cal(int d)
{
    int doc=7;
    int p;
    int t=0;
    int unt=0;
    for(int i=1;i<=d;i++){
        cout<<"Number of patients who visited hosiptal on Day" <<i<<":";
        cin>>p;
     if(i%3==0 && i!=0 && unt>t)
    {
        doc++;
    }
    if (p<=doc)
    {
        t+=p;
        unt+=0;
    }
    else if (p>doc)
    {
        t+=doc;
        unt+=p-doc;
    }
    }
    cout<<"Treated Patients:"<<t<<endl<<"Untreated Patients:"<<unt;
}