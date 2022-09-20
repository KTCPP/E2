#pragma once
#include <string>
class TestKlasse
{
public:
	TestKlasse(std::string name);
	TestKlasse(const TestKlasse& alt);
	TestKlasse(TestKlasse&& alt);
	~TestKlasse();
	TestKlasse& operator=(const TestKlasse& alt);
	TestKlasse& operator=(const TestKlasse&& alt) = delete;
private:
	std::string name_;
	
	friend bool operator==(TestKlasse links, TestKlasse rechts);
};

bool operator==(TestKlasse links, TestKlasse rechts);
