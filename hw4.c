#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int studentID;
    float mathGrade;
    float physicsGrade;
    float englishGrade;
    float averageGrade;
};

void displayMainMenu();
void enterGrades();
void displayGrades();
void searchGrades();
void gradeRanking();
void exitSystem();
void clear_screen();
void displayHeader();
//�ӤH�ʭ� 
void displayHeader() {
    printf("eeeeeeeeeeeeeeeeeeeeeeeee\n");
    printf("1111111111111111111111111\n");
    printf("bbbbbbbbbbbbbbbbbbbbbbbbb\n");
    printf("4444444444444444444444444\n");
    printf("2222222222222222222222222\n");
    printf("eeeeeeeeeeeeeeeeeeeeeeeee\n");
    printf("1111111111111111111111111\n");
    printf("bbbbbbbbbbbbbbbbbbbbbbbbb\n");
    printf("4444444444444444444444444\n");
    printf("2222222222222222222222222\n");
    printf("eeeeeeeeeeeeeeeeeeeeeeeee\n");
    printf("1111111111111111111111111\n");
    printf("bbbbbbbbbbbbbbbbbbbbbbbbb\n");
    printf("4444444444444444444444444\n");
    printf("2222222222222222222222222\n");
    printf("eeeeeeeeeeeeeeeeeeeeeeeee\n");
    printf("1111111111111111111111111\n");
    printf("bbbbbbbbbbbbbbbbbbbbbbbbb\n");
    printf("4444444444444444444444444\n");
    printf("2222222222222222222222222\n");
}

struct Student students[10]; 
int numStudents = 0; 

int main() {
    displayHeader();

    int password, attempts = 0;

    while (attempts < 4) {
        printf("�п�J�K�X: ");
        scanf("%d", &password);

        if (password == 2024) {
            printf("�K�X���T\n");
            system("pause");
            displayMainMenu();
            break;
        } else {
            attempts++;
            printf("�K�X���~, �ѤU %d �����|\n", 4 - attempts);
        }
    }
    if (attempts == 4) {
        printf("�z�w��J��4���K�X�{�ǰh�X\n");
        return 0;
    }

    return 0;
}

void displayMainMenu() {
    char option;
    clear_screen();
    printf("\n------------[Grade System]----------\n");
    printf("| a. Enter student grades |\n");
    printf("| b. Display student grades |\n");
    printf("| c. Search for student grades |\n");
    printf("| d. Grade ranking |\n");
    printf("| e. Exit system |\n");
    printf("------------------------------------\n");

    printf("�п�ܥ\��G\n");
    scanf(" %c", &option);

}

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
