#include <iostream>
using namespace std;

int findPairsCountWithGivenSum(int array[], int arraySize, int targetsum);

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

        int targetSum;
        cin >> targetSum;

        int pairsCount = findPairsCountWithGivenSum(array, arraySize, targetSum);

        if (pairsCount == 0)
            cout << "No Pairs available with given sum" << endl;
        else
            cout << pairsCount << endl;
    }
    return 0;
}

int findPairsCountWithGivenSum(int array[], int arraySize, int targetSum)
{
    int pairsCount = 0;

    for (int slowPointer = 0; slowPointer < arraySize; slowPointer++)
    {
        for (int fastPointer = slowPointer + 1; fastPointer <= arraySize - 1; fastPointer++)
        {
            if ((array[slowPointer] + array[fastPointer]) == targetSum)
                pairsCount++;
        }
    }

    return pairsCount;
}