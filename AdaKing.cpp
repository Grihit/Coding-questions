#include <iostream>
#include <math.h>
using namespace std;
//1 = .
//2 = King can move
//3 = actual X
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,i,j,a[100][100],x,flag=0;
	    cin>>k;
	    x=64-k;
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            if(x>0)
	            {
	                a[i][j]=1;
	                x--;
	            }
	            else
	            {
	                a[i][j]=2;
	            }
	        }
	    }
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            if(a[i][j]==1)
	            {
	                if(a[i][j+1]==2 || a[i+1][j+1]==2 || a[i+1][j]==2 || a[i+1][j-1]==2)
	                    a[i][j]=3;
	            }
	        }
	    }
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            if(a[i][j]==3)
	                cout<<"X";
	            else if(a[i][j]==1)
	                cout<<".";
	            else if(a[i][j]==2 && flag==0)
	            {
	                cout<<"O";
	                flag=1;
	            }
	            else if(a[i][j]==2 && flag==1)
	            {
	                cout<<".";
	            }
	            //cout<<a[i][j];
	        }
	        cout<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}
