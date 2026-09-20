#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstdlib>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9];
    std::fill(spaces,spaces + 9,' ');

    char player = 'X';
    char computer = 'O';
    srand(time(0));

    bool running = true;

    drawBoard(spaces);

    while (running) {

        playerMove(spaces,player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }

        if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }

        if (checkTie(spaces)) {
            running = false;
            break;
        }

    }

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << '\n';

    std::cout << "     |     |     \n";
    std::cout << "   " << spaces[0] << " |  " << spaces[1] << "  |  " << spaces[2] << '\n';
    std::cout << "_____|_____|_____\n";

    std::cout << "     |     |     \n";
    std::cout << "   " << spaces[3] << " |  " << spaces[4] << "  |  " << spaces[5] << '\n';
    std::cout << "_____|_____|_____\n";

    std::cout << "     |     |     \n";
    std::cout << "   " << spaces[6] << " |  " << spaces[7] << "  |  " << spaces[8] << '\n';
    std::cout << "_____|_____|_____\n";
    
}
void playerMove(char *spaces, char player) {
    
    int number;

    do {
        std::cout << "Enter a position (1-9): ";
        std::cin >> number;

        number--;

        if (number < 0 || number > 8) {
            std::cout << "Invalid position\n";
        }
        else if (spaces[number] != ' ') {
            std::cout << "Position already occupied\n";
        }
        else {
            spaces[number] = player;
            break;
        }
    } while (true);

}
void computerMove(char *spaces, char computer) {
    int number;

    do {
        number = rand() % 9;
    } while (spaces[number] != ' ');

    spaces[number] = computer;

}
bool checkWinner(char *spaces, char player, char computer) {
    // Rows
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] != ' ') {
        if (spaces[0] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' ') {
        if (spaces[3] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] != ' ') {
        if (spaces[6] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    // Columns
    if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] != ' ') {
        if (spaces[0] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] != ' ') {
        if (spaces[1] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] != ' ') {
        if (spaces[2] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    // Diagonals
    if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' ') {
        if (spaces[0] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] != ' ') {
        if (spaces[2] == player) {
            std::cout << "You win\n";
        }
        else {
            std::cout << "Computer wins\n";
        }
        return true;
    }

    return false;
    
}
bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {

        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "It's a tie\n";

    return true;
}