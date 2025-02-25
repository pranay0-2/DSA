#include <iostream>

using namespace std;

int main(){
   int n;
   cout<<"Enter the value of n ";
   cin>>n;
    //    int i = 1;
    //    while(i<=n){
           
    //        int j = 1;
    //        while(j<=n){
    //         cout<<j;
    //         j=j+1;
    //        }
    //        cout<<endl;
    //        i=i+1;
    //    }


    //    int i = 1;
    //    while(i<=n){
           
    //        int j = 1;
    //        while(j<=n){
    //         cout<<(n-i+1);
    //         j=j+1;
    //        }
    //        cout<<endl;
    //        i=i+1;
    //    }




    
    //    int i = 1;
    //    int count = 1;
    //    while(i<=n){
           
    //        int j = 1;
    //        while(j<=n){
    //         cout<<count;
    //         count++;
    //         j=j+1;
    //        }
    //        cout<<endl;
    //        i=i+1;
    //    }





//  int i = 1;
     
//        while(i<=n){
           
//            int j = 1;
//            while(j<=i){
//             cout<<"*";
//             j=j+1;
//            }
//            cout<<endl;
//            i=i+1;
//        }





// int i = 1;
     
//        while(i<=n){
           
//            int j = 1;
//            while(j<=i){
//             cout<<i;
//             j=j+1;
//            }
//            cout<<endl;
//            i=i+1;
//        }





// int row = 1;
// int count = 1 ;
     
//        while(row<=n){
           
//            int column = 1;
//            while(column<=row){
//             cout<<count;
//             count++;
//             column=column+1;
//          //  cout<<",";
//            }
//            cout<<endl;
//            row=row+1;
//        }





// int row = 1 ;

// while(row<=n){

//   int column = 1;

//   while(column<=row){
//     cout<<(row-column+1)<<" ";
//     column++;
//   }
//   cout<<endl;
//   row = row+1;
// }





// int i = 1;
// while (i<=n)
// {
//   int j = 1;
//   while(j<=n){
//     char ch = ('A' + i - 1);
//     cout<< ch ;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }





// int i = 1;
// while (i<=n)
// {
//   int j = 1;
//   while(j<=n){
//     char ch = ('A' + j - 1);
//     cout<< ch ;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }






// int i = 1;
// int count = 1;
// while (i<=n)
// {
//   int j = 1;
//   while(j<=n){
//     char ch = ('A' + count  - 1);
//     cout<< ch;
//     count++;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }








// int i = 1;
// char start = 'A';
// while (i<=n)
// {
//   int j = 1;
//   while(j<=n){
    
//     cout<< start;
//     start++;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }






// int i = 1;
// while (i<=n)
// {

//   int j = 1;
//   while(j<=n){
    
//     char ch = 'A' + i + j - 2;
//     cout<<ch;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }




// int i = 1;
// while (i<=n)
// {

//   int j = 1;
//   while(j<=i){
    
//     char ch = 'A' + i - 1;
//     cout<<ch;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }





// int i = 1;
// char start = 'A';
// while (i<=n)
// {

//   int j = 1;
//   while(j<=i){
    
//     cout<<start;
//     start++;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }







// int i = 1;
// while (i<=n)
// {

//   int j = 1;
//   while(j<=i){
//   char ch = ('A' + i + j - 2);
//   cout<< ch ; 
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }







// int i = 1;
// while (i<=n)
// {

//   int j = 1;
//   char ch = ('A' + n - i);

//   while(j<=i){
//   cout<< ch ; 
//   ch++;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }








// int i = 1;
// while (i<=n)
// {

//   int j = 1;
//   char ch = ('A' + i - 1);   // first element of each row and then increment it 

//   while(j<=n){
//   cout<< ch ; 
//   ch++;
//     j = j + 1 ;

//   }
//   cout<<endl;
//   i = i + 1 ;
// }





// int row = 1;
// while (row<=n)
// {

