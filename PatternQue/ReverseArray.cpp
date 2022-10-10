#include <iostream>
using namespace std;

void reverse ( int arr[] , int n)
{
    int start =0;
    int end= n-1;
    while ( start <= end)
    {
        swap ( arr[ start ], arr[ end ] );
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1,4,0,-2,15,17};
    int arr1[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(arr1, 5);

    printArray(arr, 6);
    printArray(arr1, 5);
}