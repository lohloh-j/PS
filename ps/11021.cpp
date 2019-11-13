#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int input, a, b;
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }
}
