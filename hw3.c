#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define ROWS 9
#define COLS 9

void displayHeader() {
    printf("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
    printf("11111111111111111111111111111111111111\n");
    printf("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n");
    printf("44444444444444444444444444444444444444\n");
    printf("22222222222222222222222222222222222222\n");
    printf("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
    printf("11111111111111111111111111111111111111\n");
    printf("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n");
    printf("44444444444444444444444444444444444444\n");
    printf("22222222222222222222222222222222222222\n");
    printf("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
    printf("11111111111111111111111111111111111111\n");
    printf("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n");
    printf("44444444444444444444444444444444444444\n");
    printf("22222222222222222222222222222222222222\n");
}

void printSeating(char seating[ROWS][COLS]) {
    printf("   123456789\n");
    int i, j;
    for (i = 0; i < ROWS; ++i) {
        printf("%d ", i + 1);
        for (j = 0; j < COLS; ++j) {
            printf("%c", seating[i][j]);
        }
        printf("\n");
    }
}

void generateRandomReservations(char seating[ROWS][COLS]) {
    srand(time(0));
    int count = 10;
    while (count > 0) {
        int r = rand() % ROWS;
        int c = rand() % COLS;
        if (seating[r][c] == '-') {
            seating[r][c] = '*';
            count--;
        }
    }
}

int suggestSeats(char seating[ROWS][COLS], int numSeats) {
    int i, j, k;
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j <= COLS - numSeats; ++j) {
            int available = 1;
            for (k = 0; k < numSeats; ++k) {
                if (seating[i][j + k] != '-') {
                    available = 0;
                    break;
                }
            }
            if (available) {
                for (k = 0; k < numSeats; ++k) {
                    seating[i][j + k] = '@';
                }
                return 1;
            }
        }
    }
    if (numSeats == 4) {
        for (i = 0; i < ROWS - 1; ++i) {
            for (j = 0; j < COLS - 1; ++j) {
                if (seating[i][j] == '-' && seating[i + 1][j] == '-' && seating[i][j + 1] == '-' && seating[i + 1][j + 1] == '-') {
                    seating[i][j] = '@';
                    seating[i + 1][j] = '@';
                    seating[i][j + 1] = '@';
                    seating[i + 1][j + 1] = '@';
                    return 1;
                }
            }
        }
    }
    return 0;
}

void manualReservation(char seating[ROWS][COLS]) {
    char input[10];
    while (1) {
        printf("Enter seat (1-2) or 'done' to finish: ");
        scanf("%s", input);
        if (strcmp(input, "done") == 0) break;
        if (strlen(input) != 3 || input[1] != '-' || !isdigit(input[0]) || !isdigit(input[2])) {
            printf("Invalid input format. Try again.\n");
            continue;
        }
        int row = input[0] - '1';
        int col = input[2] - '1';
        if (row < 0 || row >= ROWS || col < 0 || col >= COLS || seating[row][col] != '-') {
            printf("Invalid seat selection. Try again.\n");
            continue;
        }
        seating[row][col] = '@';
        printSeating(seating);
    }
    printf("Are you satisfied with the selection? (y/n): ");
    char confirmation;
    scanf(" %c", &confirmation);
    if (confirmation == 'n') {
        int i, j;
        for (i = 0; i < ROWS; ++i) {
            for (j = 0; j < COLS; ++j) {
                if (seating[i][j] == '@') {
                    seating[i][j] = '-';
                }
            }
        }
    } else {
        int i, j;
        for (i = 0; i < ROWS; ++i) {
            for (j = 0; j < COLS; ++j) {
                if (seating[i][j] == '@') {
                    seating[i][j] = '*';
                }
            }
        }
    }
}

void handleOptionD() {
    while (1) {
        printf("Continue? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'y') {
            return;
        } else if (choice == 'n') {
            exit(0);
        } else {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
}

int main() {
    displayHeader();

    system("pause");

    int password, attempts = 0;

    while (attempts < 3) {
        printf("�п�J�K�X: ");
        scanf("%d", &password);

        if (password == 2024) {
            printf("�K�X���T\n");
            system("pause");
            break;
        } else {
            attempts++;
            printf("�K�X���~, �ѤU %d �����|\n", 3 - attempts);
        }
    }
    if (attempts == 3) {
        printf("�z�w��J��3���K�X�{�ǰh�X\n");
        return 0;
    }

    char seating[ROWS][COLS];
    int i, j;
    for (i = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            seating[i][j] = '-';
        }
    }
    generateRandomReservations(seating);

    while (1) {
        printf("------------------------------\n");
        printf("-       [Booking System]     -\n");
        printf("-       a.Available seats    -\n");
        printf("-       b.Arrange for you    -\n");
        printf("-       c.Choose by yourself -\n");
        printf("-       d.Exit               -\n");
        printf("------------------------------\n");
        char choice;
        scanf(" %c", &choice);
        
        switch (choice) {
            case 'a':
                system("cls");
                printSeating(seating);
                printf("Press any key to return to menu...");
                getchar(); getchar();
                system("cls");
                break;

            case 'b': {
                system("cls");
                int numSeats;
                printf("How many seats do you need? (1-4): ");
                scanf("%d", &numSeats);
                if (numSeats < 1 || numSeats > 4) {
                    printf("Invalid number of seats. Try again.\n");
                    break;
                }
                char tempSeating[ROWS][COLS];
                for (i = 0; i < ROWS; ++i) {
                    for (j = 0; j < COLS; ++j) {
                        tempSeating[i][j] = seating[i][j];
                    }
                }
                if (suggestSeats(tempSeating, numSeats)) {
                    printSeating(tempSeating);
                    printf("Are you satisfied with the suggestion? (y/n): ");
                    char satisfaction;
                    scanf(" %c", &satisfaction);
                    if (satisfaction == 'y') {
                        for (i = 0; i < ROWS; ++i) {
                            for (j = 0; j < COLS; ++j) {
                                if (tempSeating[i][j] == '@') {
                                    seating[i][j] = '*';
                                }
                            }
                        }
                    }
                } else {
                    printf("No available seats found for your request.\n");
                }
                system("cls");
                break;
            }

            case 'c':
                system("cls");
                manualReservation(seating);
                system("cls");
                break;

            case 'd':
                system("cls");
                handleOptionD();
                system("cls");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }
        

    }

    return 0;
}
//�b�����o�����@�~��ڵo�{�ڼg�{���g�o���}���A�ܦh���a��Ѯv�Ч��ڧڴN�ѰO�F�ɭP�ګܦh�F�賣�@���b��
//�Ӧb�����o���{���ھǨ�F�\�h�F��åB�z�L�o�����m�����ڧ�[�a�F�Ѩ�p��h���{���A�{�����޿�n�p��B
//�ΡA�F�Ѩ�F�ۤv�\�h���������B�A�]�h�����W�ݤF�\�h���оǼv���Ǩ�F�ܦh�F��A���M�ڲ{�b�٬O�若�{��
//�譱�٬O�ӵ������O�ڬ۫H���[�F�h�m�ߤ@�w�i�H��[�a�����M�ֳt�a�����{�����s�� 
