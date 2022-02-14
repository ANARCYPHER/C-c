#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//CODEWITHC.COM
int main()
{
    int x = 0;
    char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
    printf("Enter Your Name: ");
    scanf("%[^\n]", ch1);
    getchar();
    system("cls");
    printf("Welcome %s\n", ch1);
    printf("What is called as ' THE HOLY LAND'?\n");
    printf("a.Jerusalem\nb.Mathura\nc.Mecca");
    printf("\nEnter your answer: ");
    scanf("%c", &ch2);
    getchar();
    if(ch2=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE ROOF OF THE WORLD'?\n");
    printf("a.Nepal\nb.Rome\nc.Tibet");
    printf("\nEnter your answer: ");
    scanf("%c", &ch3);
    getchar();
    if(ch3=='c')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF RISING SUN'?\n");
    printf("a.Chicago\nb.Japan\nc.Tibet");
    printf("\nEnter your answer: ");
    scanf("%c", &ch4);
    getchar();
    if(ch4=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE GIFT OF NILE'?\n");
    printf("a.Chicago\nb.Egypt\nc.Africa");
    printf("\nEnter your answer: ");
    scanf("%c", &ch5);
    getchar();
    if(ch5=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF MIDNIGHT SUN'?\n");
    printf("a.Norway\nb.Japan\nc.Australia");
    printf("\nEnter your answer: ");
    scanf("%c", &ch6);
    getchar();
    if(ch6=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF THUNDERBOLT'?\n");
    printf("a.Bhutan\nb.Canada\nc.Arab");
    printf("\nEnter your answer: ");
    scanf("%c", &ch7);
    getchar();
    if(ch7=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE WINDY CITY?\n");
    printf("a.Jerusalem\nb.Japan\nc.Chicago");
    printf("\nEnter your answer: ");
    scanf("%c", &ch8);
    getchar();
    if(ch8=='c')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE LAND OF WHITE ELEPHANTS'?\n");
    printf("a.Bangladesh\nb.Thailand\nc.India");
    printf("\nEnter your answer: ");
    scanf("%c", &ch9);
    getchar();
    if(ch9=='b')
    {
        x = x + 10;
        printf("Good Job. Your score is %d\n", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE CITY OF SEVEN HILLS'?\n");
    printf("a.Rome\nb.Nilgiri Hills\nc.Tibet");
    printf("\nEnter your answer: ");
    scanf("%c", &ch10);
    getchar();
    if(ch10=='a')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }

    system("cls");
    printf("What is called as ' THE DARK CONTIENENT'?\n");
    printf("a.Asia\nb.Australia\nc.Africa");
    printf("\nEnter your answer: ");
    scanf("%c", &ch11);
    getchar();
    if(ch11=='c')
    {
        x = x + 10;
        printf("Good Job. Your score is %d", x);
        getchar();
    }
    else
    {
        printf("Sorry wrong answer.");
        getchar();
    }
    system("cls");
    if(x == 100) {
        printf("No cheating...... You have done this earlier also.");
    }
    if(x == 90){
        printf("You are extremely intelligent. Your Score is 90");
    }
    if(x == 80){
        printf("You are intelligent. Your Score is 80");
    }
    if(50 == x || x == 70 || x == 60) {
        printf("You are average. Your Score is %d. Better luck next time\n", x);
    }
    else if(x <= 40){
        printf("No use........ Not even 5 questions right");
    }

    return 0;

}
