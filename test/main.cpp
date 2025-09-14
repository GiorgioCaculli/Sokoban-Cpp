#include <iostream>

#include <gzc/util/logger/Logger.hpp>

#include <gzc/games/sokoban/core/Board.hpp>
#include <gzc/games/sokoban/net/Server.hpp>
#include <gzc/games/sokoban/net/Client.hpp>

#include <sstream>

using namespace gzc::util::logger;
using namespace gzc::sokoban::core;

int main( const int argc, char *argv[] )
{
    try
    {
        const Logger logger( "main", "sokoban.log", true );

        std::stringstream ss;

        ss << "Calling: ";

        for( int i = 0; i < argc; i++ )
        {
            ss << argv[ i ] << " ";
        }
        logger.log( Logger::Level::INFO, ss.str() );

        if( argc <= 1 )
        {
            logger.log( Logger::Level::ERROR, "Level Missing, Please call ./sokoban <text file>" );
            return -1;
        }

        Board board( argv[ 1 ] );

        logger.log( Logger::Level::INFO, "Closing Program..." );
    }
    catch( std::exception &e )
    {
        std::cerr << e.what() << std::endl;
        return -1;
    }


    return 0;
}
