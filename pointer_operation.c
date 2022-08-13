#include<stdio.h>
int main()
{
    // pre-increament operations on pointers with 
    int arr[5]={10,20,30,40,50};
    int* ptr=&arr[1];
    printf("value at ptr is %d\n",*ptr);
    printf("value of ptr is %d\n",ptr);
    printf("address of ptr after increament is %d\n",ptr++);
    printf("value of ptr after increament is %d\n",*ptr);
    printf("address of ptr after increament is %d\n",ptr);

    //pre-increment operation on pointer variable
    int x=20;
    int *ptr1=&x;
    printf("add of ptr1 variable is %d\n",ptr1);
    printf("add of ptr1 variable is %d\n",*ptr1);
    printf("increamenting the pointer variable is %d\n",ptr1++);
    printf("address of after increamenting  %d\n",ptr1);
    // printf("value of after increamenting  %d\n",*ptr1);
    return 0;
}