#include <stdio.h>
int main() {
    int r,c,sum=0;
    printf("Enter the number of rows :- ");
    scanf("%d",&r);
    printf("Enter the number of columns :- ");
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
    int b[c][r];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("Transpose of Array A :- \n");
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
