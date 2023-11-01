#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::~TargetGenerator() {

}

TargetGenerator::TargetGenerator(TargetGenerator const &copy) {
	*this = copy;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &copy) {
	*this = copy;
	return *this;
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
	{
		_target[target->getType()] = target;
	}
}

void TargetGenerator::forgetTargetType(std::string const &targetName) {
	if (_target.find(targetName) != _target.end())
		_target.erase(_target.find(targetName));
}

ATarget* TargetGenerator::createTarget(std::string const &targetName)
{
	ATarget* tmp = NULL;
	if (_target.find(targetName) != _target.end())
		tmp = _target[targetName];
	return (tmp);
}
