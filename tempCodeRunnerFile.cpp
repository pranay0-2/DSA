#include <iostream>

using namespace std;

int main(){

    //    int arr[7] = {1,2,1,3,5,2,1};
           int arr[2] = {3 ,4};
                  bool found;
       int pranay;
       for(int i = 0; i < 7; i++)
       {
         int pranay = arr[i];

         for(int j = 0; j < arr[i]; j++){
            if(arr[j] == pranay){
                       found = 1;
            }
         }
       }

       if(found==1){
        cout<<"Found "<<pranay<<endl;
       }

return 0;

}