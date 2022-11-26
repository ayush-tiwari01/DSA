#include <iostream>
using namespace std;
int main()
{
    int n;
    int c[50][50];
    cout << "enter the number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
                cout << c[i][j] << " ";
            }
        }
        cout << endl;
    }
}