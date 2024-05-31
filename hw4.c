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
//個人封面 
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
        printf("請輸入密碼: ");
        scanf("%d", &password);

        if (password == 2024) {
            printf("密碼正確\n");
            system("pause");
            displayMainMenu();
            break;
        } else {
            attempts++;
            printf("密碼錯誤, 剩下 %d 次機會\n", 4 - attempts);
        }
    }
    if (attempts == 4) {
        printf("您已輸入錯4次密碼程序退出\n");
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

    printf("請選擇功能：\n");
    scanf(" %c", &option);

}

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
