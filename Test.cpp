#include <CppUTest/TestHarness.h>
#include <memory>
#include "game.h"

TEST_GROUP(BG) {
};

TEST(BG, ScoreGameWithNoRolls) {
	Game gm;
	LONGS_EQUAL(gm.getScore(), 0);
}

TEST(BG, RollZeroPins) {
	Game gm;
	gm.roll(0);
	LONGS_EQUAL(gm.getScore(), 0);
}

TEST(BG, RollOnePin) {
	Game gm;
	gm.roll(1);
	LONGS_EQUAL(1, gm.getScore());
}

TEST(BG, OneRollIsStrike){
	Game gm;
	gm.roll(10);
	LONGS_EQUAL(0, gm.getScore());
}

TEST(BG, OneRollIsStrikeThenRegularRoll){
	Game gm;
	gm.roll(10);
	gm.roll(3);
	LONGS_EQUAL(16, gm.getScore());
}
