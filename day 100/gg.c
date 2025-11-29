//Use pointer to struct to modify and display data using -> operator.//
#include <stdio.h>
#include <string.h> 
int main () 
{ 
    struct Student 
    { 
        char name[50]; 
        int age; 
        float marks; 
    }; 
      
    struct Student student1; 
    struct Student *ptr; 
    ptr = &student1; 
  
   
    strcpy(ptr->name, "John Doe"); 
    ptr->age = 20; 
    ptr->marks = 85.5; 
  
    printf("Name: %s\n", ptr->name); 
    printf("Age: %d\n", ptr->age); 
    printf("Marks: %.2f\n", ptr->marks); 
  
    return 0; 
}