//structures tutorials.
#include<stdio.h>
#include<string.h>
//c structs and pointers

struct person{
    int age;
    int weight;
};

int main(){
struct person *ptr, person1;//here we are using ptr as pointer.
ptr = &person1;
printf("enter age\n");
scanf("%d", &ptr->age);

printf("enter weight\n");
scanf("%d", &ptr->weight);

printf("age : %d\n", ptr->age);
printf("weight : %d", ptr->weight);
}
