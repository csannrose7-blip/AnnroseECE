#include <stdio.h>

int main() {
    int arr[5];
    printf("enter 5 numbers: \n");
    for(int i=0; i<5; i++) {
        scanf("%d",&arr[i]);
    }

    int sum = 0; // start with 0
    for(int i=0; i<5; i++) {
        sum = sum + arr[i]; // add one by one
    }

    printf("sum is %d", sum);
    return 0;
}
