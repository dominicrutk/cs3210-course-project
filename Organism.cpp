//
// Created by Dominic Rutkowski on 2019-04-10.
//

#include "Organism.hpp"

namespace cs3210 {

    Organism::Organism(const std::string &symbol, const unsigned int maxEnergy):
    Organism(symbol, maxEnergy, maxEnergy) {}

    Organism::Organism(const std::string& symbol, const unsigned int maxEnergy, unsigned int energy):
    symbol{symbol}, maxEnergy{maxEnergy}, energy{energy} {}

}