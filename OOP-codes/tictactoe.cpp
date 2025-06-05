#include <iostream>
using namespace std;

char gameBoard[10]={'o','1','2','3','4','5','6','7','8','9'};

int checkGameWinner();
void showGameBoard();

int main()
{
	int playerNum=1,i,choice;

    char sign;
    do
    {
        showGameBoard();
        playerNum=(playerNum%2)?1:2;

        cout << "Player " << playerNum << ", enter a number:  ";
        cin >> choice;

        sign=(playerNum == 1) ? 'X' : 'O';

        if (choice == 1 && gameBoard[1] == '1')

            gameBoard[1] = sign;
        else if (choice == 2 && gameBoard[2] == '2')

            gameBoard[2] = sign;
        else if (choice == 3 && gameBoard[3] == '3')

            gameBoard[3] = sign;
        else if (choice == 4 && gameBoard[4] == '4')

            gameBoard[4] = sign;
        else if (choice == 5 && gameBoard[5] == '5')

            gameBoard[5] = sign;
        else if (choice == 6 && gameBoard[6] == '6')

            gameBoard[6] = sign;
        else if (choice == 7 && gameBoard[7] == '7')

            gameBoard[7] = sign;
        else if (choice == 8 && gameBoard[8] == '8')

            gameBoard[8] = sign;
        else if (choice == 9 && gameBoard[9] == '9')

            gameBoard[9] = sign;
        else
        {
            cout<<"Invalid move ";

            playerNum--;
            cin.ignore();
            cin.get();
        }
        i=checkGameWinner();

        playerNum++;
    }while(i==-1);
    showGameBoard();
    if(i==1)

        cout<<"==>\aPlayer "<<--playerNum<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}
int checkGameWinner()
{
    if (gameBoard[1] == gameBoard[2] && gameBoard[2] == gameBoard[3])

        return 1;
    else if (gameBoard[4] == gameBoard[5] && gameBoard[5] == gameBoard[6])

        return 1;
    else if (gameBoard[7] == gameBoard[8] && gameBoard[8] == gameBoard[9])

        return 1;
    else if (gameBoard[1] == gameBoard[4] && gameBoard[4] == gameBoard[7])

        return 1;
    else if (gameBoard[2] == gameBoard[5] && gameBoard[5] == gameBoard[8])

        return 1;
    else if (gameBoard[3] == gameBoard[6] && gameBoard[6] == gameBoard[9])

        return 1;
    else if (gameBoard[1] == gameBoard[5] && gameBoard[5] == gameBoard[9])

        return 1;
    else if (gameBoard[3] == gameBoard[5] && gameBoard[5] == gameBoard[7])

        return 1;
    else if (gameBoard[1] != '1' && gameBoard[2] != '2' && gameBoard[3] != '3' && gameBoard[4] != '4' && gameBoard[5] != '5' && gameBoard[6] != '6' && gameBoard[7] != '7' && gameBoard[8] != '8' && gameBoard[9] != '9')
        return 0;
    else
        return -1;
}
void showGameBoard()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << gameBoard[1] << "  |  " << gameBoard[2] << "  |  " << gameBoard[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << gameBoard[4] << "  |  " << gameBoard[5] << "  |  " << gameBoard[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << gameBoard[7] << "  |  " << gameBoard[8] << "  |  " << gameBoard[9] << endl;

    cout << "     |     |     " << endl << endl;
}