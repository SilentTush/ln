#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
    {
    	int x,y;
    	char a[20],b[20],name[20],pass[20];
      FILE *ptr1,*ptr2;
      ptr1 = fopen("name.txt","r");
      ptr2 = fopen("pass.txt","r");
      fread(a,20,1,ptr1);
      fread(b,20,1,ptr2);
      printf("%s" , b);
      printf("enter username \n");
      scanf("%s", name);
      printf("enter password \n");
      scanf("%s", pass);
      x = strcmp(a,name);
      y = strcmp(b,pass);
      if (x == 0 , y == 0)
      {
      	printf("welcome! %s", name);
      	system("pause");
      }
      else 
      {
      	printf("wrong password or username");
      	system("pause");
      }
      return 0;
    }