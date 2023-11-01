#include "ATarget.hpp"

ATarget::ATarget() {

}

ATarget::ATarget(ATarget const &copy) {
	*this = copy;
}

ATarget &ATarget::operator=(ATarget const &copy) {
	*this = copy;
	return *this;
}

ATarget::~ATarget() {

}

ATarget::ATarget(std::string type) {
	_type = type;
}
	
std::string ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const &spell) {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
