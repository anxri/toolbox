//
// Created by noxx on 2/5/22.
//

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

#include "TcpSocket.h"

using toolbox::TcpSocket;

// Server
int main()
{
    TcpSocket sock = TcpSocket();
    sock.tcp_connect("127.0.0.1", "5000");

    string recv;

    for(;;)
    {

        sleep(1);
        cout << "sending: \"Hallo Welt!\"" << endl;
        sock.tcp_send( "Hallo Welt!" );
    }

    return 0;
}
