#include<stdio.h>
void callPostCode(){

    int postcode[] = {23000,24000,25000,26000};
    int count = sizeof(postcode) / sizeof(postcode[0]);
    printf("count: %d\n", count);
    
    for (int i = 0; i < count-2; i++)
    {
        printf("post code: %d\n", postcode[i]);
    }
}
void student(){
    
}