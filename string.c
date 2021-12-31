#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char* a = calloc(1,sizeof(char));;
printf("enter the string :");
scanf("%s",a);
for(int i=0;i<strlen(a);i++)
  	{
  		for(int j=i+1;a[j]!='\0';j++)
  		{
  			if(a[j]==a[i])  
			{
  				for(int k=j;a[k]!='\0';k++)
				{
					a[k]=a[k+1];
                                }
                          }
                }
         }
    printf("\n The Final String after Removing:%s ", a);
}
