#include <stdio.h>
int main() {
    int r,c,sumr=0,sumc=0;
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
    printf("Enter row number from 1 to %d :- ",r);
    scanf("%d",&r);
    printf("Enter row elements from %d column :- ",r);
    for(int j=0;j<c;j++) {
        printf("%d ",a[r-1][j]);
        sumr=sumr+a[r-1][j];
    }
    printf("\nSum of row elements :- %d\n",sumr);
    printf("Enter column number from 1 to %d :- ",c);
    scanf("%d",&c);
    printf("Enter elements from %d column:- ",c);
    for(int i=0;i<r;i++) {
        printf("%d ",a[i][c-1]);
        sumc=sumc+a[i][c-1];
    }
    printf("\nSum of column elements :- %d\n",sumc);
    return 0;
}
