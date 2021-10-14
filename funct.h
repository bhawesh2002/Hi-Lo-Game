//Header file containinng all function declaration's and defination's

#include <iostream>

int random_number() //pick up a random number(between 1-10) for the hi-lo game. First number is always 5
{
    int random{5};
    return random;
}

int user_input() //user input's a number
{
    int i{};
    std::cout << "Your choice: ";
    std::cin >> i;
    return i;
}

int check() //check's weather the number is correct, lo, high or far awary
{
    int assigned{user_input()};
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

int score() //count's the total score for the game
{
    int total{};
    if (check() == int(1))
    {
        total++;
    }
    return total;
}

int begin_game() //Ask's the user to enter the game
{
    std::cout << "=======================================================\n"
                 "Make a choice"
              << '\n'
              << "1)Enter the Game\n"
              << "2)Exit\n";
    while (int choice_1{user_input()})
    {
        switch (choice_1)
        {
        case 1:
            std::cout << "Welcome Abroad" << '\n';
            break;
        case 2:
            std::cout << "Thank You" << '\n';
            return 0;
            break;
        default:
            std::cout << "---------------------------------------\n"
                      << "Make a valid choice" << '\n'
                      << "1)Enter the Game\n"
                      << "2)Exit" << '\n';
            continue;
        }
        break;
    }
    return 0;
}

int in_game_opts() //open's in game option's after every guess
{
    std::cout << "======*In Game Options*=====\n"
              << "1)continue guessing      2)Restart      3)Exit\n";
    while (int opt{user_input()})
    {
        switch (opt)
        {
        case 1:
            return opt;
        case 2:
            return opt;
        case 3:
            return opt;
        default:
            std::cout << "invalid input";
            break;
        }
    }
    return 1;
}
