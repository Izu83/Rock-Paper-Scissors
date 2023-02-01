#include <iostream>
#include <string>
#include <ctime>

enum ai_choice
{
    ROCK = 1, PAPER = 2, SCISSORS = 3
};

int main()
{
    srand(time(NULL));
    int random_choice = rand() % 3 + 1; // ROCK = 1, PAPER = 2, SCISSORS = 3
    system("cls");    std::cout << "\t\tROCK, PAPER, SCISSORS\n";
    std::cout << "\t\tPlease type in caps lock\n";
    std::cout << "===========================================================\n";
                CHOICE:
    std::cout << "Enter your choice: ";

    ai_choice rand_choice;

    std::string choice;
    getline(std::cin, choice);

    std::cout << "My choice is ";
    if(random_choice == 1)
    {
        rand_choice = ROCK;
        std::cout << "rock, and your choice is " << choice << '\n';
    }
    else if(random_choice == 2)
    {
        rand_choice = PAPER;
        std::cout << "paper, and your choice is " << choice << '\n';
    }
    else if(random_choice == 3)
    {
        rand_choice = SCISSORS;
        std::cout << "scissors, and your choice is " << choice << '\n';
    }

    switch(rand_choice)
    {
        case ROCK:
            if(choice == "PAPER")
            {
                std::cout << "\nYou won!\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }   
            else if (choice == "SCISSORS")
            {
                std::cout << "\nYou lost.\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
            else if (choice == "ROCK")
            {
                std::cout << "\nWe are on draw!\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
            else
            {
                std::cout << "\nInvalid option\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
        break;
        case PAPER:
            if(choice == "PAPER")
            {
                std::cout << "\nWe are on draw!\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }   
            else if (choice == "SCISSORS")
            {
                std::cout << "\nYou won!\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
            else if (choice == "ROCK")
            {
                std::cout << "\nYou lost.\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
            else
            {
                std::cout << "\nInvalid option\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
        break;
        case SCISSORS:
            if(choice == "PAPER")
            {
                std::cout << "\nYou lost.\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }   
            else if (choice == "SCISSORS")
            {
                std::cout << "\nWe are on draw!\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
            else if (choice == "ROCK")
            {
                std::cout << "\nYou won!\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
            else
            {
                std::cout << "\nInvalid option\n";
                std::cout << "Press enter to continue. . .";
                std::cin.get();
                system("cls");
                goto CHOICE;
            }
        break;
    }
}
