//Use malloc() to allocate structure memory dynamically and print details.//
#include <stdio.h>
#include <stdlib.h>     
int main ()
{
    struct student
    {
        int id;
        char name[20];
        float marks;
    };
    struct student *s;
    s = (struct student*)malloc(sizeof(struct student));
    s->id = 1;
    snprintf(s->name, sizeof(s->name), "John Doe");
    s->marks = 95.5;
    printf("Student ID: %d\n", s->id);
    printf("Student Name: %s\n", s->name);
    printf("Student Marks: %.2f\n", s->marks);
    free(s);
    return 0;
}