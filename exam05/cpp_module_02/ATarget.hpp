#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
	protected:
		std::string _type;

	public:
		ATarget(std::string type);
		virtual ~ATarget();
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &copy);

		std::string getType() const;
		virtual ATarget* clone()  const = 0;
		void getHitBySpell(ASpell const &spell) const;
};
