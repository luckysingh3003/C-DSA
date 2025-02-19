 #include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    char branch[40];
    float CGPA;
};

int main() {
     
    struct Student students[7] = {
        {2423, "Nikhil", "AIML", 8.5},
        {8439, "Utkarsh", "ECE", 7.8},
        {9283, "Vivek", "CSE", 8.0},
        {5434, "Ashutosh", "AIML", 8.3},
        {8439, "Palakdeep", "HCI-GT", 7.4},
        {9283, "Lucky", "AIML", 8.9},
        {9283, "Ayush", "ECE", 8.2}
    };

    
    
    for (int i = 0; i < 7; i++) {
        printf("Student id : %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Branch: %s\n", students[i].branch);
        printf("CGPA: %.2f\n\n", students[i].CGPA);
    }

     
    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

     
    printf("Sorted  Name\n");
    for (int i = 0; i < 7; i++) {
        printf("%s\n", students[i].name);
    }
    printf("\n");

    
    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (students[j].CGPA < students[j + 1].CGPA) {   
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

     
    printf("Sorted CGPA\n");

    for (int i = 0; i < 7; i++) {
        printf("%.2f  ",students[i].CGPA);
    }

    return 0;
}
