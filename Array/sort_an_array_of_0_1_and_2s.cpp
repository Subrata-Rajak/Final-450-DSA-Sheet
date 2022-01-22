#include <iostream>
using namespace std;

void sortArray(int array[], int arraySize);

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

        sortArray(array, arraySize);

        for (int index = 0; index < arraySize; index++)
            cout << array[index] << " ";

        cout << endl;
    }
    return 0;
}

void sortArray(int array[], int arraySize)
{
    int counterOfZero = 0, counterOfOne = 0, counterOfTwo = 0;

    for (int index = 0; index < arraySize; index++)
    {
        if (array[index] == 0)
            counterOfZero++;
        else if (array[index] == 1)
            counterOfOne++;
        else if (array[index] == 2)
            counterOfTwo++;
    }

    for (int index = 0; index < counterOfZero; index++)
        array[index] = 0;
    for (int index = counterOfZero; index < (counterOfZero + counterOfOne); index++)
        array[index] = 1;
    for (int index = (counterOfZero + counterOfOne); index < arraySize; index++)
        array[index] = 2;
}