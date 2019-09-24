# Special Bonus Task 2019
A special given task to obtain additional points for Sourcery Academy 
By Rokas Burneika

## Task
A magic number is an integer in which permutations of the digits are successive multiples of the number (number of digits and order does not change, but can start from different position).

The most widely known is 142857:
142857 × 1 = 142857
142857 × 2 = 285714
142857 × 3 = 428571
142857 × 4 = 571428
142857 × 5 = 714285
142857 × 6 = 857142

## Solution
1. The program is given a number N
2. Two deques are created:
   - All possible permutations that agree to defined rules.
   - All successive multiples that are lower than 10 ^ (length of N)
3. Finds successive (>1) multiples that are equal to permutations
4. Outputs if a number is Magical or Not
