#include <iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start <= end){

        swap(arr[start], arr[end]);
        start ++;
        end --;
    }


}
void printArray(int arr[],int size){

    for(int i =0; i<size; i++){
        cout << arr[i] << " ";

    }

    cout << endl;
}





int main(){



int arr[8]= {10,20,30,40,50,60,70,80};
int arr2[5]= { 50,60,70,80,100};


reverse (arr,8);
reverse (arr2,5);

printArray(arr,8);
printArray(arr2,5);


}