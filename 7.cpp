#include <iostream>

using namespace std;

void update(int arr[] , int size ){

       cout<<"Inside the functon : "<<endl;

       // Updating the first element of an array 
       arr[0] = 123;
       
       for(int i=0; i<size; i++){
              cout<<arr[i]<<" ";
       }
          cout<<endl;


          cout<<"Going back to main function : "<<endl;
       
}

int main(){
  
  int arr[3] = {1,3,5};

  update(arr,3);

  for(int i = 0; i<3; i++){
       cout<<arr[i]<<" ";
  }

  cout<<endl;

return 0;

}