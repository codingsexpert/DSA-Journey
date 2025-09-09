#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 5, 7, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; // break to avoid printing same duplicate multiple times
            }
        }
    }

    return 0;
}