//
// Created by noxx on 2/5/22.
//

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

#include "../src/TcpSocket.h"

using toolbox::TcpSocket;

// Server
int main()
{
    TcpSocket sock = TcpSocket();
    sock.bind("5000" );
    sock.tcp_listen();
    sock.tcp_accept();
    string recv;

    for(;;)
    {
        sock.tcp_recv( recv );
        cout << recv << endl;
    }

    return 0;
}

