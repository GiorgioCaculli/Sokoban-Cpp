#ifndef SOKOBAN_PLATFORM_HPP
#define SOKOBAN_PLATFORM_HPP

#include <gzc/games/sokoban/core/Actor.hpp>

#include <string>
#include <ostream>


namespace sokoban::core
{
    class Platform final
            : public Actor
    {
    public:
        Platform( float x, float y );

        Platform( const Platform& platform );

        Platform& operator=( const Platform& platform );

        ~Platform() override;

        [[nodiscard]] ID get_type() const override;

        [[nodiscard]] std::string to_string() const override;
    };
}


#endif //SOKOBAN_PLATFORM_HPP
