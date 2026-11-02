#include<iostream>
#include<string>

using namespace std;

class Test
{
    public: 
       Test(){
        cout<<"Constuctor Called"<<endl;
       }
       ~Test(){
        cout<<"Deconstuctor called"<<endl;
       }
};

int main(){
    Test t;
    cout<<"Main Function called!"<<endl;
    return 0;
}