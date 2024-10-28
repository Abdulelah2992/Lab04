#include <stdio.h>

int main() {
        int N, i ,j ;

        printf("Enter a Minutes N\n");
        scanf("%d",&N);

        for (i =0 ; i < N ; i++) {
                for (j=0; j<59 ;j++) {
                        printf("%02d : %02d \n",i,j);
                }
                 printf("%02d : %02d \n",i,j);

        }
        return 0;
}


