#include <iostream>
using namespace std;
int main()

{
    int t=100;
    
    cout<<"enter the value of t";

    cin>>t;

    if(t>=86)
    cout<<"Grade A";
    else if(t>=72)
    cout<<"Grade B";
    else if(t>=60)
    cout<<"Grade C";
    else if(t>=50)
    cout<<"Grade D";
    else
    cout<<"Grade F";

}