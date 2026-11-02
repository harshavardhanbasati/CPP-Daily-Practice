#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    bool isPalindrome = true;
    cin>>str;
    int left = 0;
    int right = str.length() - 1;
    while(left < right)
    {
        if(str[left] != str[right])
        {
            isPalindrome = false;
            break;
        }
        left ++;
        right --;
    }
    if(isPalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}