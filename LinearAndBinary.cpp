#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice: \n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout<<"--------------------------Welcome to linear searching method------------------\n";
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        int a[n];
        cout << "Enter the elements:\n";
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x;
        cout << "Enter the number you are searching: ";
        cin >> x;

        int found = 0, pos = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                found = 1;
                pos = i;
                break;
            }
        }

        if (found)
        {
            cout << "Found at index: " << pos << endl;
            cout << "Actual position: " << pos + 1;
        }
        else
            cout << "Not found";

        break;
    }

    case 2:
    {
        cout<<"--------------------------Welcome to binary searching method------------------\n";
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        int a[n];
        cout << "Enter the elements (sorted):\n";
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x;
        cout << "Enter the value you are searching: ";
        cin >> x;

        int left = 0, right = n - 1;
        bool found = false;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (a[mid] == x)
            {
                cout << "Found at index: " << mid;
                found = true;
                break;
            }
            else if (a[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }

        if (!found)
            cout << "-1";

        break;
    }

    default:
        cout << "Oops! Wrong input";
    }

    return 0;
}
