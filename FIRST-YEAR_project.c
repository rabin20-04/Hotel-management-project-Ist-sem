#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> 

void enter();
void book();
void booked();
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int room[36] = {0};

struct name {
    char name[20];
    int room_no;
    int phone_number;
    char address[100];
    int Date_in;
    int month;
    int Date_out;
    char appc;
} s;

int main() {
    int a;
    while (1) {
        printf(" ---------------  WELCOME TO ERC HOTEL  ---------------                        \n");
        usleep(60000); 

        printf("+--------------------------------------------------------+\n");
        printf("|   1) View the number of Rooms                           |\n");
        printf("|   2) View booked room details                           |\n");
        printf("|   3) EXIT                                               |\n");
        printf("+---------------------------------------------------------+\n");

        usleep(60000);

        printf("   Enter:                                               \n");

        scanf("%d", &a);

        switch (a) {
        case 1:
            enter();
            break;

        case 2:
            booked();
            break;

        case 3:
            exit(0);
        }
    }

    return 0;
}

void enter() {
    char ch[] = "ERC HOTEL";
    printf("%40s   \n\n", ch);
    usleep(500000);

    clearScreen();

    printf("\n\t\t\t The category of room are \n");
    printf("+---------------------------------------------------------+\n");
    printf("|   VVIP ROOMS                                            |\n");
    printf("|   VIP ROOM                                              |\n");
    printf("|   NORMAL ROOM                                           |\n");
    printf("|                                                         |\n");
    printf("|   1) BOOK ROOM                                          |\n");
    printf("|   2) EXIT                                               |\n");
    printf("+-------------------------------------------------------+\n");

    int b;
    printf("ENTER :");
    scanf("%d", &b);

    switch (b) {
    case 1:
        book();
        break;

    case 2:
        break;
    }
}
    

void book() {
clearScreen();
    printf("  \n\n      The available rooms are                           \n");
    printf(" \n            WAIT....                                  \n");

    usleep(500000); 
    usleep(500000);

    printf("+-------------------------------------------------------+\n");
    printf("  VVIP ROOMS  :                             \n");

    for (int i = 1; i < 11; i++) {
        if (room[i] == 0) {
            printf("%d, ", i);
            usleep(2000);
        }
    }

    printf("  \n VIP ROOMS    :                             \n");

    for (int i = 11; i < 21; i++) {
        if (room[i] == 0) {
            printf("%d, ", i);
            usleep(200);
        }
    }

    printf(" \n  NORMAL ROOMS    :                          \n");

    for (int i = 22; i < 36; i++) {
        if (room[i] == 0) {
            printf("%d, ", i);
            usleep(200);
        }
    }
    printf("\n\n+-------------------------------------------------------+\n");
    int c;
    printf("\n\n  I WANT TO BOOK ROOM NUMBER :                          \n");
    scanf("%d", &c);
    room[c] = 1;

    printf("   ENTER YOUR NAME  :                                     \n");
    scanf("%s", &s.name);

    printf("   ENTER YOUR ADDRESS :                                   \n");
    scanf("%s", &s.address);

    printf("   ENTER YOUR PHONE NUMBER :                              \n");
    scanf("%d", &s.phone_number);

    printf("   ENTER THE MONTH :                                     \n");
    scanf("%d", &s.month);

    printf("   ENTER YOUR CHECK IN DATE :                             \n");
    scanf("%d", &s.Date_in);

    printf("   ENTER YOUR CHECK OUT DATE :                            \n");
    scanf("%d", &s.Date_out);
    printf("+-------------------------------------------------------+\n");

    FILE *fp1;
    fp1 = fopen("filedata.txt", "a");

    fprintf(fp1, " NAME  :%s\n", s.name);
    fprintf(fp1, " ADDRESS :%s\n", s.address);
    fprintf(fp1, " ROOM NUMBER :%d\n", c);
    fprintf(fp1, " PHONE NUMBER :%d\n", s.phone_number);
    fprintf(fp1, "CHECK IN MONTH :%d\n", s.month);
    fprintf(fp1, "CHECK IN DATE :%d\n", s.Date_in);
    fprintf(fp1, " CHECK OUT DATE :%d\n", s.Date_out);
    fprintf(fp1, "   ");
    fclose(fp1);

    usleep(100000);
    usleep(10000);

    printf("+-------------------------------------------------------------+\n");
    printf("|   CONGRATULATION  '%s'  YOU HAVE SUCESSFULLY BOOKED         |\n", s.name);
    printf("|              ROOM NO. %d                                     |\n", c);
    printf("+-------------------------------------------------------------+\n\n\n\n");
}

void booked() {
    char a;
    FILE *fp1;
    fp1 = fopen("filedata.txt", "r");
    while ((a = fgetc(fp1)) != EOF) {
        putchar(a);
    }
    fclose(fp1);
}
