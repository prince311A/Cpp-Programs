#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int yourresult(char me, char comp)
{
    if (me == comp)
    {
        return 0;
    }
    else if (me == 'S' && comp == 's' || me == 'R' && comp == 'r' || me == 'P' && comp == 'p')
    {
        return 9;
    }
    else if (me == 'r' && comp == 'p' || me == 'R' && comp == 'p')
    {
        return -1;
    }
    else if (me == 'p' && comp == 'r' || me == 'P' && comp == 'r')
    {
        return 1;
    }
    else if ((me == 'r' && comp == 's') || (me == 'R' && comp == 's'))
    {
        return 1;
    }
    else if (me == 's' && comp == 'r' || me == 'S' && comp == 'r')
    {
        return -1;
    }
    else if (me == 'p' && comp == 's' || me == 'P' && comp == 's')
    {
        return -1;
    }
    else if (me == 's' && comp == 'p' || me == 'S' && comp == 'p')
    {
        return 1;
    }
}
int main()
{
    char me;
    char comp;
    // comp = 'p';
    int result;
    cout << "WELCOME TO THE GAME" << endl
         << "ROCK PAPER SCISSOR" << endl
         << "Game Decision::::::" << endl
         << "Rock vs Paper --> Paper" << endl
         << "Rock vs Scissor --> Rock" << endl
         << "Paper vs Scissor --> Scissor" << endl
         << "To Quit the game pressed 'X' or 'x'" << endl;
    while (1)
    {
        srand(time(0));
        int number = rand() % 99 + 1;
        if (number < 33)
        {
            comp = 's';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'r';
        }
        else
        {
            comp = 'p';
        }

        cout << "Enter 'r' for rock, 'p' for paper and 's' for scissor" << endl;
        cin >> me;
        result = yourresult(me, comp);
        if (result == 1)
        {
            cout << "You are the winner" << endl;
        }
        else if (result == -1)
        {
            cout << "UPPS You Loose" << endl;
        }
        else if (result == 0 || result == 9)
        {
            cout << "SMART Try Once Again" << endl;
        }
        else if (me == 'X' || me == 'x')
        {
            exit(1);
        }
        else
        {
            cout << "Wrong key pressed please enter valid character" << endl;
        }
        cout << "You choose " << me << " AND Computer choose " << comp << endl;
    }
    return 0;
}