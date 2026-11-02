#include<iostream>
#include<string>

using namespace std;

string reverse(string str)
{
    string reverse="";
    for (int i = str.length()-1;i>=0;i--)
    {
        reverse += str[i];
    }
    return reverse;

}

int main()
{
    string word;
    cout<<"Enter a word: "<<endl;
    cin>>word;
    cout<<reverse(word);
    return 0;
}