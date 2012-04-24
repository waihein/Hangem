#include "player.h"
#include <string>
#include <iostream>
#include <stdio.h>

#define NAME_SIZE 10

using namespace std;

player::player()
{
    playerName = new char[ NAME_SIZE ];
    std::cout << "\nPlease enter in your name:\n";
    cin >> playerName;

    wins = loses = 0;
}

player::~player()
{
    delete playerName;
}

char player::Getguess()
{
    cin.ignore( 1000, '\n' );
    cout << "\nPlease enter in a guess:\n";
    guess = getchar();

    return guess;
}

bool player::checkGuess( char guess)
{
    // get the word from the file
    // use strstr( word, guess)
	// if strstr != NULLL then
	// call addWin()
	// else if strstr == NULL then
	// then call showHangman()
}

void player::showHangman()
{
    //system("cls")
    // switch( number)
    // case 1: cout<< hangMan1 << endl;
    /*
        case2: cout<< hangman2 << endl;
        .
        .
        .
        case6: cout<< hangman6 << endl;
    */
}
void player::addWin( )
{
    wins +=1;
}

void player::addLoses( )
{
    loses +=1;
}
