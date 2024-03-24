#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
	char* name = (char*)malloc(sizeof(char) * 10);
	char* id = (char*)malloc(sizeof(char) * 10);

	printf("이름을 입력하세요: ");
	scanf("%s", name);
	printf("학번을 입력하세요: ");
	scanf("%s", id);

	printf("\n<출력>\n");
	printf("이름: %s", name);
	printf("학번: %s", id);

	free(name);
	free(id);
}
