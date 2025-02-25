// check palindrome 
// Par case sensitive nhi hona chahiye 
// matlab  capital , small ki wajah se mat bol dena ki wo palindrome nhi hai 


#include <iostream>

using namespace std;

// ye function Capital ko small me convert kar dega 
char Capital_to_lowerCase(char ch){  
    if(ch >='a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch + 32;
        return temp;
    }
}


// This function is just for understanding

// ye function Small ko Capital me convert kar dega 
// char Lower_to_upperCase(char ch){  
//     if(ch >='A' && ch <= 'Z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 32;
//         return temp;
//     }
// }


bool checkPalindrome(char a[] , int n ){
     int start = 0;
     int end = n-1;

     while(start<end){
        if( Capital_to_lowerCase(a[start])!= Capital_to_lowerCase(a[end])){
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

    cout<<" Character is : " <<Capital_to_lowerCase('A')<<endl;
   
 

  


      


return 0;

}