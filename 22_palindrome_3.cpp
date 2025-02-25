#include <iostream>

using namespace std;

bool checkPalindrome(char a[] , int n ){
     int start = 0;
     int end = n-1;

     while(start<end){
        if(a[start] != a[end]){
            return 0;

        }
        else{
            start++;
            end--;
        }
     }
     return 1;

}


int getlength( char name[]) {
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}



int main(){


    char name[20];
    cout << "Enter your name: ";
    cin>>name;

    cout<<"Your name is " <<name<<endl;

    int len = getlength(name);

    //cout<<"Palindrome of Not : " <<checkPalindrome(name , len)<<endl;

    if(checkPalindrome(name , len)){
        cout<< name <<" is " << "Palindrome"<<endl;
    }
    else{
        cout<< name << " is" << " not " << " Palindrome "<<endl;
    }

 

  


      


return 0;

}