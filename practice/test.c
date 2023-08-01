#include<stdio.h>
#include<conio.h>
#define MAX 30
void reverseArray(int size, int *ptr);
int main() {
    int A[3][2][2] = {{{0,1},{3,3}},  {{0,1},{3,3}},  {{0,1},{3,3}}};
    printf("%d %d %d %d %d", A, &A[0], *A, &A[0][0], &A[0][0][0] );
}
void reverseArray(int size, int *ptr)
{
    printf("Hien thi cac phan tu mang theo chieu dao nguoc \n");
    for (int i = 0; i < size;i++ )
    {
        printf("Phan tu %d cua mang la %d \n", size -i, *ptr +size -i -1);
    }
}
