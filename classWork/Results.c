#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>

bool Reasonable_judgment(int temp)
{
    if (temp <= 100 && temp > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int score = 0;
    char grade = 'A';
    bool legality;

    // 本模块起到的作用是检测输入的值是否合理，最终输出的是一个合理的Input_Number(数组元素个数)
    while (1)
    {
        printf("pls input score = ");
        scanf("%d", &score);

        legality = Reasonable_judgment(score);
        if (legality)
        {
            break;
        }
        printf("Error: The score you entered is incorrect, please resubmit \n");

        Sleep(2000);
        system("cls");
    }

    // 从上往下
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 70)
    {
        grade = 'B';
    }
    else if (score >= 60)
    {
        grade = 'C';
    }
    else
    {
        grade = 'D';
    }

    // 从下往上
    if (score < 60)
    {
        grade = 'D';
    }
    else if (score < 70)
    {
        grade = 'C';
    }
    else if (score < 90)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }

    printf("score = %d , grade = %c \n\n", score, grade);

    system("puase");

    return 0;
}