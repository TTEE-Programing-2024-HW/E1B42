#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// ���L�����T����
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

// ���L���k��
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
        printf("�п�J�K�X:"); 
        scanf("%d", &password); 
        if (password == 2024) // �K�X�O2024 
        {
            break;
        } else {
            a++;
            printf("�K�X���~,�ѤU%d�����|\n", 3 - a); 
        }
    }
    if (a == 3) {
        printf("�z�w��J��3���K�X�{�ǰh�X\n");
        return 0;
    } else {
        printf("�K�X���T\n");
        system("pause");
        system("CLS"); // �M���ù�
    }

    while (1) {
        puts("-----------------------------");
        puts("      a.�e�X�����T����       ");
        puts("      b.��ܭ��k��           ");
        puts("      c.����                 ");
        puts("------------------------------");
        fflush(stdin); 
        
        char option;
        printf("�п�ܥ\��G");
        scanf(" %c", &option);

        switch (option) {
            case 'a':
                printf("�п�J�@��'a'��'n'���r���G");
                char n;
                scanf(" %c", &n);
                while (n < 'a' || n > 'n') {
                    printf("�Э��s��J�@��'a'��'n'���r���G");
                    scanf(" %c", &n);
                }
                printTriangle(n);
                break;

            case 'b':
                printf("�п�J�@��1~9����ơG");
                scanf("%d", &x);
                while (x < 1 || x > 9) {
                    printf("�Э��s��J�@��1~9����ơG");
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
                    printf("���~�T���I\n");
                }
                break;
                return 0;

            default:
                printf("�L�Ŀﶵ�I\n");
        }
    }

    return 0;
}
//�o���ڰ����Q���h�W�\�h�a�賣�����D����,�ڥ��{���ߺD���}����C��part�ι��A�X�_�ӵ��G�ڤ@���M���_�ӡA�٦�����github���٬O
//�����D���Χڷӵ����q�W�����٬O�S��k�W�Ǩ�github�W�ڤw�g����push�F���O�٬O�S�ݨ�ڦ��W�Ǧ��\�ҥH�ڥu�n���⥦�Ǩ�tronclass
//�W �p�G�X�{�bgithub�W�N�N��ڳ̫ᦨ�\�F
