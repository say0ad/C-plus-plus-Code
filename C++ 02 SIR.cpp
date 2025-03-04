#include <bits/stdc++.h>
using namespace std;

void makeAllEntryZerro(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        arr[i] = 0;
    }

}

void printArrayEntry(int arr[], int start, int end)
{
    for(int i = start; i<=end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void deleteArrayEntry(int arr[], int pos, int size)
{
    for(int i = pos; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

void updateArrayEntry(int arr[], int pos, int newValue)
{
    arr[pos] = newValue;
}

int main() {

    int A[100];

    makeAllEntryZerro(A, 100);

    A[0] = 5;
    A[1] = 7;
    A[2] = 9;
    A[3] = 3;
    A[4] = 2;
    A[5] = 1;
    A[6] = 10;

    printArrayEntry(A, 0, 6);
    deleteArrayEntry(A, 2, 100);
    printArrayEntry(A, 0, 6);
    updateArrayEntry(A, 6, 115);
    printArrayEntry(A, 0, 6);

    return 0;
}
