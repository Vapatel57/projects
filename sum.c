#include<stdio.h>
#include<string.h>

struct studentdata {
    char name[100];
    int roll;
    char branch;
};

int main(){
    struct studentdata s1;
    printf("Enter name of student : ");
    scanf("%s",s1.name);
    printf("Enter roll no : ");
    scanf("%d" ,s1.roll);
    printf("Enter branch : ");
    scanf("%c",s1.branch);

    printf("Name : %s \n Roll no : %d \n branch : %c \n",s1.name,s1.roll,s1.branch);
    return 0;
}