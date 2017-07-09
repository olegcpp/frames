/* * game.cpp
 *
 *  Created on: Jul 9, 2017
 *      Author: oleg
 */
#include <iostream>
#include "game.h"

Game::Game()
: currentScore(0), haveStrike(false), isFirstRollInFrame(true)
{
//	std::cout << "Default ctor" << std::endl;
}

void Game::roll(int pins) {
	using namespace std;
	cout << pins << ", " << isFirstRollInFrame << ", " << haveStrike << endl;
		int addedScore = 0 ;
		if (10 == pins)
		{
			haveStrike = true;
			addedScore = 0;
		}
		else if (haveStrike && isFirstRollInFrame)
		{
			addedScore = 10 + 2*pins;
			isFirstRollInFrame = false;
		}
		else if (haveStrike && !isFirstRollInFrame)
		{
			addedScore = 2*pins;
			haveStrike = false;
			isFirstRollInFrame = true;
		}
		else
		{
			addedScore = pins;
		}
		currentScore += addedScore;
	};
