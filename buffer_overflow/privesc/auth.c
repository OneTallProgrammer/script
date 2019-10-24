#include <stdio.h>
#include <string.h>

int auth(char* code){

	int is_admin = 0;
	
	char buf[4];

	strcpy(buf, code);

	if(strcmp(buf, "1234") == 0) is_admin = 1;

	return is_admin;

}

int main(int argc, char* argv[]){

	int admin = auth(argv[1]);

	if(admin){
		printf("Successfully Authenticated\n");
	}

return 0;
}
