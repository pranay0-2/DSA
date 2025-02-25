#include <iostream>

using namespace std;

int main(){

       int arr1[] = {1,3,4,5};
       int arr2[] = {1,3,7};
       int arr3;

       for(int i=0; i<4; i++)
       {
        for(int j=0; j<3; j++){
                   if(arr1[i]==arr2[j]){
                          arr3= arr1[i];
                   }
        }
       }

       return arr3;
       cout<<arr3<<endl;

return 0;

}