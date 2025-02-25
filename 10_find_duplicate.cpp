#include <iostream>

using namespace std;

int main()
{

    // int arr[] = {1, 2, 1, 3, 5, 2, 1};

    // for (int i = 0; i < 7; i++)
    // {

    //     for (int j = i + 1; j < 7; j++)
    //     {
    //            if(arr[i] == arr[j])  
            
    //             cout<<arr[i];
            
    //     }
    // }




      int arr[] = {1, 2, 3, 5, 2, 1};  
      
        //Searches for duplicate element  
        for(int i = 0; i < 6; i++) {  
            for(int j = i + 1; j < 6; j++) {  
                if(arr[i] == arr[j])  
                   cout<<arr[j]; 
            }  
        }  

    return 0;
}