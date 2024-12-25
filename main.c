#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
int date,month,year,option,number,total1=0,total2=0,total3=0,total4=0,total5=0,total;
float time;
char ch;
void img()
{
    FILE *img;
    img=fopen("Bus img.txt","r");
    if(img==NULL)
    {
        printf("File doesn't available");

    }
    else{
        while(!feof(img))
        {
            ch=fgetc(img);
            printf("%c",ch);

        }
    }
}
void menu()
{ FILE *file;
    file = fopen("parking menu.txt", "r");
    if (file == NULL) {
        printf("File doesn't exist");
        return;
    }

    // Read and print characters from the file
    while ((ch = fgetc(file)) != EOF) //end of file
        {
        printf("%c", ch);
    }

    fclose(file);  // Don't forget to close the file
}

void parking_details()
{
    FILE *details;
    details=fopen("parking details.txt","r");
    if(details==NULL)
    {
        printf("File doesn't exist");
        return;
    }
    else
   {
        while(!feof(details))
        {

        ch=fgetc(details);
        printf("%c",ch);
        }
        fclose(details);


    }
}

int main()

{   system("color 0D");

    FILE *details;
    details=fopen("parking details.txt","a");

    printf("\nEnter Date to proceed ");
    printf("\n\tEnter Date: ");
    scanf("%d",&date);
    printf("\n\tEnter Month: ");
    scanf("%d",&month);
    printf("\n\tEnter Year: ");
    scanf("%d",&year);

    fprintf(details,"\n\tDate: %d %d %d",date,month,year);
    fprintf(details,"\n----------------------------------\n");
    system("CLS");
    while(1)
    {   img();
        menu();
        printf("\n\t\t Enter an option: ");
        scanf("%d",&option);
        FILE *details;
        details=fopen("parking details.txt","a");
        switch(option)
        {
        case 1:
            printf("\n Enter Time: ");
            scanf("%f",&time);
            printf("\n Enter registration number: ");
            scanf("%d",&number);

            total1 +=200;

            fprintf(details, "\t\tBus\t\t%.2f\t\t%d\t\t200\n",time,number);
            printf("\n\t Congratulations!Successfully added.");
            getch();
            system("CLS");
            break;
        case 2:

            printf("\n Enter Time: ");
            scanf("%f",&time);
            printf("\n Enter registration number: ");
            scanf("%d",&number);
            total2 +=150;

            fprintf(details, "\t\tCar\t\t%.2f\t\t%d\t\t150\n",time,number);
            printf("\n\t Congratulations!Successfully added.");
            getch();
            system("CLS");
            break;

        case 3:
            printf("\n Enter Time: ");
            scanf("%f",&time);
            printf("\n Enter registration number: ");
            scanf("%d",&number);

            total3 +=100;

            fprintf(details, "\t\tBike\t\t%.2f\t\t%d\t\t100\n",time,number);
            printf("\n\t Congratulations!Successfully added.");
            getch();
            system("CLS");
            break;

        case 4:
            printf("\n Enter Time: ");
            scanf("%f",&time);
            printf("\n Enter registration number: ");
            scanf("%d",&number);

            total4 +=80;

            fprintf(details, "\t\tCycle\t\t%.2f\t\t%d\t\t80\n",time,number);
            printf("\n\t Congratulations!Successfully added.");
            getch();
            system("CLS");
            break;

        case 5:
            printf("\n Enter Time: ");
            scanf("%f",&time);
            printf("\n Enter registration number: ");
            scanf("%d",&number);

            total5 +=300;

            fprintf(details, "\t\tTruck\t\t%.2f\t\t%d\t\t300\n",time,number);
            printf("\n\t Congratulations!Successfully added.");
            getch();
            system("CLS");
            break;
        case 6:
            system("CLS");
            parking_details();
            printf("\n\t Enter any key to get back to main menu!");
            getch();
            system("CLS");
            break;
        case 7:
            total=total1+total2+total3+total4+total5;
            fprintf(details,"\t\t\t\t\t\t\t\t\t\t\t Total =%d",total);
            fprintf(details,"\n--------------------------------------------------------------------------------------------------------\n");

            exit(0);
            break;
        default:
            printf("Invalid input");
            getch();//menu te back korar jonno
            printf("perss any key to get back to the main menu");
            system("CLS");
            break;

       }
    }
}
