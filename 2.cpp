#include <iostream>

using namespace std;

int main() {
    // int size ; 
    // cout<<"Enter the size of array  : ";
    // cin>>size;

    // int value ; 
    // cout<<"Enter the value you want to enter in array  : ";
    // cin>>value ;

    // int arr[size];


    // for (int i = 0; i < size; i++) {
    //    arr[i] = value;
    // }

    
    // for (int i = 0; i < size; i++) {
    //   cout << arr[i] << " ";
    // }



//     while(true)
// {
// int n ;
//     cin>> n;
//     if(n == 999)
//           break;
//     switch(n)
//     {
//         case 1:
//             {
//                 cout<<"Pranay";
//             }
//         case 2: 
//             {
//                 cout<<"Singh";
//             }
//      }
// }





// int num = 1330;
// int digit = 0; 
// int lauda = 0;


// switch(num!=0){

//     case 100: 
//     lauda = num/100;
//     digit = num%100;
//     cout<<" You require " << lauda << " 100 rupees notes "<<endl;

//     case 50: 
//     lauda = digit/50;
//     digit = digit%50;
//     cout<<" Your require " << lauda <<" 50 rupees notes " <<endl;

//     case 20: 
//     lauda = digit/20;
//     digit = digit%20;
//     cout<<" You require " << lauda << " 20 rupees notes " <<endl;

//     case 10: 
//     lauda = digit/10;
//     digit = digit%10;
//     cout<<" You require " << lauda << " 10 rupees notes " <<endl;

     
// }

int n = 15;
int ans = 0;
int i = 0;
while(n!=0){

    int digit  = n&1;
    if(digit == 1){
        ans = ans + digit;
    }
    n = n>>1;
    i++;
}
cout<<ans ;









    return 0;
}
