// Create a struct student with  fields : id, name, marks[3] - input and print details of one student

#include <stdio.h>
struct student{
    int id;
    char name[50];
    float marks[3];
};
int main(){
    struct student s;
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf("%s", &s.name);
    printf("Enter marks for 3 subjects: ");
    for (int i = 0; i < 3; i++){
        scanf("%f", &s.marks[i]);
    }

    printf("\nStudent Details : \n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: ");
    for (int i = 0; i < 3; i++){
        printf("%.2f ", s.marks[i]);
    }

    return 0;
}