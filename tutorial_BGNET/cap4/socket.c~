#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define MYPORT 0
//Com zero, o bind define uma porta nao usada, automaticamente

// All ports below 1024 are RESERVED (unless you’re the superuser)!
// You can have any port number above that, right up to 65535
// (provided they aren’t already being used by another program.)


int main(){
	int sockfd;
	struct sockaddr_in my_addr;
	
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd == -1){
		perror("Socket");
		exit(1);
	}
	
	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(MYPORT);
	my_addr.sin_addr.s_addr = htonl(INADDR_ANY); //INADDR_ANY = meu ip (ZERO).	
	//my_addr.sin_addr.s_addr = inet_addr("192.168.0.195");
	//peguei do inet addr, "ifconfig" no console
	memset(&(my_addr.sin_zero), '\0', 8);

	int bindreturn = bind(sockfd, (struct sockaddr *) &my_addr, sizeof(struct sockaddr));
	if(bindreturn == -1) { //error
		perror("Bind");
		exit(1);
	}

	return 0;
}
