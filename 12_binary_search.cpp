#include <iostream>

using namespace std;


int BinarySearch(int arr[] , int size , int key){
     
       int start = 0;
       int end = size-1;
       
       int mid =  start + (end - start)/2;

       while(start <= end){
           
            if(arr[mid] == key){
           
                    return mid;

            }
            
            // then go to right wala part 
            if(key > arr[mid]){
 
              start = mid + 1;  // start update hogaya 

            }
            
            // then go to left wala part
            if(key < arr[mid]){

                end = mid - 1;  // end update hogaya 
            }
         
            mid = start + (end - start)/2;  // isliye middle ko bhi update kar lo 
           
        }

         return -1;
}

int main(){

    int arrEven[6] = { 2,4,6,8,10,12};
    int  arrOdd[5] = { 3,5,7,9,11}; 
   
    int key ;
    cout<<"Enter the key for which you want index : " ; 
    cin>>key;


    int index  =  BinarySearch(arrEven , 6 , key);
    cout << "Index of " << key << " is " << index <<endl;

    
    // int index  =  BinarySearch(arrOdd , 6 , key);
    // cout << " Index of " << key << " is " << index <<endl;



return 0;

}