#include <iostream>
using namespace std;

void sideAllNegatives(int array[], int arraySize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize;
        cin >> arraySize;

        int array[arraySize];

        for (int index = 0; index < arraySize; index++)
            cin >> array[index];

        sideAllNegatives(array, arraySize);

        for (int index = 0; index < arraySize; index++)
            cout << array[index] << " ";

        cout << endl;
    }
    return 0;
}

void sideAllNegatives(int array[], int arraySize)
{
    int start = 0, end = arraySize - 1;

    while (start < end)
    {
        if (array[start] < 0 && array[end] >= 0)
        {
            swap(array[start], array[end]);
            start++;
            end--;
        }
        else if (array[start] >= 0 && array[end] < 0)
        {
            start++;
            end--;
        }
        else if (array[start] >= 0 && array[end] >= 0)
            start++;
        else if (array[start] < 0 && array[end] < 0)
            end--;
    }
}