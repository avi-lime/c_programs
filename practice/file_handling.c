#include <stdlib.h>
#include <stdio.h>

const char FILENAME[20] = "data.txt";

struct Item
{
    char name[50];
    int price;
    int qty;
} I[50];

void display_data()
{
    FILE *fp;
    fp = fopen(FILENAME, "r");
    printf("\n%10s|%10s|%10s", "Name", "Price", "Quantity");
    printf("\n------------------------------");
    for (int i = 0; feof(fp) == 0; i++)
    {
        fread(&I[i], sizeof(I[i]), 1, fp);
        printf("\n%10s|%10d|%10d", I[i].name, I[i].price, I[i].qty);
    }
    fclose(fp);
    fp = NULL;
}

void enter_data()
{
    FILE *fp;
    fp = fopen(FILENAME, "w");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%d%d", &I[i].name, &I[i].price, &I[i].qty);
        fwrite(&I[i], sizeof(I[i]), 1, fp);
    }
    fclose(fp);
    fp = NULL;
}

void create_file()
{
}

void main()
{
    int choice;

    do
    {
        printf("\n1. Enter data.\n2. Display data.\n3. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enter_data();
            break;
        case 2:
            display_data();
            break;
        case 3:
            printf("Exited");
            break;
        default:
            printf("Invalid choice.");
            break;
        }
    } while (choice != 3);
}