#include "ATarget.hpp"

const string &ATarget::getType() const {return this->type;}
ATarget::ATarget(const string &type) { this->type = type;}
ATarget::~ATarget() {}
void ATarget::getHitBySpell(const ASpell &spell) const
{cout << this->type << " has been " << spell.getEffects() << "!" << endl;}
