/*
 * game.h
 *
 *  Created on: Jun 26, 2017
 *      Author: oleg
 */

#ifndef GAME_H_
#define GAME_H_
#include <iostream>

class Game {
public:
	Game();

	int getScore() { return currentScore; }

	void roll(int pins);
private:
	int currentScore;
	bool haveStrike;
	bool isFirstRollInFrame;
//	bool scoreOfFirstRollInFrame;
};

#endif /* GAME_H_ */
