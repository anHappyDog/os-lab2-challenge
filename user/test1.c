#include <lib.h>

int main() {
	int *t = (int*)0xc0000000;
	for (int i = 0; i < 1024; ++i) {
		if (vpd[i] != 0)
		debugf("%4d : %08x\n",i,vpd[i]);
	}
	/*char buf[1000];
	int fd = open("/motd",O_RDONLY);
	if (fd < 0) {
		user_panic("can;t open!\n");
	}
	if (read(fd,buf,1000) < 0) {
		user_panic("asddsadas\n");
	}
	close(fd);
	buf[1000] = 0;
	debugf(";;;;%s;;;;\n",buf);*/
	return 0;
}
