#include <iostream>
using namespace std;

int findLargestSumOfContiguousSubarray(int array[], int arraySize);

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

        int largestSumOfContiguousSubArray = findLargestSumOfContiguousSubarray(array, arraySize);

        cout << "Largest Sum Of Contiguous SubArray: " << largestSumOfContiguousSubArray << endl;
    }
    return 0;
}

int findLargestSumOfContiguousSubarray(int array[], int arraySize)
{
    int currentSum = 0, largestSum = INT_MIN;

    for (int index = 0; index < arraySize; index++)
    {
        currentSum += array[index];

        if (currentSum > largestSum)
            largestSum = currentSum;
    }

    return largestSum;
}