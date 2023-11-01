#pragma once

class ASpell;

class ATarget {
	private:
		std::string _type;
		ATarget();
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &copy);
	public:
		virtual ~ATarget();
		ATarget(std::string type);
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(ASpell const &spell) const;
};
