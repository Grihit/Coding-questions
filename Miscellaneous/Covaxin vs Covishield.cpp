#include <bits/stdc++.h>
using namespace std;

int main() {
	int I;
	scanf("%d",&I);
	long X,A,B,C,D,P,Q,R,S,T,M,temp,k=1,l=1,ans=0,temp1,temp2;
	scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld %ld %ld",&X,&A,&B,&C,&D,&P,&Q,&R,&S,&T,&M);
	temp=X;
	while(I>0)
	{
	   temp1 = A+(k-1)*B;
	   temp2 = C+(l-1)*D;
	   if(temp1 <= temp2)
	   {
	       temp = temp - temp1;
	       k++;
	       ans++;
	   }
	   else
	   {
	       temp = temp - temp2;
	       l++;
	       ans++;
	   }
	    if(temp<0)
	    {
	        I--;
	        ans--;
	        A = (A + ans*T)%M + P;
	        B = (B + ans*T)%M + Q;
	        C = (C + ans*T)%M + R;
	        D = (D + ans*T)%M + S;
	        printf("%ld\n",ans);
	        temp=X;
	        k=l=1;
	        ans=0;
	    }
	}
	return 0;
}
