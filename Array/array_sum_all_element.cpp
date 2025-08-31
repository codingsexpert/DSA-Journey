#include <iostream>
using namespace std;

// Creating function for calculate the sum of all element in array 
int getsum(int arr[], int size)
{

    int sum = 0;

    for (int i = 0; i < size ; i++){
        sum += arr[i];

    }

    return sum ;
}

int main()
{

// question 2 Print the sum of all elements in array

    // Taking input  size of array
    int size;
    cin >> size;

    // Creating array
    int arr[50];

    for (int i = 0 ; i < size ; i++){
        cin >> arr[i];

    }

    // for (int i = 0; i < size; i++){
    //     cout << arr[i];
    // }


    cout  << " Sum of all elements in array  is : " << getsum(arr, size)  << endl; 
}