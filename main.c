#include <stdio.h>
#include <stdbool.h>  

int main() {
    int a = 2;
    bool hi = true;

    if(hi || a < 1) {
        printf("a>1 but bool = %d\n",hi);  
    }else {
        printf("\nNo");
    }
    return 0;
}




