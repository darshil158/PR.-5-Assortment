#include <stdio.h>
int main() {
    int r,c,sum=0;
    printf("Enter the number of Rows :- ");
    scanf("%d",&r);
    printf("Enter the number of Columns :- ");
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
    int max=a[0][0];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(max < a[i][j]) {
                max = a[i][j];
            }
        }
    }
    printf("\nMaximum Element of array A : %d\n",max);
    return 0;
}
