//given a 2D array int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};,write a program to print the sum of 2nd row

#include <stdio.h>
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    
    for(int c = 0; c < 3; c++) {
        sum += mat[1][c];
    }
    
    printf("Sum of the 2nd row: %d\n", sum);
    return 0;
}