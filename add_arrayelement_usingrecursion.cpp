// add the input array using recurrsion
#include <iostream>
using namespace std;
int sumn(int n, int arr[])
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int sum;
    int remainingpart = sumn(n - 1, arr + 1);
    sum = arr[0] + remainingpart;
    return sum;
}
int main()
{
    int arr[5] = {2, 4, 6, 7, 8};
    int n = 5;
    int x = sumn(n, arr);
     cout << x;
}