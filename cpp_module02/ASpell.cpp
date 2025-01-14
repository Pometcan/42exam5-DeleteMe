#include "ASpell.hpp"

const string &ASpell::getName() const {return this->name;}
const string &ASpell::getEffects() const {return this->effects;}
void ASpell::getEffects(const string &effects) {this->effects = effects;}
ASpell::ASpell(const string &name,const string &effects)
{this->name = name; this->effects = effects;}
ASpell::~ASpell() {}
void ASpell::launch(const ATarget &target){target.getHitBySpell(*this);}
