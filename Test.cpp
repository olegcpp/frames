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
	LONGS_EQUAL(0, gm.getScore());
}

TEST(BG, OneRollIsStrikeThenTwoRegularRolls){
	Game gm;
	gm.roll(10);
	gm.roll(3);
	gm.roll(1);
	LONGS_EQUAL(18, gm.getScore());
}

TEST(BG, TwoRegularFrames){
	Game gm;
	gm.roll(3);
	gm.roll(1);
	gm.roll(5);
	gm.roll(4);
	LONGS_EQUAL(13, gm.getScore());
}

TEST(BG, RegularFrameStrikeFrameRegularFrame){
	Game gm;
	gm.roll(3);
	gm.roll(1);
	gm.roll(10);
	gm.roll(5);
	gm.roll(2);

	LONGS_EQUAL(28, gm.getScore());
}

TEST(BG, TwoStrikesAndRegularFrame){
	Game gm;
	gm.roll(10);//23
	gm.roll(10);//15
	gm.roll(3);
	gm.roll(2);//5
	LONGS_EQUAL(43, gm.getScore());
}

