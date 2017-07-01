#include <CppUTest/TestHarness.h>
#include <memory>
#include "game.h"


TEST_GROUP(BowlingGame) {
};

TEST(BowlingGame, ScoreGameWithNoRolls) {
	Game gm;
	CHECK_TRUE(gm.getScore() == 0);
}

TEST(BowlingGame, RollZeroPins) {
	Game gm;
	gm.roll(0);
	CHECK_TRUE(gm.getScore() == 0);
}

TEST(BowlingGame, RollOnePin) {
	Game gm;
	gm.roll(1);
	CHECK_EQUAL(1, gm.getScore());
}
