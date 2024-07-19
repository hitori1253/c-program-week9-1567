#include<stdio.h>
#include<string.h>
int callUseName(){
    char firstName[]="";
    char lastName[]="";
    printf("enter strings of First name:");
    scanf("%s", firstName);

    printf("enter strings of last name:");
    scanf("%s", lastName);

    printf("%s",firstName , lastName);
    return 0;
}