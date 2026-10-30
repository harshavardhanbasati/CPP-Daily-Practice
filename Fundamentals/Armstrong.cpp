#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string armstrong(int num){
    int digits=0,remainder,result=0;
    int original = num;
    int temp = num;
    //finding the no.of digits in a number

    while(temp!=0)
    {
        digits++;
        temp /=10;
    }

    //finding the result here
    temp = num;
    while(temp!=0)
    {
        remainder = temp %10;
        result += pow(remainder,digits);
        temp /= 10;
    }

     if(original == result)
     {
         return"It's a Armstrong number!";
     }
     else{
         return "It's not a Armstrong number";
     }

}



int main()
{
    int num;
    cout<<"Enter the number to check: "<<endl;
    cin>>num;
    cout<<armstrong(num);
    return 0;
}