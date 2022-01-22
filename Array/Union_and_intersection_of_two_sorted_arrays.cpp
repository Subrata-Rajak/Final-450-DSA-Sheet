#include <iostream>
#include <set>
using namespace std;

int findUnionArrayLength(int array1[], int array1Size, int array2[], int array2Size);
int findIntersectionArrayLength(int array1[], int array1Size, int array2[], int array2Size);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int array1Size, array2Size;
        cin >> array1Size >> array2Size;

        int array1[array1Size];
        int array2[array2Size];

        for (int index = 0; index < array1Size; index++)
            cin >> array1[index];
        for (int index = 0; index < array2Size; index++)
            cin >> array2[index];

        int unionArrayLength = findUnionArrayLength(array1, array1Size, array2, array2Size);
        int intersectionArrayLength = findIntersectionArrayLength(array1, array1Size, array2, array2Size);

        cout << "UnionArrayLength: " << unionArrayLength << endl
             << "IntersectionArrayLength: " << intersectionArrayLength << endl;
    }
    return 0;
}

int findUnionArrayLength(int array1[], int array1Size, int array2[], int array2Size)
{
    set<int, greater<int>> resultantsSet;

    for (int index = 0; index < array1Size; index++)
        resultantsSet.insert(array1[index]);

    for (int index = 0; index < array2Size; index++)
        resultantsSet.insert(array2[index]);

    return resultantsSet.size();
}

int findIntersectionArrayLength(int array1[], int array1Size, int array2[], int array2Size)
{
    int intersectionArrayLength = 0;
    for (int array1Index = 0; array1Index < array1Size; array1Index++)
    {
        for (int array2Index = 0; array2Index < array2Size; array2Index++)
        {
            if (array1[array1Index] == array2[array2Index])
                intersectionArrayLength++;
        }
    }

    return intersectionArrayLength;
}