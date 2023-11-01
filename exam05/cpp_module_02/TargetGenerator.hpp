#pragma once
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
	private:
		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &copy);
		std::map<std::string, ATarget*> _target;
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &targetName);
		ATarget* createTarget(std::string const &targetName);
		
};
