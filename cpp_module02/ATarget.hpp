#pragma once

#include <string>
#include <iostream>

#include "ASpell.hpp"

using namespace std;

class ASpell;

class ATarget
{
	private:
		string type;
	public:
		const string &getType() const;
		ATarget(const string &type);
		virtual ~ATarget();
		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;
};
