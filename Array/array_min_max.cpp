#include <iostream>
using namespace std;

// creating function for find maximum value 

int max ( int arr[],int  size){

    int max = INT_MIN ;

    for (int i = 0 ; i <size ; i++){
        if ( arr[i] > max ){
            max = arr[i];
        }
    }

    return max ;
}


// Creating function for  find minimum value

int min(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main(){



// 1. Question  find the maximum value of array element


// size of the array using input
int size ;
cin >> size;


//creating the arry

int arr[50];

for (int i =0; i < size ; i++){
    cin >> arr[i];

}


for (int i = 0 ; i < size ; i++){
    cout << arr[i] << endl;
}

 // printing function
cout <<  " Maximum value is "<<  max ( arr , size) << endl;

cout << " Minimum value is " << min(arr, size) << endl;

}