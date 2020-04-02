/*
You are given an array of  integers, , and a positive integer, . Find and print the number of  pairs where  and  +  is divisible by .

For example,  and . Our three pairs meeting the criteria are  and .

Function Description

Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.

divisibleSumPairs has the following parameter(s):

n: the integer length of array 
ar: an array of integers
k: the integer to divide the pair sum by
Input Format

The first line contains  space-separated integers,  and .
The second line contains  space-separated integers describing the values of .

Constraints

Output Format

Print the number of  pairs where  and  +  is evenly divisible by .

Sample Input

6 3
1 3 2 6 1 2
Sample Output

 5
Explanation
*/


#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void divisablesumpair(int arr[],int n,int k)
{
    int i,j;
    int p;
    int count=0;
 for(i=0;i<n-1;i++)  //important step
   for(j=i+1;j<n;j++)
   { p=arr[i]+arr[j];
    if(p%k==0)
    {
        count++;
    }
   }
        printf("%d",count);

}
int main()
{
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    divisablesumpair(arr,n,k);
  //  printf("%d",count);
    return 0;
}
