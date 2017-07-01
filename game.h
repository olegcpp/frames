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
	: currentScore(0) {}
	int getScore() {return currentScore;}
	void roll(int pins){
		currentScore += pins;
	};

private:
	int currentScore;
};

#endif /* GAME_H_ */
