#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *ptr1,*ptr2;
	int reg_condition,l,m,o;
	char reg_c[4], name[20], pass[20], yes[2] = "y";
	printf("Want to register \n (use y and n)\n ");
	scanf("%s", &reg_c);
	reg_condition = strcmp(reg_c,yes); //using this for registration
if (reg_condition == 0) // 0 us given when strcmp checks and finds the values to be exact same
{
	printf("enter name \n ");
	scanf("%s", &name);
	printf("enter password\n ");
	scanf("%s", &pass);
    ptr1 = fopen("name.txt","w");
    ptr2 = fopen("pass.txt","w");
      if (ptr1 == NULL) 
    { 
        printf("Could not open file"); 
        return ; 
    }
    if (ptr2 == NULL) 
    { 
        printf("Could not open file"); 
        return ; 
    }
    fprintf(ptr1, "%s",name);
    fprintf(ptr2, "%s",pass);
	printf("\n registration sucessfull, now close this and open login.exe to login \n ");
    system("pause");
	return;
}
else
{
	printf("ok, see ya!");
	system("pause");
	}
}
