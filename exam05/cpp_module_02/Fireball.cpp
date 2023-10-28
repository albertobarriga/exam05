#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {

}

Fireball::~Fireball() {

}

ASpell* clone() const {
	return (new Fireball());
}
