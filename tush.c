#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *ptr1,*ptr2,*ptr3,*ptr4;
	int p,l,m,o;
	char check[4], name[20], pass[20], regc[2] = "r", y[4] = "yes", yc[4] , name_buff[20], pc[20], ycc[20];
	printf("Want to register or login \n (use r and n)");
	scanf("%s", &check);
	p = strcmp(regc,check); //using this for registration
if (p == 0) // 0 us given when strcmp checks and finds the values to be exact same
{
	printf("\n enter name");
	scanf("%s", &name);
	printf("\n enter password");
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
	printf("\n registration sucessfull want to login");
	scanf("%s", &yc);
	system("cls");
	o = strcmp(yc, y);

	if (o == 0) 
	{
            printf("\n enter username");
            scanf("%s", &ycc);
            printf("\n enter password");
            scanf("%s", &pc);
            ptr3 = fopen("name.txt","r");
            if (ptr3 == NULL) 
    { 
        printf("Could not open file"); 
        return ; 
    }
            fgets(name_buff,20, ptr3);
            printf("%s", name_buff);
            l = strcmp(name_buff , ycc);
            m = strcmp(pass , pc);
            if (l == 0 , m == 0)
            {
            	printf("\n logged in sucessfully");
            	system("pause");
            }     
            else
            {
            	printf("\n wrong password");
            	system("pause");
            }
	}
	else 
	{
		system("pause");
	}

}
else 
{

	printf("\n nikal,pehli fursat me nikal");
	system("pause");
}
return ;
}
