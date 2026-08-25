#include <stdio.h>

int main() {
    int arr[5];
    printf("enter 5 numbers: \n");
    for(int i=0; i<5; i++) {
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(int i=0; i<5; i++) {
        sum=sum+arr[i];
    }
    printf("sum is %d \n", sum);

    float avg = sum / 5.0;
    printf("avg is %f", avg);

    return 0;
}
