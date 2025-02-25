// Reverse an array 

#include <iostream>

using namespace std;

void reverse(int arr[] , int size  ){

      int start = 0;
      int end = size-1;

      while(start<=end){

        swap(arr[start] , arr[end]);
        start++;
        end--;
      }


}


void printArray(int arr[] , int size){

for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){

       int arrOdd[5] = {1,2,3,4,5};
       int arrEven[6] = {-4,6,3,-8,0,1};

  
      reverse(arrOdd , 5);
      printArray(arrOdd,5);


      reverse(arrEven, 6);
      printArray(arrEven,6);



return 0;

}