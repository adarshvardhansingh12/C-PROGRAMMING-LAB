#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the limits");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n],i,j;
    if (m!=n)
    printf("matrix multiplication is not possible");
    else{
        printf("A matrix elements ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        }
        printf("B matix elements ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
         printf("B matix elements ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
        }


    }

}
