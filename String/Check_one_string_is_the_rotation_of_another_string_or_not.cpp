#include <iostream>
using namespace std;

bool rotationCheck(string str1, string str2);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        if (rotationCheck(str1, str2))
            cout << str1 << " is the rotation of " << str2 << endl;
        else
            cout << str1 << " is not the rotation of " << str2 << endl;
    }
    return 0;
}

bool rotationCheck(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    string tempString = str1 + str1;
    return (tempString.find(str2) != string::npos);
}