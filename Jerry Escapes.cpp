#include<stdio.h>
int main()
{
	int q,x,y,z,i,t,b;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&z);
		t=x-z;
		b=y-z;
		if(t<0)
			t=0-t;
		if(b<0)
			b=0-b;
		if(t<b)
			printf("Tom\n");
		else if(b<t)
			printf("Butch\n");
		else
			printf("Jerry Escapes\n");
	}
	return 0;
}
