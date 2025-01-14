#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(const ATarget *target)
{
	if(target)
		this->targetList[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const string &targetName)
{
	if (this->targetList.find(targetName) != this->targetList.end())
	{
		delete this->targetList[targetName];
		this->targetList.erase(this->targetList.find(targetName));
	}
}

ATarget *TargetGenerator::createTarget(const string &targetName)
{
	ATarget *tmp = NULL;
	if (this->targetList.find(targetName) != this->targetList.end())
		tmp = this->targetList[targetName];
	return tmp;
}
