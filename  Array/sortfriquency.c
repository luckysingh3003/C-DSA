#include<stdio.h>
int main (){
        int arr[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
        int n=17;
        int count[10]={0};
        int m=10;
        for(int i=0;i<n;i++){
               count[arr[i]]++;
        }
  
             for (int i = 0; i <m-1; i++) {
                for(int j=0;j<m-i-1;j++){
                        if(count[j]>count[j+1]){
                                 int temp=count[j];
                                 count[j]=count[j+1];
                                 count[j+1]=temp;

                        }
                }
                 
             }
             



             for(int i=0;i<m;i++){
                printf("%d ",count[i]);
             }
             return 0;
            

}