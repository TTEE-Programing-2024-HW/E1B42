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

void searchGrades() {
    clear_screen();
    char searchName[100];
    printf("請輸入要搜尋的姓名：\n");
    scanf("%s", searchName);

    int found = 0;
    int i;
    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("姓名 學號 數學 物理 英文 平均成績\n");
            printf("%s %d %.1f %.1f %.1f %.1f\n", students[i].name, students[i].studentID, students[i].mathGrade, students[i].physicsGrade, students[i].englishGrade, students[i].averageGrade);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("找不到！\n");
    }

    printf("按任意鍵返回主選單...\n");
    getchar();
    getchar(); 
    displayMainMenu();
}

void gradeRanking() {
    clear_screen();
    int i, j;
    for (i = 0; i < numStudents - 1; ++i) {
        for (j = 0; j < numStudents - i - 1; ++j) {
            if (students[j].averageGrade < students[j + 1].averageGrade) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < numStudents; ++i) {
        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n",students[i].name, students[i].studentID, students[i].averageGrade);
    }
    printf("按任意鍵返回主選單...\n");
    getchar(); 
    getchar(); 
    clear_screen();
    displayMainMenu(); 
}

void exitSystem() {
    clear_screen();
    char confirm;
    printf("是否離開？ (y/n)\n");
    scanf(" %c", &confirm);

    if (confirm == 'y') {
        printf("程式結束\n");
        exit(0);
    } else if (confirm == 'n') {
        displayMainMenu();
    } else {
        printf("輸入錯誤，請重新選擇功能！\n");
        exitSystem();
    }
}

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}//在打這次的程式中我覺得我比以前稍微有了點進步，我終於知道要如何使用致個程式，雖然我在打的途中還是經歷了許多的錯誤
//也不斷地去看老師的講義和詢問同學，這次用到了許多以前學過的東西只不過把它麼混合再了一起，我相信只要我不斷地去複習
//老師上課所教的東西我相信我下一次的程式練習一定可以打得更好更快速，而這次最大的難題我覺得是列印平均，因為我的平均
//沒有學好所以我找了很久最終才完成。 
