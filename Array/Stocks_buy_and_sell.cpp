// Naive Approach [Time - O(n^2), Space - O(1)]

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findTheMaxProfit(int array[], int arraySize);

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

        int maxProfit = findTheMaxProfit(array, arraySize);

        cout << maxProfit << endl;
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

int findTheMaxProfit(int array[], int arraySize)
{
    int currentProfit = 0, maxProfit = INT_MIN;

    for (int firstPointer = 0; firstPointer < arraySize; firstPointer++)
    {
        for (int secondPointer = (firstPointer + 1); secondPointer < arraySize; secondPointer++)
        {
            currentProfit = array[secondPointer] - array[firstPointer];

            maxProfit = currentProfit > maxProfit ? currentProfit : maxProfit;
        }
    }

    return maxProfit;
}

// More Optimized Approach [Time - O(n), Space - O(n)]

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findTheMaxProfit(int array[], int arraySize);

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

        int maxProfit = findTheMaxProfit(array, arraySize);

        cout << maxProfit << endl;
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

int findTheMaxProfit(int array[], int arraySize)
{
    int maxStockSoFar = 0;
    int tempArray[arraySize] = {0};

    for (int index = arraySize - 1; index >= 0; index--)
    {
        tempArray[index] = maxStockSoFar > array[index] ? maxStockSoFar : array[index];
        maxStockSoFar = tempArray[index];
    }

    int currentprofit = 0, maxProfit = INT_MIN;

    for (int index = 0; index < arraySize; index++)
    {
        currentprofit = tempArray[index] - array[index];
        maxProfit = currentprofit < maxProfit ? maxProfit : currentprofit;
    }
    return maxProfit;
}

// More Optimized Approach [Time - O(n), Space - O(1)]

#include <iostream>
using namespace std;

void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);
int findTheMaxProfit(int array[], int arraySize);

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

        int maxProfit = findTheMaxProfit(array, arraySize);

        cout << maxProfit << endl;
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

int findTheMaxProfit(int array[], int arraySize)
{
    int minStockSoFar = INT_MAX, maxProfit = INT_MIN, currentProfit = 0;

    for (int index = 0; index < arraySize; index++)
    {
        if (array[index] < minStockSoFar)
            minStockSoFar = array[index];

        currentProfit = abs(minStockSoFar - array[index]);

        maxProfit = maxProfit > currentProfit ? maxProfit : currentProfit;
    }

    return maxProfit;
}