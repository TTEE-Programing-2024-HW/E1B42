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
    {
	system("cls"); //清除畫螢幕 

	printf("------------------------------\n");
	printf("-       [Booking System]     -\n");
	printf("-       a.Available seats    -\n");
	printf("-       b.Arrange for you    -\n"); 
	printf("-       c.Choose by yourself -\n");
	printf("-       d.Exit               -\n");
	printf("------------------------------\n");
	
	char choice;  

	printf("輸入a,b,c,d:");
	fflush(stdin);  //清除暫存區 
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

