#include <stdio.h>

int main() {
    int R, C;
    
    // Input the number of rows and columns
    printf("Enter number of rows (R) and columns (C): ");
    scanf("%d %d", &R, &C);

    int parkingLot[R][C];

    // Input the matrix
    printf("Enter the parking lot matrix (%d x %d) with values 0 or 1:\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &parkingLot[i][j]);

            // Check if input is only 0 or 1
            if (parkingLot[i][j] != 0 && parkingLot[i][j] != 1) {
                printf("Invalid input! Only 0 or 1 allowed.\n");
                return 1;
            }
        }
    }

    int maxCount = -1;
    int maxRowIndex = -1;

    // Find the row with the most 1s
    for (int i = 0; i < R; i++) {
        int count = 0;
        for (int j = 0; j < C; j++) {
            if (parkingLot[i][j] == 1) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxRowIndex = i;
        }
    }

    // Output the result
    if (maxRowIndex != -1) {
        printf("Row with the most full parking spaces: %d\n", maxRowIndex);
    } else {
        printf("No full parking spaces found.\n");
    }

    return 0;
}
