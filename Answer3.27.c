// C++ program for the above series
#include <iostream>
using namespace std;

// Function to find the sum of series
void printSeriesSum(int N)
{
    double sum = 0;

    int a = 1;
    int cnt = 0;

    // Flag to find the multiplicating
    // factor.. i.e, by 2 or 3/2
    bool flag = true;

    // First term
    sum += a;

    while (cnt < N) {

        int nextElement;

        // If flag is true, multiply by 2
        if (flag) {
            nextElement = a * 2;
            sum += nextElement;
            flag = !flag;
        }

        // If flag is false, multiply by 3/2
        else {
            nextElement = a * 3 / 2;
            sum += nextElement;
            flag = !flag;
        }

        // Update the previous element
        // to nextElement
        a = nextElement;
        cnt++;
    }

    // Print the sum
    cout << sum << endl;
}

// Driver Code
int main()
{

    int N = 8;

    printSeriesSum(N);
    return 0;
}

Output:
201


Time Complexity: O(N)

Auxiliary Space: O(1), since no extra space has been taken.

