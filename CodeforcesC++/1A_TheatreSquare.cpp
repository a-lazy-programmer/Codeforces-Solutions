/*
A. Theatre Square
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.
What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 10^9).
Output
Write the needed number of flagstones.
Sample Input: 
6 6 4
Sample Output:
4

SOLUTION:
We can find out total number of flag stones needed to completely pave the theatre square by:
1. Finding maximum number of flagstones that can be paved along the row and along the column
2. Then multiplying them to find the total.
*/

// START OF SOURCE CODE.
#include<iostream>
using namespace std;
//main
int main()
{
    int n, m, a; // max value of n, m, a can be 10^9, since int can store a number from -2,147,483,648 to 2,147,483,647 it'll be sufficeint to store these as int.
    cin >> n >> m >> a;
    long long flagsByRow; //to store values of max num of flagstones that can be paved along the row.
    if (n % a == 0) //if length of row is completely divisible by side of square there's no need of an extra sqaure flagstone.
    {
        flagsByRow = n / a; //max number of flagstone
    }
    else
    {
        flagsByRow = n / a;
        flagsByRow++; //one extra flagstone will be used.
    }

    long long flagsByColumn; //to store values of max num of flagstone that can be paved along the column.

    if (m % a == 0) //if length of column is completely divisible by side of square there's no need of an extra square flagstone.
    {
        flagsByColumn = m / a; //max number of flagstones
    }
    else
    {
        flagsByColumn = m / a;
        flagsByColumn++; //one extra flagstone will be used.
    }

    cout << flagsByRow * flagsByColumn << endl; //total number of flagstones needed = flagstones by row multiplied by flagstones by column.

    return 0;
}
//END OF SOURCE CODE.