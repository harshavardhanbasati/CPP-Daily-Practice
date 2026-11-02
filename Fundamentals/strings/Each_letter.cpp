#include<iostream>
#include<string>

using namespace std;

void each_letter(string name)
{
    for(int i=0;i<name.length();i++)
    {
        cout<<name[i]<<endl;
    }
}

int main()
{
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    each_letter(name);
    return 0;
}