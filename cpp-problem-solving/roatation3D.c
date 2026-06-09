#include <stdio.h>

int main() {
    int matrix[3][3][3];
    int result[3][3][3];
    char axis;

    // Input the 3󫢫 matrix
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                scanf("%d", &matrix[x][y][z]);
            }
        }
    }

    // Input axis
    scanf(" %c", &axis);

    // Rotation based on axis
    if (axis == 'X' || axis == 'x') {
        // Rotate around X-axis
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                for (int z = 0; z < 3; z++) {
                    result[x][y][z] = matrix[x][2 - z][y];
                }
            }
        }
    }
    else if (axis == 'Y' || axis == 'y') {
        // Rotate around Y-axis
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                for (int z = 0; z < 3; z++) {
                    result[x][y][z] = matrix[2 - z][y][x];
                }
            }
        }
    }
    else if (axis == 'Z' || axis == 'z') {
        // Rotate around Z-axis
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                for (int z = 0; z < 3; z++) {
                    result[x][y][z] = matrix[y][2 - x][z];
                }
            }
        }
    }
    else {
        printf("Invalid");
        return 0;
    }

    // Output rotated matrix
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                printf("%d ", result[x][y][z]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
