/*
	Author:	Matt Layher
	Date:	3/21/12
	Project: tcpd
	Module:	main.h (Main header)

	Description:
	A header containing prototypes used in main.c
*/

//------------------------ PROTOTYPES ------------------------

// Daemonize function, used to detach a child from the parent and run the server in daemon mode
void daemonize();

// Application function, to be loaded into the threadpool to be launched on connect
void *echo(void *);

// Print stats function, which prints out server statistics to console when called
void print_stats();

// TCP listener function, for the network thread
void *tcp_listen();
