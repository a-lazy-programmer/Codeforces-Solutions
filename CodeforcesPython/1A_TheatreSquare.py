# A. Theatre Square:
# time limit per test1 second
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Problem:
# Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.
# What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
# Input
# The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 10^9).
# Output
# Write the needed number of flagstones.
# Sample Input: 
# 6 6 4
# Sample Output:
# 4

# SOLUTION:
# We can find out total number of flag stones needed to completely pave the theatre square by:
# 1. Finding maximum number of flagstones that can be paved along the row and along the column
# 2. Then multiplying them to find the total.

# START OF SOURCE CODE.
def main():
    n, m, a = tuple(map(int,input().split()))
    print(((n + a - 1) // a) * ((m + a - 1) // a))
main()