//Header file containinng all function declaration's and definations 

#include <iostream>

int random_number()                               //pick up a random number(between 1-10) for the hi-lo game. First number is always 5
{                                              
    int random{5};
    return random;
}

int user_input()                                  //user input's a number
{ 
    int i{};
    std::cout << "Your choice: ";
    std::cin >> i;
    return i;
}

int check()                                      //check's weather the number is correct, lo, high or far awary
{
    int assigned{user_input()};
    if (assigned == random_number())
    {
        std::cout << "Bingo" << '\n';
        return 1;
    }
    else if (assigned == random_number() - 1 || assigned == random_number() - 2)
    {
        std::cout << "Low" << '\n';
        return 0;
    }
    else if (assigned == random_number() + 1 || assigned == random_number() + 2)
    {
        std::cout << "High" << '\n';
        return 0;
    }
    else if (assigned < random_number() - 2 || assigned > random_number() + 2)
    {
        return 0;
        std::cout << "Far Away" << '\n';
    }
    return 0;
}

int score()                            //count's the total score for the game 
{
    int total{};
    if (check() == int(1))
    {
        total++;
    }
    return total;
}

int begin_game()                           //Ask's the user to enter the game  
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