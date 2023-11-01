#pragma once

class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;
		ASpell();
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &copy);
	public:
		ASpell(std::string name, std::String effects);
		~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const &target) const;
};	
