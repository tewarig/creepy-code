//program to find how many times a sub-string has come in a string


 #include<stdio.h>

  void main()
 {
   int a,b,c;
   char str[100];
   gets(str);
   char sub[100];
   gets(sub);
  int l = strlen(str);
  int l1 = strlen(sub);
  int flag = 0 ; 
  for(int i=0;i<l;i++)
   {
    if(str[i]==sub[0])
    {int count = 1;
     for(int j=1;j<l1;j++)
       { if (sub[j] == str[i+j])
        count++;
        
        }
     if (count == l1)
     { flag ++;
     }
     }
     }
    printf("the sub string has come in this %d times\n",flag);}
