#include <iostream>

using namespace std;

int main(){

       int n;
       cout<<"Enter the value of n : "<<endl;
       cin>>n;

    // cout<<"Printing count from 1 to n "<<endl;
    
    // for(int i = 1;i<=n;i++){
    //     cout<<i;   
    // }
    // cout<<endl;



    // Sum of numbers from 1 to n 

    // int sum = 0;
    // for(int i = 1; i<=n; i++){
    //     sum = sum+i;
    // }
    //     cout<<sum;
   
    

   // fibonacci series 

    int a = 0 ;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i = 1; i<=n; i++)
    {
       
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;

    }



    
    // Prime Number 

    // for(int i = 2; i<=(n-1); i++){
    //     if(n%i==0){
    //         cout<<"Not a prime number"<<endl;
    //         break;
    //     }
    //     else if(n%i!= 0){
    //         cout<<"Prime";  
    //     }
    //     break;






    //  int isprime = 1;
    //  for(int i = 2; i<n; i++){
         
    //      if(n%i==0){
    //       isprime = 0;
    //       break;
    //      }
    // }

    // if(isprime==0){
    //     cout<<"NOT PRIME";
    // }
    // else{
    //     cout<<"PRIME";
    // }





    

    // CONTINUE 

    // for(int i=0; i<5; i++){
    //     cout<<"I " ;
    //     cout<<"LOVE" <<endl;
    //     continue;
    //     cout<<"YOU" <<endl;
    // }




return 0;

}