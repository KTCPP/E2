#include "pch.h";
#include "Test.h";

TestKlasse::TestKlasse(std::string name){
	this->name_ = name;
	std::cout << name << " wurde erstellt" << std::endl;
}

TestKlasse::~TestKlasse() {
	std::cout << name_ << " wurde zerstoert" << std::endl;
}

TestKlasse& TestKlasse::operator=(const TestKlasse& alt)
{
	std::cout << "zuweisung von: " << alt.name_ << "zu: " << this->name_ << std::endl;
	this->name_ = alt.name_;
	return (*this);
}

TestKlasse::TestKlasse(const TestKlasse& alt)
{
	this->name_ = alt.name_;
	std::cout << "kopiert von: " << alt.name_ << std::endl;
}

TestKlasse::TestKlasse(TestKlasse&& alt)
{
	std::cout << "moved von: " << alt.name_ << std::endl;
	this->name_ = std::move(alt.name_);
}

bool operator==(TestKlasse links, TestKlasse rechts)
{
	return (links.name_.compare(rechts.name_) == 0);
}
