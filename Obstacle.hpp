//
// Created by Dominic Rutkowski on 2019-04-10.
//

#ifndef CS3210_COURSE_PROJECT_OBSTACLE_HPP
#define CS3210_COURSE_PROJECT_OBSTACLE_HPP

#include "Unit.hpp"

namespace cs3210 {

    class Obstacle : public Unit {
    private:
        const std::string symbol;
    public:
        Obstacle(const std::string& symbol);
        std::string toString() const override;
        UnitType getUnitType() const override;
    };

}

#endif //CS3210_COURSE_PROJECT_OBSTACLE_HPP
