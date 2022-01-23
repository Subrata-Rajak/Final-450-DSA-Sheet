#include <iostream>
#include <algorithm>
using namespace std;

void mergeArrays(int array1[], int array1Size, int array2[], int array2Size);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int array1Size, array2Size;
        cin >> array1Size;

        int array1[array1Size];

        for (int index = 0; index < array1Size; index++)
            cin >> array1[index];

        cin >> array2Size;

        int array2[array2Size];

        for (int index = 0; index < array2Size; index++)
            cin >> array2[index];

        mergeArrays(array1, array1Size, array2, array2Size);

        for (int index = 0; index < array1Size; index++)
            cout << array1[index] << " ";

        for (int index = 0; index < array2Size; index++)
            cout << array2[index] << " ";

        cout << endl;
    }
    return 0;
}

void mergeArrays(int array1[], int array1Size, int array2[], int array2Size)
{
    for (int array2Index = 0; array2Index < array2Size; array2Index++)
    {
        for (int array1Index = 0; array1Index < array1Size; array1Index++)
        {
            if (array2[array2Index] < array1[array1Index])
                swap(array2[array2Index], array1[array1Index]);
        }
    }

    sort(array2, array2 + array2Size);
}