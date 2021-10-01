#include <windows.h>
#include <stdlib.h>
#include<cstdio>

using namespace std;

int main(){
int r;
char cad[30];
char canciones[]="reggaedrum_30_89a_bytuneloniration.wav";//arreglo de canciones

char cad2[]="play ";
strcat(cad2,canciones);

if(mciSendString(cad2,0,0,0)==0)
printf("SIII");

//mciSendString("play reggaedrum_30_89a_bytuneloniration.wav",0,0,0);

char c;
// etc
do{
	fflush(stdin);
c=getchar();
printf("%c",c);

switch(c){
	
	case '0':mciSendString("play reggaedrum_30_89a_bytuneloniration.wav",0,0,0);break;
	case '1':mciSendString("pause reggaedrum_30_89a_bytuneloniration.wav",0,0,0);break;
	case '2':mciSendString("resume reggaedrum_30_89a_bytuneloniration.wav",0,0,0);break;
	case '3':mciSendString("stop reggaedrum_30_89a_bytuneloniration.wav",0,0,0);break;

}
printf("%c",c);
}while(c=='0'||c=='1'||c=='2'||c=='3');

return 0;
}

