#include <iostream>
#include <time.h>
#include <stdlib.h>

void clear()
{
    system("@cls||clear");
}

int main()
{

    int enter_number{0};
    int rand_number{0};
    int restart{1};

    while (restart != 0)
    {
        srand(time(NULL));
        rand_number = rand() % 10 + 1;

        std::cout << " -guass number game- " << std::endl;

        do{
            std::cout << " -Enter number- ";
            std::cin >> enter_number;

            if(enter_number > rand_number)
            {
                std::cout << " -current number- = "<< enter_number << " -is- " << " -to high- " << std::endl;
            }
            else if (enter_number < rand_number)
            {
                std::cout << " -current number- = "<< enter_number << " -is- " << " -to low- " << std::endl;
            }
            else if (enter_number == rand_number)
            {
                std::cout << " -current number- = "<< enter_number << " -is- " << " -to won number- " << std::endl;
            }
        }
        while(enter_number != rand_number);

        std::cout << " -play again ?- " << std::endl;
        std::cout << " - yes =[1] or no = [0]  : ";
        std::cin >> restart;
        clear();
    }
    return 0;
}
