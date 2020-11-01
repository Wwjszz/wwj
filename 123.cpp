#include <iostream>
using namespace std;

int main()
{
    //start the game (as we input y by default)
    char key = 'Y';
    while (key == 'Y' || key == 'y')
    {
        //ask to insert a number
        cout << "To guess, insert a number.\n";
        int times = 0;
        int guess;
        int num = (2)stdin; //use stdin as a random number
        cin >> guess;

        //compare the number inserted and the random number, give hint and keep track of the times used.
        while (guess != num && times <= 6)
        {
            if (guess < num)
            {
                cout << "Too small.\nTry again:";
            }
            else
            {
                cout << "Too big.\nTry again:";
            }
            times++;
            cin >> guess;
        }

        //give result according to times used
        if (times == 1)
        {
            cout << "Bingo!\n";
        }
        else if (times <= 3)
        {
            cout << "lucky You!\n";
        }
        else if (times < 6)
        {
            cout << "Good Guess!\n";
        }
        else
        {
            cout << "Game Over\n";
        }

        //ask for another round
        cout << "Do you wanna play again? If yes, press Y or y. Otherwise press N or n.\n";
        cin >> key;
        while (!(key == 'Y' || key == 'y' || key == 'N' || key == 'n'))
        {
            if (key == 'N' || key == 'n')
            {

            }
            else
            {
                cout << "Invalid input, please try again: to play again, press Y or y, otherwise press N or n.\n";
            }
            cin >> key;
        }


    }

    return 0;
}
