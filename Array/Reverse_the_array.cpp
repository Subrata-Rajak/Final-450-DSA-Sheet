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

        for (int index = 0; index < integerArraySize; index++)
            cin >> integerArray[index];

        for (int index = 0; index < charArraySize; index++)
            cin >> charArray[index];

        reverseIntegerArray(integerArray, integerArraySize);
        reverseCharArray(charArray, charArraySize);

        for (int index = 0; index < integerArraySize; index++)
            cout << integerArray[index] << " ";

        cout << endl;

        for (int index = 0; index < charArraySize; index++)
            cout << charArray[index] << " ";

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