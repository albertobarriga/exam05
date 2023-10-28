#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &copy);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const &target) const;
};
