#include <iostream>

#include <gzc/games/sokoban/core/Board.hpp>

#include <gzc/logger/Logger.hpp>

#include <sstream>

using namespace util;
using namespace sokoban::core;

int main( int argc, char *argv[] )
{
    try
    {
        Logger logger( "main", "sokoban.log", true );

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
