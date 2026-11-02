#include<iostream>
#include<string>
using namespace std;

int vowels(string str)
{
    int vowels = 0;
    for(int i =0; i < str.length(); i++){
        char ch = str[i];
        if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A' || ch == 'E'|| ch == 'I'||ch == 'O'|| ch == 'U'){
            vowels ++;
        }
    }
    return vowels;
}

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    cout<<"No.of Vowels: "<<vowels(str);
    return 0;
}