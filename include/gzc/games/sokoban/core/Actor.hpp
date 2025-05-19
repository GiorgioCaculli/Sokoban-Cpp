#ifndef SOKOBAN_ACTOR_HPP
#define SOKOBAN_ACTOR_HPP

#include <string>
#include <ostream>


namespace sokoban::core
{
    /**
     * Actor class
     * Parent class for any actor that will be displayed throughout the game
     * Parent class of both movable and non movable actors
     */
    class Actor
    {
    private:
        float _x; /** The X coordinate on the board */
        float _y; /** The Y coordinate on the board */
    public:
        enum ID /** We consider there to be 4 types of actors */
        {
            BOX, /** A box */
            PLATFORM, /** A platform on which we put the box */
            PLAYER, /** A player */
            WALL /** A wall */
        };

        Actor( float x, float y );

        Actor( const Actor& actor );

        Actor& operator=( const Actor& actor );

        virtual ~Actor() = default;

        bool is_left_collision( const Actor* actor ) const;

        bool is_right_collision( const Actor* actor ) const;

        bool is_top_collision( const Actor* actor ) const;

        bool is_bottom_collision( const Actor* actor ) const;

        [[nodiscard]] float get_x() const;

        void set_x( float x );

        [[nodiscard]] float get_y() const;

        void set_y( float y );

        [[nodiscard]] virtual ID get_type() const = 0;

        [[nodiscard]] virtual std::string to_string() const;

        bool operator==( const Actor& actor ) const;

        bool operator!=( const Actor& actor ) const;
    };
}


#endif //SOKOBAN_ACTOR_HPP
