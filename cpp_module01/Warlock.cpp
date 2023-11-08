#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(Warlock const &copy) {
	*this = copy;
}

Warlock &Warlock::operator=(Warlock const &copy) {
	(void)copy;
	return *this;
}

Warlock::Warlock(std::string const &name, std::string const &title) {
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day."<< std::endl;
}

Warlock::~Warlock() {
	std::cout << _name <<  ": My job here is done!" << std::endl;
	std::map<std::string, ASpell*>::iterator it = _spellbook.begin();
	while (it != _spellbook.end())
	{
		delete it->second;
		++it;
	}
	_spellbook.clear();
}

std::string const &Warlock::getName() const {
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

void Warlock::learnSpell(ASpell* spell) {
	if (spell)
		_spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spellname) {
	if (_spellbook.find(spellname) != _spellbook.end())
	{
		_spellbook.erase(spellname);
	}
}

void Warlock::launchSpell(std::string spellname, const ATarget &target) {
	
	if (_spellbook.find(spellname) != _spellbook.end())
	{
		_spellbook[spellname]->launch(target);
	}
}
