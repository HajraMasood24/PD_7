#include <iostream>
#include<iomanip>
using namespace std;
void per(int c);
main()
{
    int c;
    cout<<"Enter the count of cargo for transportation:";
    cin>>c;
    per(c);
}
void per(int c)
{
    int ton;
    int mb=0,truck=0,train=0,cargo=0;
    float sum;
    for(int i=1;i<=c;i++){
        cout<<"Enter the tonnage of cargo"<<i<<":";
        cin>>ton;
        sum+=ton;
        if(ton<=3){
            mb+=ton;
        }
        else if(ton>3 && ton<=11){
            truck+=ton;
        }
        else if(ton>=12){
            train+=ton;
        }
    }
float avr=(mb*200+truck*175+train*120)/sum;
cout<<fixed<<setprecision(2)<<avr<<"%"<<endl;

float pmb=mb/sum*100;
cout<<fixed<<setprecision(2)<<pmb<<"%"<<endl;

float pt=truck/sum*100;
cout<<fixed<<setprecision(2)<<pt<<"%"<<endl;

float ptr=train/sum*100;
cout<<fixed<<setprecision(2)<<ptr<<"%"<<endl;

}