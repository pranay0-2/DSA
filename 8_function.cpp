#include <iostream>

using namespace std;

int power(int a , int b ){
       
       int ans = 1 ;
    for(int i = 1 ; i <= b ; i++){
             
             ans = ans * a;
       
    }
    return ans;
}


int main(){

// Power of (a,b)

int a , b ;

cout<<"Enter the value of a and b : ";
cin >>a >> b;


cout<<"The power of a and b is " <<power(a,b)<<endl;





return 0;

}