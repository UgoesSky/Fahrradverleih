#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include <termios.h>
#include <fcntl.h>
#define DEVICE "/dev/ttyS0"
#define BAUD B9600

int open_port(void){
	int fd_ser;
	struct termios terminal;
	fd_ser = open(DEVICE, O_RDWR | O_NOCTTY | O_NDELAY | O_NONBLOCK);
	if (fd_ser == -1)
	{
		perror("Kann die Serielle nicht oeffnen");
		exit(1);
	}
	fcntl(fd_ser, F_SETFL,FNDELAY);
	terminal.c_cflag = BAUD | CS8 | CLOCAL | CREAD;
	terminal.c_iflag = IGNPAR | ICRNL;
	terminal.c_oflag = 0;
	terminal.c_lflag &=~(ICANON);
	tcflush(fd_ser,TCIOFLUSH);
	tcsetattr(fd_ser,TCSANOW,&terminal);
	return fd_ser;
}


int read_port(int *fd_ser,unsigned char* buffer) {
	int a;
	/*Variablen für select*/
	fd_set rfds;
	struct timeval tv;
	int retval;

	FD_ZERO(&rfds);
	FD_SET(*fd_ser,&rfds);
	tv.tv_sec = 1;
	tv.tv_usec = 0;
	retval = select(*fd_ser+1,&rfds,NULL,NULL,&tv);
	if (retval) {
		a=read(*fd_ser,buffer,255);
		return a;
	} else return 0;


}


int main(void){
	int bytes;
	int i;
	int fd_ser;
	unsigned char puffer[300];
	fd_ser = open_port();
	while(1){
	bytes = read_port(&fd_ser,puffer);
	if( bytes > 0){
	for (i = 0;i< bytes;i++){
		printf("%i\t",puffer[i]);
	}
	printf("\n");
	}
}
	return 0;
}
