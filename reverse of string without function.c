#include<stdio.h>
void main()
{
	char s[100];
	scanf("%s",s);
	printf("input string:%s\n",s);
	int i,j,t;
	for(i=0;s[i] != '\0';i++) ;
    int l=i;
    i=0;
    j=l-1;
    while(i<j)
    {
 	 t=s[j];
   	 s[j]=s[i];
   	 s[i]=t;
   	 i++;
   	 j--;
    }
    printf("reverse string:%s",s);
}
