#include <stdio.h>

void inputAndShow(void);

int main(void) {
    inputAndShow();

    return 0;
}

void inputAndShow(void) {
    int math, physics, chemistry;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    printf("Math = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
}
