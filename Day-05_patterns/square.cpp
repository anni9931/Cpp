#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows for print square pattern for counting no :";
    cin >> n;

    int i = 1;
    int count;
    count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}