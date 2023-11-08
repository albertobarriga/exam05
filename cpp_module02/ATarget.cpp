#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string type) {
	_type = type;
}

ATarget::ATarget(ATarget const &copy) {
	*this = copy;
}

ATarget &ATarget::operator=(ATarget const &copy) {
	_type = copy._type;
	return *this;
}

ATarget::~ATarget() {}

std::string ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
