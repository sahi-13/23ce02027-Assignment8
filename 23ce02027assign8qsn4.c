#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (nums + i));
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(nums + j) > *(nums + j + 1)) {
                int t = *(nums + j);
                *(nums + j) = *(nums + j + 1);
                *(nums + j + 1) = t;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (*(nums + i) == *(nums + i + 1)) {
            printf("%d is the number which occurs more than once in the array.\n", *(nums + i));
            while (*(nums + i) == *(nums + i + 1)) {
                i++;
            }
        }
    }
    return 0;
}
