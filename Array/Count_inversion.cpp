#include <iostream>
using namespace std;

int countInversion(int array[], int arraySize);

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

        int inversionCount = countInversion(array, arraySize);

        cout << inversionCount << endl;
    }

    return 0;
}

int countInversion(int array[], int arraySize)
{
    bool isIncremental = false, isDecremental = false;
    int countInversion = 0;

    if (array[0] > array[1])
        isDecremental = true;
    else if (array[0] < array[1])
        isIncremental = true;

    if (isIncremental)
    {
        for (int slowPointer = 0; slowPointer < arraySize; slowPointer++)
        {
            for (int fastPointer = slowPointer + 1; fastPointer <= arraySize - 1; fastPointer++)
                if (array[slowPointer] > array[fastPointer])
                    countInversion++;
        }
    }

    if (isDecremental)
    {
        for (int slowPointer = 0; slowPointer < arraySize; slowPointer++)
        {
            for (int fastPointer = slowPointer + 1; fastPointer <= arraySize - 1; fastPointer++)
                if (array[slowPointer] < array[fastPointer])
                    countInversion++;
        }
    }

    return countInversion;
}