#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a: "<<a<<" b: "<<b;
}
int main(){
    int a,b;
    cout<<"Enter elements to swap!"
    <<" A: "<<"B: "<<endl;
    cin>> a>>b;
    swap(a,b);
    return 0;
}