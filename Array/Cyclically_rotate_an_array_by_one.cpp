#include <iostream>
using namespace std;

void rotateArrayByOne(int array[], int arraySize);

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

        rotateArrayByOne(array, arraySize);

        for (int index = 0; index < arraySize; index++)
            cout << array[index] << " ";

        cout << endl;
    }
    return 0;
}

void rotateArrayByOne(int array[], int arraySize)
{
    int lastPositionData = array[arraySize - 1];

    for (int index = arraySize - 1; index >= 0; index--)
        array[index] = array[index - 1];

    array[0] = lastPositionData;
}