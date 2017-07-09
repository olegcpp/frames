/*
 * game.h
 *
 *  Created on: Jun 26, 2017
 *      Author: oleg
 */

#ifndef GAME_H_
#define GAME_H_


class Game {
public:
	Game()
	: currentScore(0), haveStrike(false) {}

	int getScore() { return currentScore; }

	void roll(int pins);
private:
	int currentScore;
	bool haveStrike;
};

#endif /* GAME_H_ */
