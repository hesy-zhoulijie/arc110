# A - Redundant Redundancy

Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 300 points
## Problem Statement

We have an integer N.

Print an integer x between N and $10^13$ (inclusive) such that, for every integer y between 2 and N (inclusive), the
remainder when x is divided by y is 1.

Under the constraints of this problem, there is always at least one such integer x.
## Constraints

All values in input are integers.
2≤N≤30

## Input

Input is given from Standard Input in the following format:

N


## Output

Print an integer x
between N and $10^13$ (inclusive) such that, for every integer y between 2 and N (inclusive), the remainder when x is
divided by y is 1.

If there are multiple such integers, any of them will be accepted.

## Samples
```
Sample Input 1

3

Sample Output 1

7

The remainder when 7is divided by 2 is 1, and the remainder when 7 is divided by 3 is 1, too.

7 is an integer between 3 and 10^13, so this is a desirable output.
```