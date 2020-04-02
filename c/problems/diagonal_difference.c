/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .

Function description

Complete the  function in the editor below. It must return an integer representing the absolute diagonal difference.

diagonalDifference takes the following parameter:

arr: an array of integers .
Input Format

The first line contains a single integer, , the number of rows and columns in the matrix .
Each of the next  lines describes a row, , and consists of  space-separated integers .

Constraints

Output Format

Print the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15

Note: |x| is the absolute value of x
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    int arr[100][100];
    scanf("%d",&n);
    int m=n-1;
    int sum1=0,sum2=0;

    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {scanf("%d",&arr[i][j]);

        if(i == j)
        {
        sum1=sum1+arr[i][j];
      //  printf("yo");
        }
        if (i+j == m)   //this condition was important
        {
            sum2=sum2+arr[i][j];
    //     printf("sum");
        }
    }}
    
    

    int sum = sum1 - sum2;
    if(sum>0)
    {printf("%d",sum);
    }
    else {
    sum= sum *-1;
    printf("%d",sum);
    }
}
