#include <stdio.h>

int main()
{
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;

    printf("Hotel Room Occupancy System\n\n");

    printf("Enter room status (1 = Occupied, 0 = Vacant)\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("Floor %d\n", i + 1);

        for(j = 0; j < 10; j++)
        {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }

        printf("\n");
    }

    printf("\nRoom Occupancy Report\n\n");

    for(i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for(j = 0; j < 10; j++)
        {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d - Occupied: %d  Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}