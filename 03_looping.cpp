#include <iostream>

using namespace std;

int main(){

int n ;
cout<<"Enter the value of n : ";
cin>>n;

// int i = 1;
// while(i<=n){
//     cout<<i<<" ";
//     i = i + 1;
// }
       

// SUM OF N NUMBERS 

// int i = 1 ;
// int sum = 0;
// while(i <= n ){
//     sum =sum+i;
//     i = i + 1;
// }

// cout<<"The value of sum is : " <<sum<<endl;
// return 0;


// SUM OF EVEN NUMBER 

// int i = 2;
// int sum = 0 ;
// if((i%2) == 0 ){
//     while (i<=n){
//         sum=sum+i;
//         i = i +2;
//     }
    
// }
// cout<<sum<<endl;


//  PRIME NUMBER 

  int num = 2;
  int sum = 0;
    while(num<n){
         if(n%num==0){
          cout<<"Not Prime for " << num <<endl;
          
        }
        else if(n%num!=0){
          cout<<"Prime for " << num <<endl;
          sum = sum + num ;
        }
      num = num + 1;
    }
    cout<<sum;
  


  // Patterns 

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout<<i;
  //     j = j + 1;
  //   }
  //   cout<<endl;
  //   i = i + 1;
  // }

 





  


}