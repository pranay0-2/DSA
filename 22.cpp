// Char array and strings

#include <iostream>

using namespace std;

int getlength(char name[]){

  int count = 0;
  for(int i = 0; name[i]!=0; i++){
    count++;
  }
  return count;
}

int main(){
    char arr[10] = "Hello";

    // input in char array
    char name[20];
    cout << "Enter your name: ";
    cin>>name;

    cout<<"Your name is " <<name<<endl;

   cout<< "Lenght : "<< getlength(name);  // This fun. will give you the total length of your char array

  

return 0;

}