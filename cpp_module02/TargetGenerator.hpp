#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		map<string, ATarget*> targetList;
	public:
		void learnTargetType(const ATarget*);
		void forgetTargetType(const string &targetName);
		ATarget* createTarget(const string &targetName);
};
