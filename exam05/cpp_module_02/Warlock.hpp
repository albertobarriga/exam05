#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock 
{
	private:
		std::string _name;
		std::string _title;
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &copy);
		Warlock();
		SpellBook _SpellBook;

	public:

		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget &target);
};
