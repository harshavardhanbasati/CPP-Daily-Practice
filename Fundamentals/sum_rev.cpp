#include<iostream>
#include<string>
using namespace std;

int sumofno(int num){
    int sum=0;
    while(num>0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int reverse(int num){
    int rev = 0, digit = 0;
    while(num>0){
        digit = num%10;
        rev = rev*10 + digit;
        num /= 10;
    }
    return rev;
}

void palindrome(int num)
{
    int original = num;
    int result;
    result = reverse(num);
    if(result==original){
        cout<<"It's a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
}

int main(){
    string op;
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"1) sum of number  \n2) Reverse of the number \n3)Palindrome"<<endl;
    cin>>op;
    if(op=="1"){
        cout<<"-----------------Sum of number--------------------"<<endl;
        cout<<sumofno(num)<<endl;
    }
    else if(op=="2"){
         cout<<"-----------------Reverse of the number------------"<<endl;
         cout<<reverse(num)<<endl;
    }
    else if(op=="3"){
        cout<<"-----------------Palindrome--------------------"<<endl;
        palindrome(num);
    }
    else{
        cout<<"Invalid option"<<endl;
    }
    return 0;
}