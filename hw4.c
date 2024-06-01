#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int studentID;
    float mathGrade;
    float physicsGrade;
    float englishGrade;
    float averageGrade;
} Student;

void displayMainMenu();
void enterGrades();
void displayGrades();
void searchGrades();
void gradeRanking();
void exitSystem();
void clear_screen();
void displayHeader();

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

Student students[10]; 
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
    printf("             [Grade System]            \n");
    printf("|       a. Enter student grades       |\n");
    printf("|       b. Display student grades     |\n");
    printf("|       c. Search for student grades  |\n");
    printf("|       d. Grade ranking              |\n");
    printf("|        e. Exit system               |\n");
    printf("                                       \n");

    printf("�п�ܥ\��G\n");
    scanf(" %c", &option);

    switch(option) {
        case 'a':
            enterGrades();
            break;
        case 'b':
            displayGrades();
            break;
        case 'c':
            searchGrades();
            break;
        case 'd':
            gradeRanking();
            break;
        case 'e':
            exitSystem();
            break;
        default:
            printf("��J���~�I\n");
            displayMainMenu();
    }
}

void enterGrades() {
    clear_screen();
    int n;
    printf("��J�ǥͤH�� n (5~10)�G\n");
    scanf("%d", &n);

    if (n < 5 || n > 10) {
        printf("��J���~�A�п�J 5 �� 10 �������Ʀr�I\n");
        enterGrades();
        return;
    }

    int i;
    for (i = 0; i < n; i++) {
        printf("�п�J�� %d ��ǥͪ��m�W�G\n", i+1);
        scanf("%s", students[numStudents].name);
        printf("�п�J�Ǹ��G\n");
        scanf("%d", &students[numStudents].studentID);
        printf("�п�J�ƾǦ��Z�G\n");
        scanf("%f", &students[numStudents].mathGrade);
        printf("�п�J���z���Z�G\n");
        scanf("%f", &students[numStudents].physicsGrade);
        printf("�п�J�^�妨�Z�G\n");
        scanf("%f", &students[numStudents].englishGrade);
        students[numStudents].averageGrade = (students[numStudents].mathGrade + students[numStudents].physicsGrade + students[numStudents].englishGrade) / 3.0;
        numStudents++;
    }

    printf("��ƿ�J����\n");
    displayMainMenu();
}

void displayGrades() {
    clear_screen();
    printf("�ǥͩm�W �Ǹ� �ƾ� ���z �^�� �������Z\n");
    int i;
    for (i = 0; i < numStudents; i++) {
        printf("%s  %d %.1f %.1f %.1f %.1f\n", students[i].name, students[i].studentID, students[i].mathGrade, students[i].physicsGrade, students[i].englishGrade, students[i].averageGrade); 
    }
    printf("�����N���^�D���\n");
    getchar();
    getchar(); 
    displayMainMenu();
}


void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
