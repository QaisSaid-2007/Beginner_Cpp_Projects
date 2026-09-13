#include <iostream> 
#include <string>

using str = std::string;
using dec = double; 

dec current_balance = 1000;

dec balance(); 
void deposit(dec amount);
void withdraw(dec amount);

int main() {
    str intro = "********** Welcome to the Quick Bank *********";
    str r1 = "1 -> Show balance";
    str r2 = "2 -> Deposit Money";
    str r3 = "3 -> Withdraw Money";
    str r4 = "4 -> Exit";
    int choice;

    do {
        dec amount;
        std::cout << intro << std::endl;
        std::cout << r1 << '\n' << r2 << '\n' << r3 << '\n' << r4 << std::endl;
        std::cout << "Option: ";
        std::cin >> choice; 

        switch (choice) {
            case 1:
                std::cout << balance() << "$" << std::endl;
                break;
            case 2:
                std::cout << "How much you want to deposit: ";
                std::cin >> amount;
                deposit(amount);
                break;
            case 3:
                std::cout << "How much you want to withdraw: ";
                std::cin >> amount;
                withdraw(amount);
                break;
            case 4:
                std::cout << "GOODBYE !!!";
                break;
            default:
                std::cout << "invalid option";
        }

    } while (choice != 4);

    return 0;
}

dec balance() {
    return current_balance;
}

void deposit(dec amount) {
    current_balance += amount;
}

void withdraw(dec amount) {
    if (balance() >= amount) {
        current_balance -= amount;
    }
}