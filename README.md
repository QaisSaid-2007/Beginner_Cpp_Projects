# Beginner C++ Projects

A collection of small, interactive C++ console programs for practicing the fundamentals of programming. Each project is a standalone `.cpp` file that focuses on a specific beginner-friendly concept such as conditionals, loops, functions, input validation, arithmetic, and simple menu-driven interaction.

## Projects

| File | Description | Concepts practiced |
|---|---|---|
| [`console_calc.cpp`](console_calc.cpp) | Performs addition, subtraction, multiplication, and division from the command line. | `switch`, arithmetic, input validation |
| [`Hypotenuse_calc.cpp`](Hypotenuse_calc.cpp) | Calculates the hypotenuse of a right triangle using the Pythagorean theorem. | `std::sqrt`, arithmetic, numeric input |
| [`Temperature_conversion.cpp`](Temperature_conversion.cpp) | Converts temperatures between Celsius and Fahrenheit. | `if`/`else`, floating-point arithmetic, character input |
| [`Credit_Card_Validator.cpp`](Credit_Card_Validator.cpp) | Checks whether a card number passes a Luhn-style validation calculation. | functions, strings, loops, digit manipulation |
| [`Grade_eval.cpp`](Grade_eval.cpp) | Calculates a student's average, letter grade, academic status, highest and lowest marks, and next year of study. | namespaces, `switch`, conditionals, `std::max`, `std::min`, `std::ceil` |
| [`Quiz_game.cpp`](Quiz_game.cpp) | Runs a three-question multiple-choice quiz and displays the score. | arrays, loops, `toupper`, score calculation |
| [`Guess_the_number.cpp`](Guess_the_number.cpp) | Offers easy, medium, and hard guessing modes with optional hints. | `switch`, loops, branching, user interaction |
| [`Banking_system.cpp`](Banking_system.cpp) | Provides a menu for viewing a balance, depositing, withdrawing, and exiting. | functions, global state, `do`/`while`, menu logic |

## Requirements

- A C++ compiler with C++11 support or newer, such as GCC, Clang, or Microsoft Visual C++.
- A terminal or C++ IDE.

The programs use the standard library only; no third-party dependencies are required.

## Getting started

```bash
git clone https://github.com/PoQue00/beginner_Cpp_Projects.git
cd beginner_Cpp_Projects
```

Each source file has its own `main()` function, so compile and run one project at a time:

```bash
g++ -std=c++11 -Wall -Wextra console_calc.cpp -o console_calc
./console_calc
```

On Windows with MinGW:

```powershell
g++ -std=c++11 -Wall -Wextra console_calc.cpp -o console_calc.exe
.\console_calc.exe
```

Replace `console_calc.cpp` and `console_calc` with the source file and executable name for another project. For example:

```bash
g++ -std=c++11 -Wall -Wextra Banking_system.cpp -o banking_system
./banking_system
```

## Learning focus

These examples demonstrate:

- Console input and basic validation
- Arithmetic and floating-point calculations
- `if`/`else` and `switch` control flow
- `for`, `do`/`while`, and conditional loops
- Defining and calling functions
- Working with strings, arrays, and characters
- Standard-library utilities such as `std::sqrt`, `std::max`, `std::min`, `std::ceil`, and `std::toupper`

## Notes

- Compile only one `.cpp` file per executable because every project defines its own `main()` function.
- The banking example starts with an in-memory balance of `$1000`; it does not save data between runs.
- The guessing game uses fixed secret numbers for its three difficulty modes.
- Input is expected to follow the prompts shown by each program.

## Contributing

Suggestions, corrections, and new beginner-level C++ examples are welcome. When adding a project:

1. Create a standalone `.cpp` file with one `main()` function.
2. Keep the program focused on a small, teachable concept.
3. Add the file and a short description to the project table above.
4. Compile it with warnings enabled before opening a pull request.

## License

No license is currently specified for this repository. If you plan to reuse or distribute the code, please contact the repository owner or add an appropriate license.
