#ifndef SOKOBAN_PLAYER_HPP
#define SOKOBAN_PLAYER_HPP

#include <gzc/games/sokoban/core/Movable.hpp>

#include <string>


namespace gzc::sokoban::core
{
    class Player
            : public Movable
    {
    public:
        Player( float x, float y );

        Player( const Player& player );

        Player& operator=( const Player& player );

        ~Player() override;

        [[nodiscard]] ID get_type() const override;

        [[nodiscard]] std::string to_string() const override;
    };
}


#endif //SOKOBAN_PLAYER_HPP
