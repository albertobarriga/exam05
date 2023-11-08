#pragma once
#include "ATarget.hpp"
#include <iostream>
#include <map>

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> _target;
		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &copy);

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const &targetname);
		ATarget* createTarget(std::string const &targetname);

};

