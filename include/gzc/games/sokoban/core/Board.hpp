#ifndef SOKOBAN_BOARD_HPP
#define SOKOBAN_BOARD_HPP

#include <gzc/games/sokoban/core/Actor.hpp>
#include <gzc/games/sokoban/core/Box.hpp>
#include <gzc/games/sokoban/core/Wall.hpp>
#include <gzc/games/sokoban/core/Player.hpp>
#include <gzc/games/sokoban/core/Platform.hpp>

#include <gzc/util/logger/Logger.hpp>
#include <vector>
#include <memory>


namespace gzc::sokoban::core
{
    /**
     * Board class
     * Meant to build the layout of the leve that the player will be playing
     */
    class Board
    {
    private:
        const gzc::util::logger::Logger _logger = gzc::util::logger::Logger( "Board", "sokoban.log", true );
        std::string _level; /** The skeleton of the level */
        std::vector< std::shared_ptr< Box > > _boxes; /** All the boxes in the level */
        std::vector< std::shared_ptr< Wall > > _walls; /** All the walls in the game */
        std::vector< std::shared_ptr< Platform > > _platforms; /** All the platforms in the game */
        std::shared_ptr< Player > _player; /** The main character of the game */
        std::vector< std::shared_ptr< Actor > > _world; /** Every actor in the game */
        float _width; /** The board's maximum width */
        float _height; /** The board's maximum height */
        void init_board();

        void init_world();

        void build_world();

    public:
        enum class Collision
        {
            LEFT,
            RIGHT,
            TOP,
            BOTTOM
        };

        explicit Board( const std::string& lvl );

        Board( const Board& board );

        Board& operator=( const Board& board );

        ~Board();

        bool check_wall_collision( const std::shared_ptr< Actor >& actor, Collision type ) const;

        [[nodiscard]] bool check_box_collision( Collision type ) const;

        [[nodiscard]] float get_board_width() const;

        [[nodiscard]] float get_board_height() const;

        [[nodiscard]] bool is_completed() const;

        [[nodiscard]] std::vector< std::shared_ptr< Actor > > get_world() const;

        [[nodiscard]] std::string to_string() const;
    };
}


#endif //SOKOBAN_BOARD_HPP
