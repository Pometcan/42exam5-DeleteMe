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
void Warlock::learnSpell(const ASpell *spell){this->spellBook.learnSpell(spell);}
void Warlock::forgetSpell(const string &spellName){this->spellBook.forgetSpell(spellName);}
void Warlock::launchSpell(const string &spellName, const ATarget &target)
{
	if (this->spellBook.createSpell(spellName))
		this->spellBook.createSpell(spellName)->launch(target);
}
