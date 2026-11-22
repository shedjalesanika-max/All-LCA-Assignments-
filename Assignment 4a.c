#include<stdio.h>
int main(){
int rows, cols;
// Input the number of rows and columns
printf("enter the number of rows : ");
scanf("%d", &rows);
printf("enter the number of columns : ");
scanf("%d" , &cols);
int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
// Input elements of the first matrix:\n");
printf("enter elements of the first matrix :\n");
for (int i = 0;i < rows; i++) {
for (int j=0; j < cols; j++) {
printf("element [%d][%d] : ", i, j);
scanf("%d" , &mat1[i][j]);
}
}
// input elements of the second matrix 
printf ("\n enter elements of the second matrix:\n");
for (int i=0;i < rows; i++){
for (int j =0;j <cols; j++){
printf("element [%d][%d]: ", i,j);
scanf("%d", &mat2[i][j]);
}
}
//performing matrix addition 
for (int i=0; i<rows; i++){
for (int j=0;j < cols ; j++){
result[i][j] = mat1[i][j] + mat2[i][j];
}
}
//displaying the result 
printf ("\nresultant matrix after addition:\n");
for (int i=0; i< rows ; i++){
for (int j=0; j<cols; j++){
printf ("%d\t", result[i][j]);
}
printf("\n");
}
return 0;
}

