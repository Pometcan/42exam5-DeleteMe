#pragma once

#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
		map<string, ASpell*> spellBook;
	public:
		void learnSpell(const ASpell *spell);
		void forgetSpell(const string &spellName);
		ASpell *createSpell(const string &spellName);
};
