#include <gzc/games/sokoban/core/Movable.hpp>

#include <sstream>

using namespace sokoban::core;

/**
 * Just like the Actor class, the object 'movable' must also instance the X and Y coordinates
 */
Movable::Movable( const float x, const float y )
        : Actor( x, y )
{
}

/**
 * Copy constructor for the movable actor
 */
Movable::Movable( const Movable &movable )
        : Movable( movable.get_x(), movable.get_y() )
{
}

/**
 * Redefinition of the = operator
 * @param movable The movable object we wish to copy the information from
 * @return The new instance of the actor with the copied information
 */
Movable &Movable::operator=( const Movable &movable )
{
    if ( &movable != this )
    {
        set_x( movable.get_x() );
        set_y( movable.get_y() );
    }
    return *this;
}

/**
 * Make the object transition from a coordinate to another
 * @param x The X units to move to
 * @param y The Y units to move to
 */
void Movable::move( float x, float y )
{
    set_x( get_x() + x );
    set_y( get_y() + y );
}

/**
 * Textual output for the actor
 * @return Display the information related to the movable object
 */
std::string Movable::to_string() const
{
    std::stringstream ss;
    ss << Actor::to_string();
    return ss.str();
}
