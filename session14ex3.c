#include <stdio.h>
#include <string.h>

int main() {
    char str[100]="  aaaaaaaa ";  
    int len, i;
    len = strlen(str);
    printf("chuoi dao nguoi: ");
    for (i = len ; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
