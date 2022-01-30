#include <iostream>
#include <vector>
using namespace std;

void findCommon(int array1[], int array2[], int array3[], int array1Size, int array2Size, int array3Size);
void takeArrayInput(int array[], int arraySize);
void printArray(int array[], int arraySize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int array1Size, array2Size, array3Size;
        cin >> array1Size >> array2Size >> array3Size;

        int array1[array1Size];
        int array2[array2Size];
        int array3[array3Size];

        takeArrayInput(array1, array1Size);
        takeArrayInput(array2, array2Size);
        takeArrayInput(array3, array3Size);

        findCommon(array1, array2, array3, array1Size, array2Size, array3Size);
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

void findCommon(int array1[], int array2[], int array3[], int array1Size, int array2Size, int array3Size)
{
    int i = 0, j = 0, k = 0;

    while (i < array1Size && j < array2Size && k < array3Size)
    {
        if (array1[i] == array2[j] && array2[j] == array3[k])
        {
            cout << array1[i] << " ";
            i++;
            j++;
            k++;
        }

        else if (array1[i] < array2[j])
            i++;

        else if (array2[j] < array3[k])
            j++;

        else
            k++;
    }
}