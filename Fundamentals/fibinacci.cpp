#include<iostream>
using namespace std;

void fibinacc_series(int n){
    long long a=0, b=1;
    long long next = 0;
    for(int i=0;i<=n;i++){
        cout<<a<<endl;
        next = a + b;

        a = b;
        b = next;
    }
}

int main(){
    int n;
    cout<<"Enter the no.of series you want: "<<endl;
    cin>>n;
    fibinacc_series(n);
    return 0;
}