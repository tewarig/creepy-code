/*
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the catAndMouse function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
void catAndMouse(int x, int y, int z) {
    int a,b,c;
    a = z - x;
    if(a<0)
    {
        a=a*-1;
    }
     b = z - y;
    if(b<0)
    {
       b=b*-1;
    }
    if(a>b)
    {
        printf("Cat B\n");
    }else if(a<b)
    {
        printf("Cat A\n");
    }else
    {
        printf("Mouse C\n");
    }


}

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    catAndMouse(a, b,c);
    }
    return 0;
    
}

*/
//code
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the catAndMouse function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
void catAndMouse(int x, int y, int z) {
    int a,b,c;
    a = z - x;
    if(a<0)
    {
        a=a*-1;
    }
     b = z - y;
    if(b<0)
    {
       b=b*-1;
    }
    if(a>b)
    {
        printf("Cat B\n");
    }else if(a<b)
    {
        printf("Cat A\n");
    }else
    {
        printf("Mouse C\n");
    }


}

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    catAndMouse(a, b,c);
    }
    return 0;
    
}
