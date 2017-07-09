/* * game.cpp
 *
 *  Created on: Jul 9, 2017
 *      Author: oleg
 */

#include "game.h"

void Game::roll(int pins){
		int addedScore = 0 ;
		if (10 == pins)
		{
			haveStrike = true;
			addedScore = 0;
		}
		else if (haveStrike)
		{
			addedScore = 10 + 2*pins;
		}
		else
		{
			addedScore = pins;
		}
		currentScore += addedScore;
	};
