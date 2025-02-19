#include <stdio.h>

int main() {
    int num[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int key = 1;
    int found = 0;  

    for (int i = 0; i < 8; i++) {
        if (num[i] == key) {
            printf("Key is at index: %d\n", i);
            found = 1;   
            break;  
        }
    }

    if (found!=1) {   
        printf("Not found\n");
    }

    return 0;
}
