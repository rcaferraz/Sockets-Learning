
int main() {

	struct sockaddr_in my_addr;
	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(80);
	if(my_addr.sin_addr.s_addr = inet_addr("74.125.234.16") == -1){
		printf("Erro no inet_addr\n");
	}
	memset(&(my_addr.sin_zero), '\0', 8);
	
	//ntoa = network to ascii
	//printf("%s", inet_ntoa(ina.sin_addr));

}