//   int spaces  = n - row;
//   while(spaces){
//     cout<<" ";
//     spaces--;
//   }
    
//     int column = 1;
//   while(column<=row){
//   cout<< " * "; 
//   column++;
//   }
//   cout<<endl;
//   row++;
// }








// int row = 1;
// while (row<=n)
// {  
//     int column = 1;
//   while(column<=(5-row)){
//   cout<< " * "; 
//   column = column+1;
//   }
//   cout<<endl;
//   row = row+1;
// }










// int row = 1;
// while (row<=n)
// {

//   int spaces  = 0 ;
//   while(spaces <= row){
//     cout<<" ";
//     spaces++;
//   }
    
//     int column = 1;
//   while(column<=(n-row)){
//   cout<< " * "; 
//   column++;
//   }
//   cout<<endl;
//   row++;

// }








// int row = 1 ;
// //int count = 1;
// while(row<=n){

//   int space = n - row;
// while(space){
//   cout<<" ";
//   space--;
// }
//   int column = 1;
//   while(column <= row){
//    cout<<"*";
//     column++;
//   }
//   cout<<endl;
//   row++;


// }







// int row = 1 ;

// while(row<=n){

//   int space = n - row;
// while(space){
//   cout<<" ";
//   space--;
// }
//   int column = 1;
//   while(column <= row){
//    cout<<row;
//     column++;
//   }
//   cout<<endl;
//   row++;
// }







// int row = 1 ;

// //int count = 1;
// while(row<=n){
  
//   int space = 1 ;
// while(space < row  ){
//   cout<<" ";
//   space++;
// }
//   int column = 1;
//   while(column <= (n-row+1)){
//    cout<<"*";
//     column++;
//   }
//   cout<<endl;
//   row++;


// }









// int row = 1 ;

// while(row<=n){
  
//   int space = 1 ;
// while(space < row  ){
//   cout<<" ";
//   space++;
// }
//   int column = 1;
//   while(column <= (n-row+1)){
//    cout<<row;
//     column++;
//   }
//   cout<<endl;
//   row++;


// }










// int row = 1 ;

// while(row<=n){
  
//   int space = 1 ;
//   while(space < row  ){
//   cout<<" ";
//   space++;
// }
//   int count = row ;
//   int column = 1;
//   while(column <= (n-row+1)){
//    cout<<count++;
//     column++;
//   }
//   cout<<endl;
//   row++;
// }







// int row = 1 ;
// int count = row ;

// while(row<=n){
  
//   int space = n - row  ;
//   while(space  ){
//   cout<<" ";
//   space--;
// }
//   int column = 1;
//   while(column <= row ){
//    cout<<count;
//    count++;
//     column++;
//   }
//   cout<<endl;
//   row++;
//}









// int row = 1;
// while (row<=n)
// {

//   int spaces  = (n - row);
//   while(spaces){
//     cout<<" ";
//     spaces--;
//   }
    
//    int column = 1;
//    int count = column;
//    while(column <= row){
//     cout<<count;
//     count++;
//     column++;
//    }


//    int start = row - 1;
//    while(start){
//     cout<<start;
//     start--;
//    }
   
//    cout<<endl;
//    row++;



//}






int i = 1;
while(i<=n){

  int j = 1;
  int count = j;
  while(j<=(n-i+1)){
    cout<<count;
    count++;
    j++;
  }


  int c = 1;
  while(c<=(i-1)){
    cout<<"*";
    c++;
  }

  int d = 1;
  while(d<=(i-1)){
    cout<<"*";
    d++;
  }


  // int e = 1;
 
  // while(e<=(n-i+1))
  // {
  //   cout<<e;
 
  //   e--;
  // }
        
  // cout<<endl;
  // i++;




   
}

// 5 4 3 2 1
//   4 3 2 1
//       2 1
//         1
  





return 0;

// ****
//  ***
//   ** 
//    *




}