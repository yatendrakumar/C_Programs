#include<stdio.h>
#include<string.h>

int main(){
    // Void pinter operation
    void *ptr = 0x10000000;
    printf("%p\n", ptr);
    ptr++;
    printf("%p\n", ptr);
    printf("%ld\n", sizeof(void ));
    printf("%ld\n", sizeof(void *));

    // Array Assignement
    int a[4] = {1, 2, 3, 4};
    int b[4] = {1, 3, 5, 5};
    printf("%p\n", a);
    memcpy(&a, &b, sizeof(a));
    // a = b; // Not correct error: incompatible types when assigning to type
    // ‘int[4]’ from type ‘int *’
    printf("%p\n", a);
    
    // Getting typecasted 
    int i[] = { 23, 42 };
    void* c = &i;
    void* d = c + 4;
    printf("%i\n", *((int*)d));
    printf("%p\n", d);

    // Number of array elements which size is not defined
    printf("elements in array = %d\n", sizeof(i)/sizeof(i[0]));

}
