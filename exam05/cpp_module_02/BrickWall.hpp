#pragma once
#include "ATarget.hpp"

class BricWall : public ATarget {
	public:
		BrickWall();
		~BrickWall();
		ATarget* clone() const;
};

