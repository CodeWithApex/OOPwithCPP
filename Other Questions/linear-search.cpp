#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;

    cout << "Enter the number you want to search : ";
    cin >> n;

    for (int i = 0; i <= 7; i++)
    {
        if (numbers[i] == n)
        {
            cout << "Found at index " <<i;
            return 0;
        }
    }
    cout << "Error 404 : Not found";
}