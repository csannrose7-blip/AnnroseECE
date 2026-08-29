#include <stdio.h>
int main() {
    int arr[3] = {10,20,30};
    int *p = arr; // arr is address of first element
    for(int i=0; i<3; i++) {
        printf("%d ", *(p+i));
    }
    return 0;
}
