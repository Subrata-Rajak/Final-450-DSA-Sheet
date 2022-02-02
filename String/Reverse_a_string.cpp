#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> takeVectorInput(vector<char> vec, int vectorSize);
void printVector(vector<char> vec, int vectorSize);
void reverseAVectorUsingSTL(vector<char> &vec);
void reverseAVectorWithoutUsingSTL(vector<char> &vec, int vectorSize);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int vectorSize;
        cin >> vectorSize;

        vector<char> vec;
        vec = takeVectorInput(vec, vectorSize);

        cout << "Original String: ";
        printVector(vec, vectorSize);

        reverseAVectorUsingSTL(vec);
        cout << "Reverse Using STL: ";
        printVector(vec, vectorSize);

        reverseAVectorWithoutUsingSTL(vec, vectorSize);
        cout << "Reverse Without Using STL: ";
        printVector(vec, vectorSize);
    }
    return 0;
}

vector<char> takeVectorInput(vector<char> vec, int vectorSize)
{
    for (int index = 0; index < vectorSize; index++)
    {
        char num;
        cin >> num;
        vec.push_back(num);
    }
    return vec;
}

void printVector(vector<char> vec, int vectorSize)
{
    for (auto index = vec.begin(); index != vec.end(); index++)
        cout << *index << " ";

    cout << endl;
}

void reverseAVectorUsingSTL(vector<char> &vec)
{
    reverse(vec.begin(), vec.end());
}

void reverseAVectorWithoutUsingSTL(vector<char> &vec, int vectorSize)
{
    int left = 0, right = vectorSize - 1;

    while (left < right)
    {
        swap(vec[left], vec[right]);
        left++;
        right--;
    }
}