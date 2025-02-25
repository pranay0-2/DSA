#include <iostream>

using namespace std;

bool isPresent(int arr[][4], int target, int row, int column)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target)
            {

                return 1;
            }
        }
    }
    return 0;
}

// printing the row Sum
void rowSum(int arr[][4], int row, int column)
{
     cout<<"Printing the row Sum" <<endl;
    for(int i = 0; i < 3; i++){
        int sum = 0; 
        for(int j = 0; j < 4; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


// Printing  the column Sum 
void columnSum(int arr[][4], int row, int column){

    cout<<"Printing the Column Sum : ";
    for(int i = 0; i < 4; i++){
        int sum = 0; 
        for(int j = 0; j < 3; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}



int largestRowSum(int arr[][4] , int row , int column){

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < 3; i++){
        int sum = 0; 
        for(int j = 0; j < 4; j++){
            sum+=arr[i][j];
        }
         if(sum > maxi){   
            maxi = sum;
            rowIndex = i;
         }
    }

  cout<<"max index is at " <<rowIndex<<endl;
  cout<<"Sum of max index " <<rowIndex<< " is " << maxi <<endl;
    
}
int main()
{

    // 2-D arary

    // input 2-D array

    // also initialise like this
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 6, 5};
    // int arr[3][4] = {{1, 2, 3, 0}, {4, 5, 6, 0}, {7, 8, 9, 0}};

    // taking input row wise
    int arr[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout << "Enter element" << endl;
            cin >> arr[row][column];
        }
    }

    // taking input column wise

    //  int arr[3][4];
    //  for(int row = 0; row<4; row++)
    //  {
    //     for(int column = 0; column<3; column++){
    //         cout << "Enter element" <<endl;
    //         cin >> arr[column][row];
    //     }
    //  }

    // print 2-D array

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search : ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not found" << endl;
    }


    // printing the sum of row's

    rowSum(arr , 3 , 4);

    columnSum(arr , 3 , 4);

    largestRowSum(arr, 3 , 4);
    
    return 0;
}