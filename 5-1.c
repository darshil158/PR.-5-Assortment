#include <stdio.h>
int main() {
    int r,c,sum=0;
    printf("Enter the no. of rows :- ");
    scanf("%d",&r);
    printf("Enter the no. of columns :- ");
    scanf("%d",&c);
    int a[r][c];
    printf("\nEnter Elements of Array A :- \n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Array A :- \n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nNegative elements from array A : ");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(a[i][j]<0)   printf(" %d ",a[i][j]);
        }
    }
    return 0;
}
