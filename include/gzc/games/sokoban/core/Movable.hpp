#ifndef SOKOBAN_MOVABLE_HPP
#define SOKOBAN_MOVABLE_HPP

#include <gzc/games/sokoban/core/Actor.hpp>

#include <string>
#include <ostream>

/**
 * Class that handles actors capable of moving
 * This class inherits from Actor
 */

namespace sokoban::core
{
    class Movable
            : public Actor
    {
    public:
        Movable( float x, float y );

        Movable( const Movable& movable );

        Movable& operator=( const Movable& movable );

        ~Movable() override = default;

        void move( float x, float y );

        [[nodiscard]] ID get_type() const override = 0;

        [[nodiscard]] std::string to_string() const override;
    };
}


#endif //SOKOBAN_MOVABLE_HPP
