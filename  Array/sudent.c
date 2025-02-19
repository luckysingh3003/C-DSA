#include<stdio.h>
#include<string.h>
int main (){
        typedef struct student{
                char name[20];
                int BT;
                char branch[20];
                float cgpa;
        } student ;

student arr[3];
for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].BT);
        scanf("%s",arr[i].branch);
        scanf("%f",&arr[i].cgpa);
}


int n=3;
  for (int i = 0; i <n-1; i++) {
                for(int j=0;j<n-i-1;j++){
                        if(arr[j].cgpa>arr[j+1].cgpa){
                                 student temp=arr[j];
                                 arr[j]=arr[j+1];
                                 arr[j+1]=temp;

                        }
                }
                 
             }


for(int i=0;i<3;i++){
        printf("Name :%s\n",arr[i].name);
        printf("BT:%d\n",arr[i].BT);
        printf("Branch:%s\n",arr[i].branch);
        printf("cgpa%2f\n",arr[i].cgpa);
}
char searchName[20];
printf("enter name");
scanf("%s",searchName);
  int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, searchName) == 0) {
            printf("\nStudent Found:\n");
            printf("Name: %s\n", arr[i].name);
            printf("BT: %d\n", arr[i].BT);
            printf("Branch: %s\n", arr[i].branch);
            printf("CGPA: %.2f\n", arr[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent not found!\n");
    }


 
return 0;
}
