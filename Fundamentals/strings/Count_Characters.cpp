#include<iostream>
#include<string>

using namespace std;

void count_char(string str)
{
    int count = 0;
    char target;
    cout<<"Enter the character to find: "<<endl;
    cin>>target;
    for(char ch: str)
    {
        if(ch==target)
        {
            count++;
        }
    }
    cout<<"No.of times this character repeated"<<target<<" is : "<< count;
}

int main()
{
    string str;
    cout<<"Enter the String: "<<endl;
    getline(cin, str);
    count_char(str);
    return 0;
}