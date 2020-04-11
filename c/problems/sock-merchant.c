/* John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

Function Description

Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.

sockMerchant has the following parameter(s):

n: the number of socks in the pile
ar: the colors of each sock
Input Format

The first line contains an integer , the number of socks represented in .
The second line contains  space-separated integers describing the colors  of the socks in the pile.

Constraints

 where 
Output Format

Return the total number of matching pairs of socks that John can sell.

Sample Input

9
10 20 20 10 10 30 50 10 20
Sample Output

3
Explanation

sock.png

John can match three pairs of socks.*/


#include<stdio.h>
int main(){
     int a;
     scanf("%d",&a);
     int arr[a];
     
     for(int i=0;i<a;i++)
     {
         scanf("%d",&arr[i]);
     }
     int pair =0;
      for(int i=0;i<a;i++)
     {    int count =0;
          for(int j=0;j<i;j++)
           {
             if(arr[j]==arr[i])
                {
                  count++;

                }}
             if(count== 0)
                {
                    int number=0;
                   for(int j=i;j<a;j++)
                    {
                      if(arr[j]==arr[i])
                        {
                         number++;
                         }
                    }
                    if(number%2==0)
                      {
                        pair+=number;
                      }else{
                            number-=1;
                            pair+=number;
                           }
                 
            count=0;
            }
    }
    printf("%d",pair/2);

}

