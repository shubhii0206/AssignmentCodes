//2. Write a recursive solution to print even numbers from 0 to X (x will be provided as an input) (any language)

#include <bits/stdc++.h>

using namespace std;

void evenNumbersInRange(int start, int X)
{
    if (start <= X)
    {
        cout << 2 * start << " ";
        evenNumbersInRange(start + 1, X);
    }

    return;
}
int main()
{
    int X;
    cin >> X;
    int start = 0;
    evenNumbersInRange(0, X);

    return 0;
}


Input: 5
Output: 0 2 4
