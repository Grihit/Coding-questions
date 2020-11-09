//Magic square on Hackerrank
#include<stdio.h>
int main()
{
    int i,j,k,n[3][3],diff,sum[8],min;
    int all[8][3][3] = 
        {
            {
                {8,1,6},
                {3,5,7},
                {4,9,2}
            },
            {
                {6,1,8},
                {7,5,3},
                {2,9,4}
            },
            {
                {4,9,2},
                {3,5,7},
                {8,1,6}
            },
            {
                {2,9,4},
                {7,5,3},
                {6,1,8}
            },
            {
                {8,3,4},
                {1,5,9},
                {6,7,2}
            },
            {
                {4,3,8},
                {9,5,1},
                {2,7,6}
            },
            {
                {6,7,2},
                {1,5,9},
                {8,3,4}
            },
            {
                {2,7,6},
                {9,5,1},
                {4,3,8}
            },
        };
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(k=0;k<8;k++)
    {
        sum[k]=0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                diff=n[i][j] - all[k][i][j];
                if(diff<0)
                    diff= 0-diff;
                sum[k]=sum[k] + diff;
            }
        }
    }
    min=sum[0];
    for(i=0;i<8;i++)
    {
        if(sum[i]<min)
            min=sum[i];
    }  
    printf("%d",min); 
    return 0;
}