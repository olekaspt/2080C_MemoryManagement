
#include <iostream>
#include <string>
#include <list>
#include "GameWithPointers.h"
#include "GameWithObjects.h"


int main()
{
	std::cout << "GameWithObjects constructed" << std::endl;
	GameWithObjects game1;
	std::cout << "Now Run Game" << std::endl;
	game1.RunGame();

	//GameWithPointers game2;
	//game2.RunGame();


    return 0;
}

