#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int square(int n){
    return n*n;
}

int cube(int n){
    return n*n*n;
}

int main(){
    int n;
    string op;
    cout<<"Enter the no: "<<endl;
    cin>>n;

    cout<<"want to find: square | cube ?"<<endl;
    cin>>op;
    if(op=="square"){
        cout<<square(n);
    }
    else if(op=="cube"){
        cout<<cube(n);
    }
    else
    {
        cout<<"Invalid option!";
    }
    return 0;
}