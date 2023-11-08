#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;

class SpellBook {
	private:
		SpellBook(SpellBook const &copy);
		SpellBook &operator=(SpellBook const &copy);
		std::map<std::string, ASpell*> _spellbook;

	public:
		~SpellBook();
		SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &spellname);
		ASpell* createSpell(std::string const &spellname);
};
