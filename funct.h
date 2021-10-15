// Header file containinng all function declaration's and defination's

#include <iostream>

int random_number() // pick up a random number(between 1-10) for the hi-lo game. First number is always 5
{
    int random{5};
    return random;
}

int user_input() // function to take user's input
{
    int i{};
    std::cout << "Your choice: ";
    std::cin >> i;
    return i;
}

int guess() // user make's a guess
{
    int i{};
    std::cout << "Your Guess: ";
    std::cin >> i;
    return i;
}
int check() // ask's to make a guess and check's weather the number is correct, lo, high or far awary
{
    int assigned{guess()};
    if (assigned == random_number())
    {
        std::cout << "Bingo" << '\n';
        return true;
    }
    else if (assigned == random_number() - 1 || assigned == random_number() - 2)
    {
        std::cout << "Low" << '\n';
        return false;
    }
    else if (assigned == random_number() + 1 || assigned == random_number() + 2)
    {
        std::cout << "High" << '\n';
        return false;
    }
    else if (assigned < random_number() - 2 || assigned > random_number() + 2)
    {
        std::cout << "Far Away" << '\n';
        return false;
    }
    return 0;
}

int begin_game() // Ask's the user to enter the game
{
    std::cout << "=======================================================\n"
                 "Make a choice"
              << '\n'
              << "1)Enter the Game\n"
              << "2)Exit\n";
    while (int choice{user_input()})
    {
        switch (choice)
        {
        case 1:
            std::cout << "Welcome Abroad\n"
                      << "-------Start Makiing Guess-------\n";
            return true;
            break;
            
        case 2:
            std::cout << "****Thank You****" << '\n';
            return false;
            break;
        default:
            std::cout << "---------------------------------------\n"
                      << "Make a Valid Choice" << '\n'
                      << "1)Enter the Game\n"
                      << "2)Exit" << '\n';
            continue;
        }
        break;
    }
    return 0;
}

int in_game_opts() // open's in game option's after every guess
{
    std::cout << "======*In Game Options*=====\n"
              << "1)Continue      2)Restart      3)Exit\n";
    while (int opt{user_input()})
    {
        switch (opt)
        {
        case 1:
            std::cout << "=========Next Round=========\n";
            return opt;
        case 2:
            return opt;
        case 3:
            return opt;
        default:
            std::cout << "Make a Valid Choice"
                      << "1)Continue      2)Restart      3)Exit\n";
            ;
            break;
        }
    }
    return 1;
}
