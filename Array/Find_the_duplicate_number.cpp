#include <iostream>
using namespace std;

int catchDuplicate(int array[], int arraySize);

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

        int duplicate = catchDuplicate(array, arraySize);
        cout << duplicate << endl;
    }
    return 0;
}

int catchDuplicate(int array[], int arraySize)
{
    int frequencyArray[arraySize - 1] = {0};

    for (int index = 0; index < arraySize; index++)
        frequencyArray[array[index]]++;

    int duplicate;

    for (int index = 0; index < (arraySize - 1); index++)
        if (frequencyArray[index] == 2)
            duplicate = index;

    return duplicate;
}