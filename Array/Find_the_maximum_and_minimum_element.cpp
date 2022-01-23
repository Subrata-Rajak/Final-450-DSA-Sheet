#include <iostream>
using namespace std;

int findMaximumElement(int array[], int arraySize);
int findMinimumElement(int array[], int arraySize);

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

        int maximumElement = findMaximumElement(array, arraySize);
        int minimumElement = findMinimumElement(array, arraySize);

        cout << maximumElement << " " << minimumElement << endl;
    }
    return 0;
}

int findMaximumElement(int array[], int arraySize)
{
    int maximum = INT_MIN;

    for (int index = 0; index < arraySize; index++)
        if (array[index] > maximum)
            maximum = array[index];

    return maximum;
}

int findMinimumElement(int array[], int arraySize)
{
    int minimum = INT_MAX;

    for (int index = 0; index < arraySize; index++)
        if (array[index] < minimum)
            minimum = array[index];

    return minimum;
}