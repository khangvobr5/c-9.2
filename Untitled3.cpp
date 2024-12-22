#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int position, newValue;
    printf("Mang ban dau: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &position);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    if (position >= 0 && position < n) {
        array[position] = newValue;
        printf("Mang sau khi sua: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
    } else {
        printf("Vi tri khong hop le!\n");
    }
    return 0;
}

