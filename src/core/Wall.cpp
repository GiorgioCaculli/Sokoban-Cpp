#include <gzc/games/sokoban/core/Wall.hpp>

#include <sstream>

using namespace sokoban::core;

/**
 * Default constructor for the walls
 * @param x The X coordinate on the board
 * @param y The Y coordinate on the board
 */
Wall::Wall( const float x, const float y )
        : Actor( x, y )
{
}

/**
 * Copy constructor for the wall
 * @param wall The wall we wish to copy the information from
 */
Wall::Wall( const Wall &wall )
        : Wall( wall.get_x(), wall.get_y() )
{
}

/**
 * Redefinition of the = operator
 * @param wall The wall we wish to copy the information from
 * @return The new instance of wall with the copied information
 */
Wall &Wall::operator=( const Wall &wall )
{
    if ( &wall != this )
    {
        set_x( wall.get_x() );
        set_y( wall.get_y() );
    }
    return *this;
}

/**
 * Default destructor for the wall actor
 */
Wall::~Wall()
= default;

/**
 * Get the nature of a wall
 * @return The fact that it is a wall actor
 */
Actor::ID Wall::get_type() const
{
    return Actor::WALL;
}

/**
 * Textual output stating the wall's information
 * @return The textual output with the wall's information
 */
std::string Wall::to_string() const
{
    std::stringstream ss;
    ss << "Wall: " << Actor::to_string();
    return ss.str();
}
