#include<stdio.h>
struct sparse{
    int row;
    int column;
    int value;
};
struct sparse s[15];
int k=0;
void sparse(int r, int c,int arr[][7]){
    int i,j,count=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            if(arr[i][j]!=0){
                k++;
                s[k].row=i;
                s[k].column=j;
                s[k].value=arr[i][j];
                count++;
            }
        }
        s[0].row=r;
        s[0].column=c;
        s[0].value=count;
}
void main(){
   int arr[7][7],i,j,r,c;
   printf("Enter the number of rows: ");
   scanf("%d",&r);
   printf("Enter the number of columns: ");
   scanf("%d",&c);
   printf("Enter the elements: ");
   for(i=0;i<r;i++){
       printf("Row %d:\n",i);
       for(j=0;j<c;j++)
         scanf("%d",&arr[i][j]);
   }
   printf("\nEntered sparse matrix:\n");
   for(i=0;i<r;i++){
       for(j=0;j<c;j++)
         printf("%d\t",arr[i][j]);
        printf("\n"); 
   }
   sparse(r,c,arr);
   printf("\n Representation of sparse matrix:\n");
   printf("Row\tcolumn\tValue\n");
   for(i=0;i<k+1;i++){
       printf("%d\t%d\t%d\n",s[i].row,s[i].column,s[i].value);
   }
}
