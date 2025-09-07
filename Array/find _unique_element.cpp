#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // array size fix, change kar sakte ho
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements of the array: ";
    for(int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements in the array: ";
    for(int i = 0; i < SIZE; i++) {
        bool isUnique = true;
        for(int j = 0; j < SIZE; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false; // agar koi duplicate milta hai
                break;
            }
        }
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
