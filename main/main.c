#include <stdio.h>
void displayMovies();
void displaySeatMap(int seats[]);

int main() {
    int movie, seat;
    int seats[30] = {0};
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
    
    // Display the movie list and get user input
    displayMovies();
    scanf("%d", &movie);
    
    // Display the seat map and get user input
    displaySeatMap(seats);
    printf("Enter seat number: ");
    scanf("%d", &seat);
    
    // Book the seat if available
    if (seats[seat-1] == 0) {
        seats[seat-1] = 1;
        printf("Seat booked for movie %d at seat number %d\n", movie, seat);
    } else {
        printf("Seat not available\n");
    }
    
    return 0;
}

void displayMovies() {
    printf("===================================================  Screen  ==========================================\n");
    printf("||                                      1.   Avengers: EndGame                                       ||\n");
    printf("||                                      2.   Spider Man: Far From Home                               ||\n");
    printf("||                                      3.   Black Panther                                           ||\n");
    printf("||                                      4.   Wonder Women 1984                                       ||\n");
    printf("||                                      5.   Avatar-1   (2009)                                       ||\n");
    printf("||                                      6.   Avatar-2: The way of water                              ||\n");
    printf("||                                      7.   The Lion King                                           ||\n");
    printf("||                                      8.   The Jungle Book                                         ||\n");
    printf("=======================================================================================================\n");
}

// Function to display the seat map
void displaySeatMap(int seats[]) {
    printf("\nSeats:\n");
    k = 1;
            for (i = 1; i <= 10; i++)
            {
                for (j = 1; j <= 10; j++, k++)
                {
                    printf("\t%d", k);
                }
                printf("\n\n");
            }
}
