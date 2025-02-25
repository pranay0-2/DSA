#include <iostream>

using namespace std;

// int fibonacci(int n ){
//     int a = 0;
//     int b = 1;
//     cout<<a<<" "<<b<<" ";

//     for(int i = 1; i <= n-2; i++){

//         int c = a+b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
//}



int update (int a ){

   int ans = a*a;
   return ans ;
}
int main(){

    // int n ;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // cout<<fibonacci(n);

    int a = 14;
    a = update(a);
    cout<<a<<endl;

       

return 0;

}