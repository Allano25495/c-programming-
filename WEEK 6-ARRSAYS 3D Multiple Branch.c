#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chain[3][5][10];
    int i, j, k;
    int totalOccupied = 0;

    srand(time(0));

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(k = 0; k < 10; k++)
            {
                chain[i][j][k] = rand() % 2;

                if(chain[i][j][k] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    printf("Hotel Chain Occupancy Report\n\n");

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}