#pragma once

#include <string>
#include <iostream>

#include "ATarget.hpp"

using namespace std;

class ATarget;

class ASpell
{
	private:
		string name;
		string effects;
	public:
		const string &getName() const;
		const string &getEffects() const;
		void getEffects(const string &effects);
		ASpell(const string &name,const string &title);
		virtual ~ASpell();
		virtual ASpell *clone() const = 0;
		void launch(const ATarget &target);
};
