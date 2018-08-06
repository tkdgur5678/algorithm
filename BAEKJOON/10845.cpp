#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int N,queue[10000],size=0;
	scanf("%d",&N);
	while(N--) {
		char command[6];
		scanf("%s",command);
		getchar();
		if(!strcmp(command,"push")) {
			int input;
			scanf("%d", &input);
			queue[size++] = input;
		}
		else if(!strcmp(command,"pop")) {
			if( size!=0 ) {
				printf("%d\n",queue[0]);
				for(int i=1; i<size;++i) {
					queue[i-1] = queue[i];
				}
				--size;
			}
			else {
				printf("-1\n");
			}
		}
		else if(!strcmp(command,"size")) {
			printf("%d\n",size);
		}
		else if(!strcmp(command,"empty")) {
			if(size == 0) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if(!strcmp(command,"front")) {
			if(size == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n",queue[0]);
			}
		}
		else if(!strcmp(command,"back")) {
			if(size == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n",queue[size-1]);
			}
		}
	}
	return 0;
}