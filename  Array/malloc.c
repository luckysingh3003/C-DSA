#include<stdio.h>
#include<stdlib.h>
int main(){
        int n;
        printf("enter integer:");
        scanf("%d",&n);
        int* ptr=(int*)malloc(n*sizeof(int));
        int *p=ptr;
        for(int i=1;i<=n;i++){
                scanf("%d",&(*ptr));
                ptr++;
        }
        for(int i=1;i<=n;i++){
                printf("%d",(*p));
                p++;
        }
        return 0;

}