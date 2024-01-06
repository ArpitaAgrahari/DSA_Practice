#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int rotatedArray(int arr[], int size)
{
    //arr = 1 2 3 4 5 6
    //      0 1 2 3 4 5
    int fir[size / 2];// fir 1 2 3
    int sec[size / 2];
    int i;
    for (i = 0; i < size / 2; ++i)
    {
        fir[i] = arr[i];
    }
    int temp = i;
    for (i = 0; i < size / 2; ++i)
    {
        sec[i] = arr[temp + i];// 4 5 6
    }

    i = 0;
    for (; i < size / 2; i++)
    {
        arr[i] = sec[i];
    }
    temp = i;
    for (; i < size; i++)
    {
        arr[i] = fir[i - temp];
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    cout << endl;
    rotatedArray(arr, 6);
    cout << "Rotated Array is:";
    printArray(arr, 6);
}