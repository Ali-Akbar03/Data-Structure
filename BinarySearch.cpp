#include <iostream>

using namespace std;

int BinarySearch(int arr[],int n, int x)
{
    int first = 0,last = n-1;

    while(first<=last)
    {
        int mid= (last+first)/2;

        if(arr[mid]== x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            first=mid+1;
        }
        else
            last=  mid-1;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5}; //always for sorted array
    int x= 5;
    int n= sizeof(arr)/sizeof(arr[0]);
    int result = BinarySearch(arr,n,x);


    if (result != -1)
        cout << "Found " << x << " at index " << result << endl;
    else
        cout << "Not found" << endl;


    return 0;
}
