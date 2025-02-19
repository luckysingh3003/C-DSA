#include <stdio.h>
int binarysearch(int num[], int n, int key) {
    int start = 0;
    int end = n - 1;
    
    while (start <= end) {
        int mid = (start + end) / 2;
        
        if(num[mid] == key) {
            return mid;
        }
        
        if(num[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1;   
}

int main() {
    int num[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n =  8 ;  
    int key = 10;
    int indx = binarysearch(num, n, key);
    
    if(indx != -1) {
        printf("Index for key %d is: %d\n", key, indx);
    } else {
        printf("Key not found\n");
    }

    return 0;
}
