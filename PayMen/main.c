#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int varior[5]={34,23,24,54,12};
int i;
int sart[10];
int s,d;
int main(int argc, char *argv[]) {
	printf("Good day, Lets catch oversize\n");
	for(i=0;i<10;i++)
	{
	printf("Enter number\n");
	scanf("%d",&sart[i]);
		}
	
	for(i=0;i<10;i++)
	{
	s=sart[i]+80-90/2+s;
	printf("%d",s );
	}
	printf("\n");
	printf("Enter number 1-5 ");
	scanf("%d",&d);
	s=s-d+8;
	printf("\n %d",d);
	return 0;
}