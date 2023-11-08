#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::~TargetGenerator() {
}

TargetGenerator::TargetGenerator(TargetGenerator const &copy) {
	*this = copy;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &copy) {
	(void)copy;
	return *this;
}

void TargetGenerator::learnTargetType(ATarget* target) {
	if (target)
		_target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &targetname) {
	if (_target.find(targetname) != _target.end())
		_target.erase(targetname);
}

ATarget* TargetGenerator::createTarget(std::string const &targetname) {
	ATarget* tmp = NULL;
	std::map<std::string, ATarget*>::iterator it = _target.find(targetname);

	if (it != _target.end())
		tmp = it->second;
	return tmp;
}
