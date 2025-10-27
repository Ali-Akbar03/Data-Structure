#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>> n;
    int a[n];
    int found = 0, pos=-1;

    cout<<"Enter the element's - ";
    //Taking the values to store in the array as it's element
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    int x;
    cout<< "Enter the the number you are searching x= ";
    cin>>x;

    for(int i=0; i<=n-1; i++)
    {
        if(a[i]==x)
        {
            pos=i;
            found++;
            break;
        }
    }

    if(found!=0)
    {
        cout<<"The element is found at "<<pos<<" number index";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}
