#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort
void bubbleSort(vector<int>& arr)
{
    int n = arr.size();

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr)
{
    int n = arr.size();

    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr)
{
    int n = arr.size();

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Quick Sort
int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge Sort
void merge(vector<int>& arr, int left, int mid, int right)
{
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while(i <= mid)
        temp.push_back(arr[i++]);

    while(j <= right)
        temp.push_back(arr[j++]);

    for(int k = left; k <= right; k++)
    {
        arr[k] = temp[k - left];
    }
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// Print Array
void printArray(vector<int>& arr)
{
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

// Main Function
int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int choice;

    cout << "Original Array: ";
    printArray(arr);

    cout << "\nChoose Sorting Method\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Quick Sort\n";
    cout << "5. Merge Sort\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            bubbleSort(arr);
            cout << "\nUsing Bubble Sort\n";
            break;

        case 2:
            selectionSort(arr);
            cout << "\nUsing Selection Sort\n";
            break;

        case 3:
            insertionSort(arr);
            cout << "\nUsing Insertion Sort\n";
            break;

        case 4:
            quickSort(arr, 0, arr.size() - 1);
            cout << "\nUsing Quick Sort\n";
            break;

        case 5:
            mergeSort(arr, 0, arr.size() - 1);
            cout << "\nUsing Merge Sort\n";
            break;

        default:
            cout << "Invalid Choice!";
            return 0;
    }

    cout << "Sorted Array: ";
    printArray(arr);

    return 0;
}
