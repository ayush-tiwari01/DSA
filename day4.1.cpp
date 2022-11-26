#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            int temp = arr[minindex];
            arr[minindex] = arr[i];
            arr[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr, n);
     cout<<endl;
     cout<<"tastiness level of the square which his sister gets"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[n-1];
}