// Switch case 

#include <iostream>

using namespace std;


int main(){

int num = 2;
int ch = 'p';

switch(num){

    case 1 : 
    cout<<"First"<<endl;
    break; 

    case 2 : 
    cout<<"Second"<<endl; // ye print hoga kuki num and case same hai isiliye 
               switch(ch){  // You can use switch inside a switch case 

                case 'p': 
                cout<<"The value of ch is " <<ch<<endl; // no worry ye bus ascii value de ga 
                break;
               }
    break;

    default:
    cout<<" It is default case : "<<endl;
}




// Simple Calculator Using Switch Case : 

float  a ;
float  b ;
       cout<<"Enter the value of a : ";
       cin>>a;

       cout<<"Enter the value of b : ";
       cin>>b;

       char operation;
       cout<<"Enter the operation you want to perform : ";
       cin>>operation;

       switch (operation){

        case '+': 
        cout<<"Sum of "<< a <<" and " << b <<" is "<<(a+b)<<endl;
        break;

        case '-': 
        cout<<"Subtraction of "<< a <<" and " << b <<" is "<<(a-b)<<endl;
        break;

        case '*': 
        cout<<"Multiplication of "<< a <<" and " << b <<" is "<<(a*b)<<endl;
        break;

        case '/': 
        cout<<"Division of "<< a <<" and " << b <<" is "<<(a/b)<<endl;
        break;
       }



      


return 0;

}