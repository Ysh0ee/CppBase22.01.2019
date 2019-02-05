#include "header.h"
#include <iostream>


int main()
{


    bool goahead = true;

    do{
        game::showMap();
        game::getCommand();
        goahead = game::checkPlayer();
    }while(goahead);

    game::showMap();

    return 0;
}
