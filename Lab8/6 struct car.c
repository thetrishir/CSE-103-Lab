#include <stdio.h>
struct student
{
    char name[50];
    char model[50];
    int year;
    int amount;
};
int main()
{
    int i,num;
    printf("Enter How Much car Data you entry :");
    scanf("%d",&num);
    struct student accw[num];
    FILE *fptr;
    fptr = fopen("file.txt","wb");
    for(i = 0; i < num; ++i)
    {
        printf("\t\tEnter %d car details \n",i+1);
        fflush(stdin);
        printf("Enter name: ");
        gets(accw[i].name);
        printf("Enter model: ");
        gets(accw[i].model);
        printf("Enter year :");
        scanf("%d", &accw[i].year);
        printf("Enter amount :");
        scanf("%d", &accw[i].amount);
    }
    fwrite(accw, sizeof(accw), 1, fptr);
    fclose(fptr);
    fptr = fopen("file.txt", "rb");
    fread(accw, sizeof(accw), 1, fptr);
    printf("\n\n\t\t\tName \t\tmodel \t\tYear \t\tAmount\n");
    for(i = 0; i < num; ++i)
    {
        printf("\t\t\t%s \t\t%s \t\t%d \t\t%d",accw[i].name,accw[i].model,accw[i].year,accw[i].amount);
        printf("\n");
    }
    fclose(fptr);
}
