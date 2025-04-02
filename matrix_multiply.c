#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
    printf("Enter the order Matrix A: \n");
    scanf("%d%d",&m,&n);
    if(m<1 || n<1)
    {
        printf("Error:Kindly enter valid order \n");
        return -1;
    }
    printf("Enter the order Matrix B: \n");
    scanf("%d%d",&p,&q);
    if(p<1 || q<1)
    {
        printf("Error:Kindly enter valid order \n");
        return -1;
    }
    if(n != p)
    {
        printf("Error: Matrix multiplication is not possible \n");
        return -1;
    }
    printf("Enter the elements of Matrix A: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Matrix b: \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiplication is going on.......... \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j] = 0;
            for(k=0;k<p;k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    printf("Multiplication of the two matrices is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
