#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b;
    char op;
    cout<<"Enter Expression: "<<endl;
    cin>>a>>op>>b;
    switch(op){
        case '+':
           cout<<a+b<<endl;
           break;
        case '-':
           cout<<a-b<<endl;
           break;
        case '*':
         cout<<a*b<<endl;
         break;
        case '/':
           cout<<a/b<<endl;
           break;
        case '%':
            cout<<fmod(a,b)<<endl;
            break;
        case '^':
            cout<<pow(a,b)<<endl;
            break;
        default :
           cout<<"Invalid operator";        
    }
    cout<<"Thank you";
    return 0;
}