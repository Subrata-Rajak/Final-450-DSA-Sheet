#include <iostream>
#include <algorithm>
using namespace std;

int findKthMax(int array[], int arraySize, int maxPositionToFind);
int findKthMin(int array[], int arraySize, int minPositionToFind);

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

        int maxPositionToFind, minPositionToFind;
        cin >> maxPositionToFind >> minPositionToFind;

        int kthMax = findKthMax(array, arraySize, maxPositionToFind);
        int kthMin = findKthMin(array, arraySize, minPositionToFind);

        if (kthMax != 0 && kthMin != 0)
            cout << "kthMax: " << kthMax << endl
                 << "kthMin:" << kthMin << endl;
        else if (kthMax != 0 && kthMin == 0)
            cout << "kthMax: " << kthMax << endl
                 << "kthMin: Please give a valid position to find the kth minimum" << endl;
        else if (kthMax == 0 && kthMin != 0)
            cout << "kthMax: Please give a valid position to find the kth maximum" << endl
                 << "kthMin:" << kthMin << endl;
        else if (kthMax == 0 && kthMin == 0)
            cout << "Please give valid positions" << endl;
    }
    return 0;
}

int findKthMax(int array[], int arraySize, int maxPositionToFind)
{
    if (maxPositionToFind > arraySize || maxPositionToFind < 0)
        return 0;

    sort(array, array + arraySize);
    return array[arraySize - maxPositionToFind];
}

int findKthMin(int array[], int arraySize, int minPositionToFind)
{
    if (minPositionToFind > arraySize || minPositionToFind < 0)
        return 0;

    sort(array, array + arraySize);
    return array[minPositionToFind - 1];
}