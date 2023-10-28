#include "ASpell.hpp"

ASpell::ASpell() {
}

ASpell::ASpell(std::string name, std::string effects) {
	_name = name;
	_effects = effects;
}

ASpell::~ASpell() {
}

ASpell::ASpell(ASpell const &copy) {
	_name = copy._name;
	_effects = copy._effects;
}

ASpell &ASpell::operator=(ASpell const &copy) {
	*this = copy;
	return (*this);
}

std::string ASpell::getName() const {
	return _name;
}

std::string ASpell::getEffects() const {
	return _effects;
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
