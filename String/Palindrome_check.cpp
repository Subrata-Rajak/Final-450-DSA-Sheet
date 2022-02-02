#include <iostream>
using namespace std;

int checkPalindrome(string str);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        string str;
        cin >> str;

        int validation = checkPalindrome(str);

        if (validation == 1)
            cout << str << " is a palindrome" << endl;
        else if (validation == 0)
            cout << str << " is not a palindrome" << endl;
    }
    return 0;
}

int checkPalindrome(string str)
{
    int size = str.length();
    int left = 0, right = size - 1;

    while (left < right)
    {
        if (str[left] != str[right])
            return 0;

        left++;
        right--;
    }
    return 1;
}