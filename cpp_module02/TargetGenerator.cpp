#include "TargetGenerator.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator(TargetGenerator const &copy) {
	*this = copy;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &copy) {
	(void)copy;
	return *this;
}

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	
}

void TargetGenerator::learnTargetType(ATarget* target) {
	if (target)
	{
		_target[target->getType()] = target;	
	}
}

void TargetGenerator::forgetTargetType(std::string const &targetname) {
	if (_target.find(targetname) != _target.end())
	{
		_target.erase(targetname);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &targetname) {
	ATarget* tmp = NULL;
	if (_target.find(targetname) != _target.end()) {
		tmp = _target[targetname];
	}
	return tmp;
	

}

