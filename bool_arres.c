
#include <stdio.h>
#include <stdbool.h>

int main() {
    char a[] = "Hello";
    printf("chars is: %s\n", a);
    if (a) {
        printf("a is true\n");
        for(int s = 1; s <=10;s++){
            printf("s = %d\n",s);
        }
    }
    return 0;
}