#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x);

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 110;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);

    cout << "Array ";

    int j=0;
    while (j<n-1) {

        cout << " " <<arr[j];
        j++;

    }

    (result == -1) ? cout << " Element is " << x  <<" not present in array"
                   : cout << " Element is " <<x << " present at index " << result;
    return 0;
}


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}

