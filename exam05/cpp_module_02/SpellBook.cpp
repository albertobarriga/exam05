#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); it++)
	{
		delete (it->second);
	}
	_SpellBook.clear();
}

SpellBook::SpellBook(SpellBook const &copy) {
	*this = copy;
}

SpellBook &SpellBook::operator=(SpellBook const &copy) {
	*this = copy;
	return *this;
}

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
	{
		_SpellBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(std::string const &spellName) {
	std::map<std::string, ASpell*>::iterator it = _SpellBook.find(spellName);
	if (it != _SpellBook.end())
	{
		delete it->second;
		_SpellBook.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const spellName) {
	ASpell* tmp = NULL;
	if (_SpellBook.find(spellName) != _SpellBook.end())
		tmp = _SpellBook[spellName];
	return tmp;
}

