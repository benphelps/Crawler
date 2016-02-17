class statsBase {
public:
    int stamina;
    int agility;
    int defence;
    int intellect;
    statsBase(int s = 0, int a = 0, int d = 0, int i = 0 ) {
        stamina = s;
        agility = a;
        defence = d;
        intellect = i;
    }
}

class armorItem {
public:
    statsBase stats;
    armorItem(int s = 0, int a = 0, int d = 0, int i = 0) {
        stats = statsBase(s,a,d,i);
    }
}

class armorBase {
public:
    armorItem healm;
    armorItem chest;
    armorItem pants;
    armorItem boots;
}

class raceBase {
public:
    statsBase boost;
}

class characterBase {
public:
    statsBase stats;
    raceBase race;
    armorBase armor;
} characterDefault;

// a player is really just a character, so inherit the class
class Player : public characterBase {

    // how much damage the player has taken
    int healthDeficit;

    // calculate the total health value
    int totalStamina() {
        int health = 
            stats.stamina +             // base HP
            race.boost.stamina +        // racial HP boost
            armor.healm.stats.stamina + // Armor HP
            armor.chest.stats.stamina +
            armor.pants.stats.stamina +
            armor.boots.stats.stamina ;
        return health;
    }

public:

    Player() {
        healthDeficit = 0;
    }

    // do damage to the player
    void hit(int amount = 0) {
        healthDeficit += amount;
    }

    // whats the players HP
    int health() {
        return totalStamina() - healthDeficit;
    }

}