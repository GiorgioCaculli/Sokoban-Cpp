#include <gzc/games/sokoban/net/ServerDedicated.hpp>

using namespace gzc::sokoban::net;

ServerDedicated::ServerDedicated()
    : Server( "gzcsokoband", "localhost", 22497 )
{
}

ServerDedicated::~ServerDedicated()
= default;
