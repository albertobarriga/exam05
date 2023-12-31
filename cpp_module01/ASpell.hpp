#pragma once

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;
		
	
	public:
		virtual ~ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &copy);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const &target) const;
};
