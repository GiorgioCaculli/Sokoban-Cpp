#ifndef SOKOBAN_BOX_HPP
#define SOKOBAN_BOX_HPP

#include <gzc/games/sokoban/core/Movable.hpp>

#include <string>


namespace gzc::sokoban::core
{
    /**
     * Box class
     * This class is an actor that can move, as such it inherits from the classe Movable
     */
    class Box
            : public Movable
    {
    public:
        Box( float x, float y );

        Box( const Box& box );

        Box& operator=( const Box& box );

        ~Box() override;

        [[nodiscard]] ID get_type() const override;

        [[nodiscard]] std::string to_string() const override;
    };
}


#endif //SOKOBAN_BOX_HPP
