#ifndef SOKOBAN_WALL_HPP
#define SOKOBAN_WALL_HPP

#include <gzc/games/sokoban/core/Actor.hpp>

#include <string>
#include <ostream>


namespace sokoban::core
{
    class Wall final
            : public Actor
    {
    public:
        Wall( float x, float y );

        Wall( const Wall& wall );

        Wall& operator=( const Wall& wall );

        ~Wall() override;

        [[nodiscard]] ID get_type() const override;

        [[nodiscard]] std::string to_string() const override;
    };
}


#endif //SOKOBAN_WALL_HPP
