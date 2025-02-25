#include <iostream>

using namespace std;

int getPivot(int arr[] , int n ){
        
         int start = 0;
         int end   = n-1;
         int middle = start + (end - start)/2;

         while(start < end ){

         if(arr[middle] >= arr[0] ){
              
                  start = middle + 1;

         }

         else {

                 end = middle; 
         }
               middle = start + (end - start)/2;
         }

         return start;
}

int main(){

       
       int arr[5] = {7,9,1,2,3};

       cout<<" Pivot at " << getPivot(arr , 5) << " index";  // ye pivot element ke index ka number dega



return 0;

}


  // agar aisa hota hai to second student pe aa jao
     // ab student badaya hai to uske liye pageSum kya hoga ;
