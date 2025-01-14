#pragma once
#include <map>
#include <string>
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

using namespace std;

class Warlock
{
	private:
		string name;
		string title;
		SpellBook spellBook;
	public:
		const string &getName() const;
		const string &getTitle() const;
		void setTitle(const string &title);
		Warlock(const string &name, const string &title);
		~Warlock();
		void introduce() const;
		void learnSpell(const ASpell *spell);
		void forgetSpell(const string &spellName);
		void launchSpell(const string &spellName, const ATarget &target);
};
