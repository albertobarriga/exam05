#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(ASpell const &copy) {
	*this = copy;
}

ASpell &ASpell::operator=(ASpell const &copy) {
	*this = copy;
	return *this;
}

ASpell::ASpell(std::string name, std::string effects) {
	_name = name;
	_effects = effects;
}

std::string ASpell:getName() {
	return _name;
}

std::string ASpell::getEffects() {
	return _effects;
}

void ASpell::launch(ATarget const &target) {
	target.getHitBySpell(*this);
}
