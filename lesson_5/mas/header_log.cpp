#include "header.h"
#include <iostream>

namespace game {

const int ROW(10);
const int COL(10);


/*enum field
{
    field = '_',
    trap = 'T',
    exit = 'E'


};
*/


enum class fields : char
{
    field = '_',
    trap = 'T',
    exit = 'E'
};

static fields map[ROW][COL]
{
    {fields::field,   fields::trap,    fields::field,   fields::field,   fields::field,   fields::field,    fields::field,   fields:: field,   fields::field,   fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: field,  fields:: trap,   fields::field,    fields::field,   fields:: field,   fields::trap,    fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: field,  fields:: field,  fields:: field,   fields:: field,  fields::field,    fields::field,   fields::field},
    {fields::field,   fields::field,   fields::trap,    fields::field,   fields::field,   fields::field,    fields::trap,    fields::field,    fields::field,   fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: field,  fields:: field,  fields:: field,   fields:: field,  fields::field,    fields::field,   fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: field,  fields:: field,  fields:: field,   fields:: trap,   fields:: field,   fields::field,   fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: trap,   fields::field,   fields::field,    fields::field,   fields:: field,   fields::field,   fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: field,  fields:: field,  fields:: field,   fields:: field,  fields::field,    fields::field,   fields::field},
    {fields::field,   fields::field,   fields::trap,    fields::field,   fields::field,   fields::field,    fields::field,   fields:: field,   fields::field,   fields::field},
    {fields::field,   fields::field,   fields::field,   fields:: field,  fields:: field,  fields:: field,   fields:: field,  fields::field,    fields::field,   fields:: exit},
};

static struct{
    char symbol = 'P';
    char x{0};
    char y{0};
}Player{};

void showMap(){

    std::cout.clear();

    for(int i{0}; i < ROW; i++){
        for(int j{0}; j < COL; j++)
        {
            if((i == Player.y) && (j == Player.x))
            {
                std::cout << Player.symbol << ' ';
            }
            else
            {
                std::cout << static_cast <char> (map[i][j]) << ' ';
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void getCommand()
{
    char command;
    std::cin.get(command);

    switch (command) {
    case '8':
        if(Player.y >= 0){
        --Player.y;
        }else{std::cout << "ti kuda presh" << std::endl;}
        break;

    case '4':
        --Player.x;
        break;

    case '6':
        ++Player.x;
        break;

    case '2':
        ++Player.y;
        break;
    }
}

bool checkPlayer()
{
    bool goahead = true;

    switch (map[Player.y][Player.x]) {
    case fields::trap:
        Player.symbol = '=';
        goahead = false;
        break;
    default:
        break;
    }
    return goahead;
}
}//namespace game
