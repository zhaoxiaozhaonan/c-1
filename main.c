#include <stdio.h>

int main()
{

    printf("进入存钱取钱管理系统\n");
    int qian = 0;
    int cun;
    int qu;
    int yue;
    while (1)
    {
        int code = 0;
        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额查询\n");
        printf("4--退出\n");
        printf("请输入所需项目符号\n");
        scanf("%d", &code);

        if (code == 1)
        {
            char x;
            printf("请输入要存入的金额\n");
            scanf("%d", &cun);
            qian += cun;
            printf("存钱成功，点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {
            char x;
            printf("请输入要取出的金额\n");
            scanf("%d", &qu);

            if (qu <= qian)
            {
                printf("取钱成功，点击回车继续\n");
                yue = qian - qu;
            }
            else
            {
                printf("取钱失败，点击回车继续\n");
            }
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 3)
        {
            char x;
            printf("您的余额为%d\n", yue);
            printf("点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            printf("点击回车，退出系统\n");
            break;
        }
    }

    return 0;
}