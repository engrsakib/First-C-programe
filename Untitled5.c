#include<stdio.h>
void creator()
{
    printf("Creator Md. Nazmus Sakib, 01992547202");
}
int main()
{
    // name here
    printf("Enter Your Roll Number = ");
    int roll;
    scanf("%d", &roll);
    char sakib[] = "Md. Nazmus Sakib, Software Engineer";


    switch(roll)
    {
    default:
        printf("Your Data not found \n");
        break;
    case 124906:
        printf("Name: %s \n", sakib);
        break;
    case 124912:
        printf("Md. Rokibul Hassan, Web Devloper");
        break;
    case 124902:
        printf("Md. Sabbir Zoardar, web Designer");
        break;
    }
    creator();
    return 0;
}
