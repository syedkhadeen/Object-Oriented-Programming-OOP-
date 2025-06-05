#include<iostream>
using namespace std;

void board();
void show1(char arr[][3], char user1, int row1, int column1);
void show2(char arr[][3], char user2, int row2, int column2);
bool isDraw(char arr[][3]);

int main() {
    board();
    int row1, column1, row2, column2, count = 0;
    char arr[3][3] = { ' ' };
    char user1, user2;
    
    do {
        cout << "User 1 enter your character 'X' or 'O' (Press (1-3) for row and columns): " << endl;
        cin >> row1 >> column1 >> user1;
        show1(arr, user1, row1, column1);

        count++;
        if (isDraw(arr)) {
            cout << "It's a draw!" << endl;
            break;
        }

        cout << "User 2 enter your character 'X' or 'O' (Press (1-3) for row and columns): " << endl;
        cin >> row2 >> column2 >> user2;
        show2(arr, user2, row2, column2);

        count++;
        if (isDraw(arr)) {
            cout << "It's a draw!" << endl;
            break;
        }

        if ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')) {
            cout << "User 1 Wins!" << endl;
            break;
        }
        else if ((arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') || (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')) {
            cout << "User 1 Wins!" << endl;
            break;
        }
        else if ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')) {
            cout << "User 2 Wins!" << endl;
            break;
        }
        else if ((arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') || (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')) {
            cout << "User 2 Wins!" << endl;
            break;
        }
    } while (count < 9);

    return 0;
}

void board() {
    cout << "     |     |     " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "     |     |     " << endl;
}

void show1(char arr[][3], char user1, int row1, int column1) {
    arr[row1 - 1][column1 - 1] = user1;
    cout << "\t\t\t " << arr[0][0] << " | " << arr[0][1] << "   | " << arr[0][2] << "\n";
    cout << "\t\t\t--------------\n";
    cout << "\t\t\t " << arr[1][0] << "  | " << arr[1][1] << "  | " << arr[1][2] << "\n";
    cout << "\t\t\t--------------\n";
    cout << "\t\t\t " << arr[2][0] << "  | " << arr[2][1] << "   | " << arr[2][2] << "\n\n";
}

void show2(char arr[][3], char user2, int row2, int column2) {
    arr[row2 - 1][column2 - 1] = user2;
    cout << "\t\t\t " << arr[0][0] << " | " << arr[0][1] << "   | " << arr[0][2] << "\n";
    cout << "\t\t\t--------------\n";
    cout << "\t\t\t " << arr[1][0] << "  | " << arr[1][1] << "  | " << arr[1][2] << "\n";
    cout << "\t\t\t--------------\n";
    cout << "\t\t\t " << arr[2][0] << "  | " << arr[2][1] << "   | " << arr[2][2] << "\n\n";
}

bool isDraw(char arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == ' ') {
                return false; // If there's an empty space, the game is not a draw yet
            }
        }
    }
    return true; // All spaces are filled, it's a draw
}
