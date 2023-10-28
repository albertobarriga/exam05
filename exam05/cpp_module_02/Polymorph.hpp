#pragma once

class Polymorph : public ASpell {
	public:
		Polymorph();
		~Polymorph();
		ASpell* clone() const;
};
