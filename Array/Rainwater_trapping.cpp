#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int trappedRainWater(int array[], int arraySize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int arraySize;
        cin >> arraySize;

        int array[arraySize];
        takeArrayInput(array, arraySize);

        int trappedWater = trappedRainWater(array, arraySize);
        cout << trappedWater << endl;
    }
    return 0;
}

void takeArrayInput(int array[], int arraySize)
{
    for (int index = 0; index < arraySize; index++)
        cin >> array[index];
}

void printArray(int array[], int arraySize)
{
    for (int index = 0; index < arraySize; index++)
        cout << array[index] << " ";

    cout << endl;
}

int trappedRainWater(int array[], int arraySize)
{
    int leftArray[arraySize];
    int rightArray[arraySize];

    leftArray[0] = array[0];
    for (int index = 1; index < arraySize; index++)
        leftArray[index] = max(leftArray[index - 1], array[index]);

    rightArray[arraySize - 1] = array[arraySize - 1];
    for (int index = arraySize - 2; index >= 0; index--)
        rightArray[index] = max(rightArray[index + 1], array[index]);

    int trappedWater = 0;
    for (int index = 0; index < arraySize; index++)
        trappedWater += min(leftArray[index], rightArray[index]) - array[index];

    return trappedWater;
}