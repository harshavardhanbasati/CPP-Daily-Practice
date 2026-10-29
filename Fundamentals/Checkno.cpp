#include<iostream>
//#include<string>

using namespace std;

void checkno(int num){
    if(num>0){
        cout<<"Postive";
    }
    else if(num==0){
        cout<<"Zero";
    } 
    else{
        cout<<"Negative";
    } 
}
int main(){
    int num;
    cout<<"Enter a number to check: "<<endl;
    cin>>num;
    checkno(num);
    return 0;
}