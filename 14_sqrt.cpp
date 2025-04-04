#include <iostream>

using namespace std;


long long int sqrtInteger(int n ){


    int start = 0;
    int end   = n;
    long long int mid = start + (end  - start)/2;

   long long int ans = -1;

    while(start <= end){

        long long int square = mid*mid;


        if(square == n){
            return mid;
        } 

        if(square < n){
            ans = mid;
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid  = start + (end - start)/2;
    }
    return ans;

}


double morePrecision(int n  , int precision , int part1){

   double factor = 1;
   double ans = part1;

   for( int  i = 0 ; i < precision ; i++){

        factor = factor/10;

        for(double j = ans ; j*j < n; j = j+factor ){
            ans = j;
    
        }

   }
   return ans ;

}


int main(){

       int n;
       cout<<"Enter the number : ";
       cin>>n;

       int part1 = sqrtInteger(n);
       cout<<"Answer is  : " <<morePrecision(n , 4 , part1); // 

return 0;

}