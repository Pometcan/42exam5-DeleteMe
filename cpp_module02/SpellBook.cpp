#include "SpellBook.hpp"

void SpellBook::learnSpell(const ASpell *spell)
{
	if(spell)
		this->spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const string &spellName)
{
	if (this->spellBook.find(spellName) != this->spellBook.end())
	{
		delete this->spellBook[spellName];
		this->spellBook.erase(this->spellBook.find(spellName));
	}
}

ASpell *SpellBook::createSpell(const string &spellName)
{
	ASpell *tmp = NULL;
	if (this->spellBook.find(spellName) != this->spellBook.end())
		tmp = this->spellBook[spellName];
	return tmp;
}
