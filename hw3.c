#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
    {
	system("cls"); //�M���e�ù� 

	printf("------------------------------\n");
	printf("-       [Booking System]     -\n");
	printf("-       a.Available seats    -\n");
	printf("-       b.Arrange for you    -\n"); 
	printf("-       c.Choose by yourself -\n");
	printf("-       d.Exit               -\n");
	printf("------------------------------\n");
	
	char choice;  

	printf("��Ja,b,c,d:");
	fflush(stdin);  //�M���Ȧs�� 
	scanf("%d", &choice);
	switch(choice) 
	{
		case'a':
			system("pause");
			system("CLS");
		case'b':
			printf("how many seats you need?");
			scanf("%d,&seats");
			 
		
	     
	}
}

    
    
    
    
    
    
    return 0;  
}

