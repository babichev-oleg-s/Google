#include <iostream>

using namespace std;
int search(int arr[], int n, int x);

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
         int j=0;
         cout << "Array  " ;
         while(j<=n-1) {
            cout <<arr[j] << " ";
            j++;
         }

   int result = search(arr, n, x);
   (result == -1)? cout<<"Element is " << x <<" not present in array"
                 : cout<<"Element is " << x <<" present at index " <<result;
    return 0;
}


int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

