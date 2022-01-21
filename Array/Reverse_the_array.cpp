#include <iostream>
#include <algorithm>
using namespace std;

int *reverseIntegerArray(int integerArray[], int integerArraySize);
char *reverseCharArray(char charArray[], int charArraySize);

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int integerArraySize, charArraySize;
        cin >> integerArraySize >> charArraySize;

        int integerArray[integerArraySize];
        char charArray[charArraySize];

        for (int i = 0; i < integerArraySize; i++)
            cin >> integerArray[i];

        for (int i = 0; i < charArraySize; i++)
            cin >> charArray[i];

        reverseIntegerArray(integerArray, integerArraySize);
        reverseCharArray(charArray, charArraySize);

        for (int i = 0; i < integerArraySize; i++)
            cout << integerArray[i] << " ";

        cout << endl;

        for (int i = 0; i < charArraySize; i++)
            cout << charArray[i] << " ";

        cout << endl;
    }
    return 0;
}

int *reverseIntegerArray(int integerArray[], int integerArraySize)
{
    int first = 0, last = integerArraySize - 1;

    while (first < last)
    {
        swap(integerArray[first], integerArray[last]);
        first++;
        last--;
    }

    return integerArray;
}

char *reverseCharArray(char charArray[], int charArraySize)
{
    int first = 0, last = charArraySize - 1;

    while (first < last)
    {
        swap(charArray[first], charArray[last]);
        first++;
        last--;
    }

    return charArray;
}