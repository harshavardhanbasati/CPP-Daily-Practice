#include<iostream>
using namespace std;

void check_year(int year){
    if(year%400==0||(year%4==0&&year%100!=0)){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
}

int main(){
    int year;
    cout<<"Enter the year to check it's a leap year or not: "<<endl;
    cin>>year;
    check_year(year);
    return 0;
}