#include <stdio.h>
#include <conio.h>
void main()
{
    system("color A");
    int choice;
    int key;
    int i, j, k;
    int seat;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("========================================  Screen  ==============================================\n");
    printf("||                                                                                            ||\n");
    printf("||                                      1.   To Purchase Tickets                              ||\n");
    printf("||                                      2.   To Cancel Tickets                                ||\n");
    printf("||                                      3.   To View seats                                    ||\n");
    printf("||                                                                                            ||\n");
    printf("================================================================================================\n");
    printf("Press Number to Book movie tickets:");
    scanf("%d", &key);
    if (key == 1)
    {
        printf("===================================================  Screen  ==========================================\n");
        printf("||                                      1.   Avengers: EndGame                                       ||\n");
        printf("||                                      2.   Spider Man: No Way Home                                 ||\n");
        printf("||                                      3.   Multiverse of madness                                   ||\n");
        printf("||                                      4.   Murbious                                                ||\n");
        printf("||                                      5.   Avatar-1   (2009)                                       ||\n");
        printf("||                                      6.   Avatar-2: The way of water                              ||\n");
        printf("||                                      7.   The Lion King                                           ||\n");
        printf("||                                      8.   The Jungle Book                                         ||\n");
        printf("=======================================================================================================\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        if (choice == 1) // For Avenger
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : Avengers: EndGame\n");
                printf("\t\t\t                              Date      : 29-04-2019\n");
                printf("\t                                              Time      : 08:00pm\n");
                printf("\t                                              Hall      : 02\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t=============================================================\n");
            }
            else
            {
                printf("Sorry");
            }
        }

        else if (choice == 2) // For Spider man: No way home
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : Spider Man: No Way Home\n");
                printf("\t                                      Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Sorry");
            }
        }

        else if (choice == 3) // Multiverse of madness
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : Multiverse of madness\n");
                printf("\t                              Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Sorry");
            }
        }

        else if (choice == 4) // Murbious
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : Murbious\n");
                printf("\t                              Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Sorry");
            }
        }

        else if (choice == 5) // For Avatar-1 (2009)
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : Avatar-1(2009)n");
                printf("\t                              Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Invalid Inputs");
            }
        }

        else if (choice == 6) // For Avatar-2: The way of water
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : Avatar-2: The way of water\n");
                printf("\t                                          Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Invalid Inputs");
            }
        }


         else if (choice == 7) // For The Lion King  
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : The Lion King  \n");
                printf("\t                                          Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Invalid Inputs");
            }
        }

         else if (choice == 8) // For The Jungle Book 
        {
            k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
            printf("Which seat you want to book:");
            scanf("%d", &seat);
            if (seat <= 100 || seat >= 1)
            {
                printf("\n\n");
                printf("\t-----------------THEATER BOOKING TICKET----------------\n");
                printf("\t============================================================\n");
                printf("\t Booking ID : 12345678 \t\t\tShow Name : The Jungle Book \n");
                printf("\t                                          Date      : 29-04-2019\n");
                printf("\t                                              Time      : 07:00pm\n");
                printf("\t                                              Hall      : 03\n");
                printf("\t                                              seats No. :  %d\n", seat);
                printf("\t                                              price . : Rs.500  \n");
                printf("\t============================================================\n");
            }
            else
            {
                printf("Invalid Inputs");
            }
        }

        else
        {
            printf("\t\t  Sorry!!\n \tWe are working on it.");
        }
    }
    else
    {
        printf("\t\t  Sorry!!\n \tWe are working on it.");
    }
    getch();
}