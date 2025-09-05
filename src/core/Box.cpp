#include <gzc/games/sokoban/core/Box.hpp>

#include <sstream>

using namespace sokoban::core;

Box::Box( const float x, const float y )
        : Movable( x, y )
{
}

Box::Box( const Box &box )
        : Box( box.get_x(), box.get_y() )
{
}

Box &Box::operator=( const Box &box )
{
    if ( &box != this )
    {
        set_x( box.get_x() );
        set_y( box.get_y() );
    }
    return *this;
}

Box::~Box()
= default;

Actor::ID Box::get_type() const
{
    return BOX;
}

std::string Box::to_string() const
{
    std::stringstream ss;
    ss << "Box: " << Movable::to_string();
    return ss.str();
}
