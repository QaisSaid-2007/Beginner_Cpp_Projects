#include <iostream>
#include <string>
#include <cctype>

typedef std::string str;
using dec = double;

int main() {
    const int number_of_questions = 3;
    int correct = 0;

    str questions[number_of_questions];
    questions[0] = {"What is the biggest country in the world?"};
    questions[1] = {"When did WW2 started?"};
    questions[2] = {"What is the capital of France?" };

    str options[][4] = { {"A: Russia","B: Oman","C: Iran","D: China"},
                       {"A: 2020", "B: 1914", "C: 1939", "D: 1945"},
                       {"A: Muscat", "B: Paris", "C: New York", "D: Doha"} };

    char answers[number_of_questions];
    answers[0] = {'A'};
    answers[1] = {'C'};
    answers[2] = {'B'};

    std::cout << "************** Quiz ***************" << std::endl;

    for (int i=0; i < number_of_questions ; i++) {
        std::cout << "***************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "***************" << std::endl;

        for (int j=0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "ans: ";
        char guess;
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answers[i]) {
            std::cout << "Correct !!!" << std::endl;
            correct += 1;
        }
        else {
            std::cout << "Wrong !!!" << std::endl;
            std::cout << answers[i] << " Was the correct answer" << std::endl;
        }

        };    

    std::cout << "********** RESULTS **********" << std::endl;
    std::cout << "correct answers:  " << correct << std::endl;
    std::cout << "# of questions: " << number_of_questions << std::endl;
    std::cout << "SCORE: " << ( (dec) correct / (dec) number_of_questions) * 100 << "%";

    return 0;
}