#include <iostream>
using namespace std;


// Creating function for find value present or not in a array this will return value in true and false 
bool search( int arr[], int size, int key){

  

    for(int i = 0 ; i <size ; i++){
        if(arr[i] == key){
            return 1;
        }

}

return 0 ; 
}



int main(){


    // Creating array
    int arr[20]= {10, 20, 30, 40, 50, 1, 3, 5, 6, 7, -5};

 

    cout << "Enter the key for search : " ;
    int key;
    cin >> key;

//calling to array and store value in found variable 
    bool found = search(arr , 20, key);

    if(found){
        cout << "Key is present in Array !" << endl;
    }

    else{
        cout << "Key is not present in array !" << endl;
    }




    
}