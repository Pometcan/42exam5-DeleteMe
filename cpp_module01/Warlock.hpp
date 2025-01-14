#pragma once
#include <map>
#include <string>
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"

using namespace std;

class Warlock
{
	private:
		string name;
		string title;
		map<string, ASpell*> spellBook;
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
