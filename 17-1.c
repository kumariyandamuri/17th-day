#include<stdio.h>
int main()
{
	int n,i,h,ele;
	scanf("%d",&n);
    i=1;
    while(i<=n)
    {
    	scanf("%d",&ele);
    	if(i==1)
    	h=ele;
    	if(ele<h)
    h=ele;
    i++;
    }
    
	printf("\n Lowest =%d",h);
}
