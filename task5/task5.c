#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int rgb_image[10][10][3]; 
    int grayscale_image[10][10]; 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            rgb_image[i][j][0] = rand() % 256; 
            rgb_image[i][j][1] = rand() % 256; 
            rgb_image[i][j][2] = rand() % 256;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int R = rgb_image[i][j][0];
            int G = rgb_image[i][j][1];
            int B = rgb_image[i][j][2];
           
            grayscale_image[i][j] = (int)(0.299 * R + 0.587 * G + 0.114 * B);
        }
    }
    printf("Original RGB Image (10x10):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("(%d, %d, %d)      ", rgb_image[i][j][0], rgb_image[i][j][1], rgb_image[i][j][2]);
        }
        printf("\n");
    }
    printf("\nConverted Grayscale Image (10x10):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", grayscale_image[i][j]);
        }
        printf("\n");
    }

    return 0;
}

