#include<stdio.h>
#include<string.h>
void concatenate(char *str1, char *str2, int n1, int n2);
char str1[100];
char str2[100];
int main() {
    int n1, n2;
    printf("Enter the size of str1: ");
    scanf("%d", &n1);
    printf("Enter the string: ");
    scanf("%s", str1);
    printf("Enter the size of str2: ");
    scanf("%d", &n2);
    printf("Enter string 2: ");
    scanf("%s", str2);
    concatenate(str1, str2, n1, n2);
    printf("Concatenated string is %s", str1);
    return 0;
}
void concatenate(char *str1, char *str2, int n1, int n2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0' && n2 > 0) {
        *str1 = *str2;
        str1++;
        str2++;
        n2--;
    }
    *str1 = '\0';
}
