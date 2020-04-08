/*Q9.-Write a program to add, subtract, multiply two complex numbers using structures to function.*/
#include<stdio.h>
 struct comp{
  int real;
  int img;
 }c1,c2,res;
 
  void op(char);
  int main(){
   int inp;
   char c;
    printf("please enter complex numbers in the form x1+-y1i and x2+-y2i\n");
   scanf("%d %d %d %d",&c1.real,&c1.img,&c2.real,&c2.img);
    printf("press:\n1. add\n2. subtract\n3. multiply\n");
   scanf("%d",&inp);
   switch(inp)
    {
    case 1:c='+';
    break;
    case 2:c='-';
    break;
    case 3:c='*';
    }
    switch(c)
    {
    case '+':res.real=c1.real+c2.real;
     res.img=c1.img+c2.img;
    break;
    case '-':res.real=c1.real-c2.real;
    res.img=c1.img-c2.img;
    break;

    case '*':res.real=(c1.real*c2.real)-(c1.img*c2.img);
     res.img=(c1.real*c2.img)+(c2.real*c1.img);}

     printf("RealPart:%d ImgPart:%di",res.real,res.img);
    return 0;
    }


