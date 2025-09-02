#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void swapalt(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 60};
    int arr2[5] = {1, 2, 3, 4, 5};

    swapalt(arr, 6);
    swapalt(arr2, 5);

    printarray(arr, 6);
    printarray(arr2, 5);

    return 0;
}