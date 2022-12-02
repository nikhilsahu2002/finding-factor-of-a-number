#include<stdio.h>
#include<conio.h>
void main()
{
int factor,num=factor,temp,b;
clrscr();
	printf("Enter The Factor Number: ");
	scanf("%d",&factor);

	while(num != 0)
	{
		temp=factor % num;
		if(temp==0)
		printf("%d \n",num);
		num--;
	}



getch();
}
