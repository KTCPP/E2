#include "pch.h"
#include "Test.h"
#include "Kind.h"

TEST(Aufgabe, Eins) {
	std::cout << std::string{ "temporary" } << std::endl;
	std::string guten = "Guten";
	std::string morgen = "Morgen";
	std::cout << guten + " " + morgen << std::endl;
}

TEST(TestKlasse, Konstruktor) {
	TestKlasse test("test");
	TestKlasse zwei("zwei");
}

TEST(Kind, Kunstruktor) {
	Kind henry("henry");
}

bool istGerade(const int& i) {
	return (0 == i % 2);
}

TEST(yoda, bedingung) {
	EXPECT_EQ(istGerade(3), false);
	EXPECT_EQ(istGerade(4), true);
}

TEST(TestKlasse, copy) {
	TestKlasse test("test");
	TestKlasse neu = test;
	EXPECT_EQ(test, neu);
}

TEST(TestKlasse, move) {
	TestKlasse test("test");
	TestKlasse neu = std::move(test);
}

TEST(TestKlasse, zuweisung) {
	TestKlasse test("test");
	TestKlasse neu("neu");
	test = neu;
	EXPECT_EQ(test, neu);
}
