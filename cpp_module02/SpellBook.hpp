#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook {
	private:
		std::map<std::string, ASpell*> _spellbook;
		SpellBook(SpellBook const &copy);
		SpellBook &operator=(SpellBook const &copy);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &spellname);
		ASpell* createSpell(std::string const &spellname);
};
