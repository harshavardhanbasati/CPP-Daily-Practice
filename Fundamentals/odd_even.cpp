#include<iostream>
#include<string>
using namespace std;

string check(int n){
    string res;
    if(n%2==0){
        res = "even";
    }
    else{
        res = "odd";
    }
    return res;
}

int main(){
    int num;
    cout<<"Enter the number to check: "<<endl;
    cin>>num;
    cout<<check(num)<<endl;
    return 0;
}
