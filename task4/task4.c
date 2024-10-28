#include <stdio.h>

int main() {
    int N[10];
    float avr=0, max=0, min=999999, sum =0;
    int i ;

    for (i = 0; i <= 9; i++) {
     printf("Enter the population of city %d in million: ", i);
      scanf("%d", &N[i]);
        sum += N[i];
        if (N[i] > max)
            max = N[i];

        if (N[i] < min)
            min = N[i];
    }

    avr = sum / 10;

    printf("\n Mean population: %.2f \n",avr );
    printf(" Maximum population: %.2f \n",max );
    printf(" Minimum population: %.2f \n",min );
    
    for (i=9; i>=0;i--) {
        printf("\npopulation of city %d : %d \n",i+1,N[i] );
    }
    


    return 0;
}
