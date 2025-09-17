#ifndef SOKOBAN_SERVER_HPP
#define SOKOBAN_SERVER_HPP

#include <string>
#include <string_view>
#include <sys/types.h>

namespace gzc::sokoban::net
{
    class Server
    {
    public:
        Server( const std::string_view& server_name, const std::string_view& server_ip, u_int16_t server_port );
        Server();
        Server( const Server& s );
        Server& operator=( const Server& s ); 
        virtual ~Server() = 0;
        [[nodiscard]] std::string get_server_name() const;
        void set_server_name( const std::string_view& server_name );
        [[nodiscard]] std::string get_server_ip() const;
        void set_server_ip( const std::string_view& server_name );
        [[nodiscard]] u_int16_t get_server_port() const;
        void set_server_port( u_int16_t server_port );
    private:
        std::string _server_name;
        std::string _server_ip;
        u_int16_t _server_port;
    };
}

#endif //SOKOBAN_SERVER_HPP
