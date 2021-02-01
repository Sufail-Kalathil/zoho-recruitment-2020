#include<stdio.h>

//  program to print a snake matrix 
int main()
{
	int num;
	scanf("%d",&num);
	int range = num;
	int spaces = num * 2 ; // to use space
	int i,count=0,val=1,val_range=1;
	while(range>0)
	{
		for(i=0;i<spaces;i++)
		{
			printf("  ");
		}
		spaces = spaces - 2 ;
		
		if(count == 0)
		{
			for(i=val_range;i<(num+val_range);i++)
			{
				printf("%d ",i);
				val += 1 ;
			}
			count = 1 ;
			val_range = val-1;
		}
		else
		{
			for(i=(val_range+num);i>(val_range);i--)
			{
				printf("%d ",i);
			}
			val = val+ num;
			val_range = val ;
			count = 0;
		}
		printf("\n");
		range = range - 1 ;

	}


}