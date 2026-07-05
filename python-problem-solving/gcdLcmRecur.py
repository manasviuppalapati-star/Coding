"""Problem Statement
Sarah, a programming instructor, is preparing a teaching demonstration on recursive algorithms for calculating the greatest common divisor (GCD) and least common multiple (LCM) of two integers. She requires a program that demonstrates the recursive approach to finding the LCM of two given integers.
Your task is to assist Sarah in developing a program that calculates the LCM of two integers using recursion.

Input format :
The input consists of two space-separated integers, a and b.

Output format :
The output prints a single integer representing the LCM of a and b.
Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the given test cases will fall under the following constraints:

1 ≤ a, b ≤ 100

Sample test cases :
Input 1 :
5 10
Output 1 :
10
Input 2 :
12 18
Output 2 :
36"""
def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)
def lcm(a,b):
    return (a*b)// gcd(a,b)
a,b=map(int,input().split())
print(lcm(a,b))
