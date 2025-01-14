#include "Warlock.hpp"

const string &Warlock::getName() const {return this->name;}
const string &Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(const string &title) {this->title = title;}
Warlock::Warlock(const string &name, const string &title)
{
        this->name = name;
        this->title = title;
        cout << this->name << ": This looks like another boring day." << endl;
}
Warlock::~Warlock() {cout << this->name << ": My job here is done!"<< endl;}
void Warlock::introduce() const { cout << this->name << ": I am " << this->name << ", " << this->title << "!"<< endl;}
void Warlock::learnSpell(const ASpell *spell)
{
	if(spell)
		if (this->spellBook.find(spell->getName()) == this->spellBook.end())
			this->spellBook[spell->getName()] = spell->clone();

}
void Warlock::forgetSpell(const string &spellName)
{
	if (this->spellBook.find(spellName) != this->spellBook.end())
	{
		delete this->spellBook[spellName];
		this->spellBook.erase(this->spellBook.find(spellName));
	}
}
void Warlock::launchSpell(const string &spellName, const ATarget &target)
{
	if (this->spellBook.find(spellName) != this->spellBook.end())
		this->spellBook[spellName]->launch(target);
}
