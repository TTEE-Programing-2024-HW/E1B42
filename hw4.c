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
    printf("             [Grade System]            \n");
    printf("|       a. Enter student grades       |\n");
    printf("|       b. Display student grades     |\n");
    printf("|       c. Search for student grades  |\n");
    printf("|       d. Grade ranking              |\n");
    printf("|        e. Exit system               |\n");
    printf("                                       \n");

    printf("請選擇功能：\n");
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
            printf("輸入錯誤！\n");
            displayMainMenu();
    }
}

void enterGrades() {
    clear_screen();
    int n;
    printf("輸入學生人數 n (5~10)：\n");
    scanf("%d", &n);

    if (n < 5 || n > 10) {
        printf("輸入錯誤，請輸入 5 到 10 之間的數字！\n");
        enterGrades();
        return;
    }

    int i;
    for (i = 0; i < n; i++) {
        printf("請輸入第 %d 位學生的姓名：\n", i+1);
        scanf("%s", students[numStudents].name);
        printf("請輸入學號：\n");
        scanf("%d", &students[numStudents].studentID);
        printf("請輸入數學成績：\n");
        scanf("%f", &students[numStudents].mathGrade);
        printf("請輸入物理成績：\n");
        scanf("%f", &students[numStudents].physicsGrade);
        printf("請輸入英文成績：\n");
        scanf("%f", &students[numStudents].englishGrade);
        students[numStudents].averageGrade = (students[numStudents].mathGrade + students[numStudents].physicsGrade + students[numStudents].englishGrade) / 3.0;
        numStudents++;
    }

    printf("資料輸入完畢\n");
    displayMainMenu();
}

void displayGrades() {
    clear_screen();
    printf("學生姓名 學號 數學 物理 英文 平均成績\n");
    int i;
    for (i = 0; i < numStudents; i++) {
        printf("%s  %d %.1f %.1f %.1f %.1f\n", students[i].name, students[i].studentID, students[i].mathGrade, students[i].physicsGrade, students[i].englishGrade, students[i].averageGrade); 
    }
    printf("按任意鍵返回主選單\n");
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
