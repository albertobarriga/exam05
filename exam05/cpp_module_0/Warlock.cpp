#include "Warlock.hpp"

Warlock::Warlock() {
}

Warlock::Warlock(Warlock const &copy) {
	*this = copy;
}

Warlock &Warlock::operator=(Warlock const &copy) {
	_name = copy._name;
	_title = copy._title;
	*this = copy;
	return (*this);
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!"  << std::endl;
}

Warlock::Warlock(std::string name, std::string title) {
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

std::string const & Warlock::getName() const {
	return _name;
}

std::string const &Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

