// find first and last position of an element in a sorted array 



#include <iostream>

using namespace std;

int firstOccurence(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;  //  ?
        }

        else if (key > arr[mid])
        { // right wale me jao
            start = mid + 1;
        }

        else if (key < arr[mid])
        { // left wale me jao
            end = mid - 1;
        }

        int mid = start + (end - start) / 2;
    }

    return ans ;
}




int lastOccurence(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid - 1;  //  last occurrence ke liye to right part me jayege na isiliye ye likha 
        }

        else if (key > arr[mid])
        { // right wale me jao
            start = mid + 1;
        }

        else if (key < arr[mid])
        { // left wale me jao
            end = mid - 1;
        }

        int mid = start + (end - start) / 2;
    }

    return ans ;
}




int main()
{

    int even[17] = {3,2,3,3,4,3,3,3,3,3,3,5,6,3,3,3,5};

   cout<<" First Occurrence of 3 is " << firstOccurence(even , 17 , 3)<<endl;
   cout<<" last  Occurrence of 3 is " << lastOccurence(even , 17 , 3)<<endl;

    return 0;
}