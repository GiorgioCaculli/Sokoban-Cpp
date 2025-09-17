#ifndef SOKOBAN_CLIENT_HPP
#define SOKOBAN_CLIENT_HPP

#include <string>
#include <string_view>

namespace gzc::sokoban::net
{
    class Client
    {
    public:
        explicit Client( const std::string_view& username );
        Client();
        Client( const Client& c );
        Client& operator=( const Client& c );
        ~Client();
        [[nodiscard]] std::string get_username() const;
        void set_username( const std::string_view& username );
    private:
        u_int64_t _id;
        std::string _username;
    };
}

#endif //SOKOBAN_CLIENT_HPP
