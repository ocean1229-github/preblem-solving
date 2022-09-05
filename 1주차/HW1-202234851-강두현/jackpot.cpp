#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char art[4][10] = { "BAR", "BELL", "LEMON", "CHERRY" };

#define RMAX 4

void main() {
    int slot1, slot2, slot3;
    char anykey;
    srand((unsigned int)time(0));
    while (1) {
        printf("Welcome to KW Land\n");
        printf("please pull the slot machine !!\n");
        scanf_s("%c", &anykey);

        slot1 = (int)rand() % RMAX;
        slot2 = (int)rand() % RMAX;
        slot3 = (int)rand() % RMAX;

        printf("First is %s\n", art[slot1]);
        printf("Second is %s\n", art[slot2]);
        printf("Third is %s\n\n", art[slot3]);


        if (slot1 == slot2 && slot2 == slot3 && slot1 == 3) {
            printf("Congratulations On A JACKPOT\n\n");
        }
        else if (slot1 == 3 || slot2 == 3 || slot3 == 3) {
            printf("Paid Out : One DIME\n\n");
        }
        else if (slot1 == slot2 && slot2 == slot3) {
            printf("Paid Out : One Nickel\n\n");
        }
        else {
            printf("Sorry.Better Luck Next Time\n\n");
        }
    }
}