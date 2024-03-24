#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]){
	char* teamName = (char*)malloc(sizeof(char) * 10);
	char* name = (char*)malloc(sizeof(char) * 10);
	char* id = (char*)malloc(sizeof(char) * 10);
	
	pritnf("팀명을 입력하세요: ");
	scanf("%s", teamName);
	printf("이름을 입력하세요: ");
	scanf("%s", name);
	printf("학번을 입력하세요: ");
	scanf("%s", id);

	printf("\n<출력>\n");
	printf("팀명: %s", teamName);
	printf("이름: %s", name);
	printf("학번: %s", id);

	free(teamName);
	free(name);
	free(id);
}
