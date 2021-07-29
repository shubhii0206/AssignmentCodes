

#include <bits/stdc++.h>
using namespace std;

void printDiagonalSums(vector<vector<int>> arr, int n)
{
    int primary = 0, secondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            // Condition for principal diagonal
            if (i == j)
                primary += arr[i][j];

            // Condition for secondary diagonal
            if ((i + j) == (n - 1))
                secondary += arr[i][j];
        }
    }

    cout << "Primary Diagonal Sum:" << primary << endl;
    cout << "Secondary Diagonal Sum:" << secondary << endl;
}

int main()
{  
    int n;
    cout<<"Enter size of row and column: "<<endl;
    cin >> n; //size of row, col
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j]; //enter array elements
    }
    printDiagonalSums(arr, n);
    return 0;
}

/*
input 
Enter size of row and column:
3

1 2 3

4 5 6

7 8 9

output
Primary Diagonal Sum:15

Secondary Diagonal Sum:15




*/