#include <iostream>

using namespace std;


bool search(int arr[] , int size , int key ){

    for(int i = 0  ; i < size ; i++){
        if (arr[i] == key){
            return 1;
        }
    }
    return 0; 

};

int main(){

       // Wheather 1 is present in it or not 
       int arr[10] = { 5,3,5,-4,0,-2,22,1};

       int key;
       cout<<"Enter the element to search for : " <<endl;
       cin>>key;

       bool found = search(arr, 10 , key);

       if(found){
        cout<<"Key is present " <<endl;
       }
       else{
        cout<<"Key is not present " <<endl;
       }



return 0;

}