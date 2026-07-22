#include <iostream>
#include <vector>
using namespace std;

// Linear Search
int linearSearch(vector<int>& arr, int key)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(vector<int>& arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {11, 22, 34, 45, 56, 67, 78, 89, 90};
    int key, choice, result;

    cout << "Array Elements: ";
    for(int x : arr)
    {
        cout << x << " ";
    }

    cout << "\n\n1. Linear Search";
    cout << "\n2. Binary Search";
    cout << "\nEnter Choice: ";
    cin >> choice;

    cout << "Enter Element to Search: ";
    cin >> key;

    switch(choice)
    {
        case 1:
            result = linearSearch(arr, key);
            break;

        case 2:
            result = binarySearch(arr, key);
            break;

        default:
            cout << "Invalid Choice!";
            return 0;
    }

    if(result != -1)
    {
        cout << "Element Found at Position: " << result + 1;
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}
