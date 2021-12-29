#include <iostream>

#include "core/Board.hpp"
#include <util/logger/Logger.hpp>

#include <sstream>

using namespace util;
using namespace sokoban::core;

int main( int argc, char *argv[] )
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

    return 0;
}
