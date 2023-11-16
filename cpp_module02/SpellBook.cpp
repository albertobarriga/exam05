#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

SpellBook::SpellBook(SpellBook const &copy) {
	*this = copy;
}

SpellBook &SpellBook::operator=(SpellBook const &copy) {
	(void)copy;
	return *this;
}

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell*>::iterator it = _spellbook.begin();
	while(it != _spellbook.end())
	{	
		delete it->second;
		++it;
	}
	_spellbook.clear();
}

void SpellBook::learnSpell(ASpell* spell) {
	if (spell)
	{
		_spellbook[spell->getName()] = spell;	
	}
}

void SpellBook::forgetSpell(std::string const &spellname) {
	if (_spellbook.find(spellname) != _spellbook.end())
	{
		_spellbook.erase(spellname);
	}
}

ASpell* SpellBook::createSpell(std::string const &spellname) {
	ASpell* tmp = NULL;
	if (_spellbook.find(spellname) != _spellbook.end()) {
		tmp = _spellbook[spellname];
	}
	return tmp;
	

}








