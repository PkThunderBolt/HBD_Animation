#include <stdio.h>
#include <unistd.h>
#include <windows.h>
const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int PURPLE = 5;
const int YELLOW = 6;
const int WHITE = 15;
int ch[18] = {BLUE, GREEN, RED, PURPLE, YELLOW, WHITE, BLUE, GREEN, RED, PURPLE, YELLOW, WHITE, BLUE, GREEN, RED, PURPLE, YELLOW, WHITE};
int y = 18;

void changeColour(int colour)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
}
void delay(int z)
{
    Sleep(100);
    changeColour(ch[z++]);
}

int main()
{
    char ch = 124;
    system("CLS");
    printf("              ___ ___            <                         *+*+          <                ___ ___          *\n");
    sleep(1);
    printf("            -         -            >            *          %c%c%c%c            >             -        -           +\n", ch, ch, ch, ch);
    sleep(1);
    printf("          /             \\       <                         @@.@.@@        <             /            \\      *\n");
    sleep(1);
    printf("         |#              |        >           +          |'='='='|         >          |#             |      +           *\n");
    sleep(1);
    printf("         |#              |          *                   @@.@.@.@.@@          *        |#             |       +       <\n");
    sleep(1);
    printf("          \\ __  __  __  /      +                       |'='='='='='|     +             \\  __ __ __  /        *\n");
    sleep(1);
    printf("                ^                           *         @@.@.@.@.@.@.@@               *         ^             *\n");
    sleep(1);
    printf("              <          *           *               |'='='='='='='='|    *                  <        +               +\n");
    sleep(1);
    printf("                >              +           *        @@.@.@.@.@.@.@.@.@@               *        >             *\n");
    sleep(1);
    printf("              <                    *                                              *          <        *               +\n");
    sleep(1);
    printf("                >         +                 *                                                  >\n");
    sleep(1);

    int z = 0;
    while (y--)
    {
        int a1 = printf("       ___ ___       ________         ________         ________       ____    ____\n");
        int a2 = printf("      |   |   |     /         \\      |         \\      |         \\     \\   \\  /   /\n");
        int a3 = printf("      |   |   |    /           \\     |          \\     |          \\     \\   \\/   /\n");
        int a4 = printf("      |       |   |      _      |    |    _     /     |    _     /      \\      /\n");
        int a5 = printf("      |       |   |             |    |      ___/      |      ___/        \\    /\n");
        int a6 = printf("      |   |   |   |      |      |    |     |          |     |            /   /\n");
        int a7 = printf("      |___|___|   |______|______|    |_____|          |_____|           /___/\n");
        printf("\n");
        printf("\n");
        int a9 = printf("                                    _______         ____        ________         __________        ___ ___       _______         _________         ____    ____\n");
        int a10 = printf("                                   |       \\       |    |      |         \\      |          |      |   |   |     |       \\       /         \\        \\   \\  /   /\n");
        int a11 = printf("                                   |  __    \\      |    |      |         /      |_        _|      |   |   |     |        \\     /           \\        \\   \\/   /\n");
        int a12 = printf("                                   |        /      |    |      |     _  /          |    |         |       |     |    |    |   |      _      |        \\      /\n");
        int a13 = printf("                                   |  __    \\      |    |      |        \\          |    |         |       |     |    |    |   |             |         \\    /\n");
        int a14 = printf("                                   |        /      |    |      |    __   \\         |    |         |   |   |     |        /    |      |      |         /   /\n");
        int a15 = printf("                                   |_______/       |____|      |____   ___\\        |____|         |___|___|     |_______/     |______|______|        /___/\n");
        printf("\n");
        printf("\n");
        // sleep(1);
        Sleep(200);
        if (y != 0)
        {
            printf("\033M\033[%dC", 0);
            printf("\033M\033[%dC", 0);
            printf("\033M\033[%dC", a15 - 1);
            int q15 = a15 + 1;
            while (q15--)
                printf("\b \b");
            printf("\033M\033[%dC", a14 - 1);
            int q14 = a14 + 1;
            while (q14--)
                printf("\b \b");
            printf("\033M\033[%dC", a13 - 1);
            int q13 = a13 + 1;
            while (q13--)
                printf("\b \b");
            printf("\033M\033[%dC", a12 - 1);
            int q12 = a12 + 1;
            while (q12--)
                printf("\b \b");
            printf("\033M\033[%dC", a11 - 1);
            int q11 = a11 + 1;
            while (q11--)
                printf("\b \b");
            printf("\033M\033[%dC", a10 - 1);
            int q10 = a10 + 1;
            while (q10--)
                printf("\b \b");
            printf("\033M\033[%dC", a9 - 1);
            int q9 = a9 + 1;
            while (q9--)
                printf("\b \b");
            printf("\033M\033[%dC", 0);
            printf("\033M\033[%dC", 0);
            printf("\033M\033[%dC", a7 - 1);
            int q7 = a7 + 1;
            while (q7--)
                printf("\b \b");
            printf("\033M\033[%dC", a6 - 1);
            int q6 = a6 + 1;
            while (q6--)
                printf("\b \b");
            printf("\033M\033[%dC", a5 - 1);
            int q5 = a5 + 1;
            while (q5--)
                printf("\b \b");
            printf("\033M\033[%dC", a4 - 1);
            int q4 = a4 + 1;
            while (q4--)
                printf("\b \b");
            printf("\033M\033[%dC", a3 - 1);
            int q3 = a3 + 1;
            while (q3--)
                printf("\b \b");
            printf("\033M\033[%dC", a2 - 1);
            int q2 = a2 + 1;
            while (q2--)
                printf("\b \b");
            printf("\033M\033[%dC", a1 - 1);
            int q1 = a1 + 1;
            while (q1--)
                printf("\b \b");
        }
        delay(z++);
    }
    return 0;
}