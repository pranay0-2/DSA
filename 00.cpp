#include <iostream>

using namespace std;

void sort(int arr[] , int size ){

    int  low = 0;
    int middle = 0;
    int high = high - 1;

    while(middle<=high){

        switch (arr[middle])
        {

        case 0:
        swap(arr[low],arr[middle]);
        low++;
        middle++;
        break;

        case 1: 
        middle++;
        break;

        case 2: 
        swap(arr[middle] , arr [high]);
        high--;
        break;
        
        }
     

      }


}


void printArray(int arr[] , int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){


int arr[8] = { 0 , 1 , 2 , 0 , 0 , 1 , 1 ,2 };
int n = sizeof(arr) / sizeof(arr[0]);

printArray(arr,n);
sort(arr,8);
printArray(arr,n);
       

return 0;

}