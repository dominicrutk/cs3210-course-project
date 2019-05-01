//
// Created by Dominic Rutkowski on 2019-04-10.
//

#ifndef CS3210_COURSE_PROJECT_ORGANISM_HPP
#define CS3210_COURSE_PROJECT_ORGANISM_HPP

#include <string>

namespace cs3210 {

    class Organism {
    protected:
        const std::string symbol;

        const unsigned int maxEnergy;
        unsigned int energy;
    public:
        Organism(const std::string& symbol, const unsigned int maxEnergy);
        Organism(const std::string& symbol, const unsigned int maxEnergy, unsigned int energy);
        void setEnergy(unsigned int energy);
        const unsigned int getMaxEnergy() const;
        const unsigned int getEnergy() const;
        virtual const std::string toString() const = 0;
    };

}

#endif //CS3210_COURSE_PROJECT_ORGANISM_HPP
