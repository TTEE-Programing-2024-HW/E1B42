#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// 打印直角三角形
void printTriangle(char n) {
    int i, j, k, num;
    num = n - 'a' + 1;

    for (i = 0; i < num; i++) {
        for (j = 0; j <= i; j++)
            printf("%c", n + j);
        n--;
        for (k = num; k > i + 1; k--)
            printf(" ");
        printf("\n");
    }
}

// 打印乘法表
void printMultiplicationTable(int x) {
    int a, b;
    for (a = 1; a <= x; a++) {
        for (b = 1; b <= a; b++) {
            printf("%d*%d=%d ", a, b, a * b);
        }
        printf("\n");
    }
}

int main(void) {
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("11111111111111111111111111111111111111");
    puts("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB");
    puts("44444444444444444444444444444444444444");
    puts("22222222222222222222222222222222222222");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("11111111111111111111111111111111111111");
    puts("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB");
    puts("44444444444444444444444444444444444444");
    puts("22222222222222222222222222222222222222");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("11111111111111111111111111111111111111");
    puts("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB");
    puts("44444444444444444444444444444444444444");
    puts("22222222222222222222222222222222222222");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("11111111111111111111111111111111111111");
    puts("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB");
    puts("44444444444444444444444444444444444444");
    puts("22222222222222222222222222222222222222");
    system("pause");
    system("CLS");
    
    int password, a = 0, n, x; 
    while (a < 3) {
        printf("請輸入密碼:"); 
        scanf("%d", &password); 
        if (password == 2024) // 密碼是2024 
        {
            break;
        } else {
            a++;
            printf("密碼錯誤,剩下%d次機會\n", 3 - a); 
        }
    }
    if (a == 3) {
        printf("您已輸入錯3次密碼程序退出\n");
        return 0;
    } else {
        printf("密碼正確\n");
        system("pause");
        system("CLS"); // 清除螢幕
    }

    while (1) {
        puts("-----------------------------");
        puts("      a.畫出直角三角形       ");
        puts("      b.顯示乘法表           ");
        puts("      c.結束                 ");
        puts("------------------------------");
        fflush(stdin); 
        
        char option;
        printf("請選擇功能：");
        scanf(" %c", &option);

        switch (option) {
            case 'a':
                printf("請輸入一個'a'到'n'的字元：");
                char n;
                scanf(" %c", &n);
                while (n < 'a' || n > 'n') {
                    printf("請重新輸入一個'a'到'n'的字元：");
                    scanf(" %c", &n);
                }
                printTriangle(n);
                break;

            case 'b':
                printf("請輸入一個1~9的整數：");
                scanf("%d", &x);
                while (x < 1 || x > 9) {
                    printf("請重新輸入一個1~9的整數：");
                    scanf("%d", &x);
                }
                printMultiplicationTable(x);
                break;

            case 'c':
                printf("Continue?(y/n)\n");
                scanf(" %c", &option);
                if (option == 'N' || option == 'n') {
                    return 0;
                } else if (option != 'Y' && option != 'y') {
                    printf("錯誤訊息！\n");
                }
                break;
                return 0;

            default:
                printf("無效選項！\n");
        }
    }

    return 0;
}
//這次我做的十分痛苦許多地方都不知道怎麼用,我打程式習慣分開打把每個part用對後再合起來結果我一直和不起來，還有那個github我還是
//不知道怎麼用我照著講義上的做還是沒辦法上傳到github上我已經給它push了但是還是沒看到我有上傳成功所以我只好先把它傳到tronclass
//上 如果出現在github上就代表我最後成功了
