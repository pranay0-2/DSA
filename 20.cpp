// do array ko tisare array me dalna hai 

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[] , int m , int arr2[] , int n ){

    int i = 0;
    int j = 0; 
    int k = 0;
    while(i<n && j<m){
      
         if(arr1[i] < arr2[j]){
      //  arr1[i];
  //    return arr1[i];
         i++;
        // k++;
         }
    

         else{
            arr1[i] = arr2[j];
            j++;
          //  k++;
         }
    }

    // copy first array ke element ko 

    while(i<n){
        arr1[i] = arr2[i];
      //  k++;
        i++;
    }

    // copy second array ke element ko 

    while(j<m){
        arr1[i] = arr2[j];
     //   k++;
        j++;
    }

}


void print(int ans[] , int n ){
    for (int i=0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}


int main(){

      int arr1[5] = {1,3,5,7,9};
      int arr2[3] = {2,4,6};

    //  int arr3[8] = {0};

     //  merge(arr1 , 5 , arr2 , 3 , arr3);

   //   print(arr3 , 8);

   merge(arr1 , 5 , arr2, 3);
   print(arr1 , 5);

return 0;

}