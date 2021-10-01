#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nivel1();
void nivel2();
void nivel3();
void menujuego();
void menucontroles();
void textoNiveles();
void insertarPremio();
void mostrarPremio();
struct premios{
	char premio[50];
	premios *siguiente;
	premios *anterior;
};
premios *primero=NULL;
premios *ultimo=NULL;
int contreg1=0,contreg2=0,contreg3=0;
int main()
{
	int menu,menu2,meta=0;
	do{
	system("cls");
	menu=0;
	menujuego();
	scanf("%d",&menu);
	switch(menu){
		case 1:
				do{
				system("cls");
				textoNiveles();
				scanf("%d",&menu2);
				switch(menu2){
					case 1:
						nivel1();	
					break;
					case 2:
						nivel2();
					break;
					case 3:
						nivel3();
					break;
				}
			system("cls");
			}while(menu2<4);
		break;
		case 2:
			system("cls");
			menucontroles();
			system("pause");
			system("cls");
		break;
		case 3:
			system("cls");
			if(contreg1==0 && contreg2==0 && contreg3==0){
				printf("\033[0;31m");
				printf("\t _____ _____    _____ _____ _____ _____ _____ _____    _____ _____ _____ _____ _____ _____ _____ \n");
				printf("\t|   | |     |  |_   _|     |   __|   | |   __|   __|  |  _  | __  |   __|     |     |     |   __|\n");
				printf("\t| | | |  |  |    | | |-   -|   __| | | |   __|__   |  |   __|    -|   __| | | |-   -|  |  |__   |\n");
				printf("\t|_|___|_____|    |_| |_____|_____|_|___|_____|_____|  |__|  |__|__|_____|_|_|_|_____|_____|_____|\n");
				printf("\033[0;0m");
			}	
			else{
				mostrarPremio();
			}
			system("pause");
			system("cls");			
		break;
		case 4:
			printf("\nVUELVA PRONTO");
		break;
	}
	}while(menu<4);
}

void menujuego(){
	printf("\033[1;32m");
	printf("\n");
	printf("\t    _/          _/_/    _/_/_/    _/_/_/_/  _/_/_/    _/_/_/  _/      _/  _/_/_/_/_/    _/_/    \n");
	printf("\t   _/        _/    _/  _/    _/  _/        _/    _/    _/    _/_/    _/      _/      _/    _/   \n");
	printf("\t  _/        _/_/_/_/  _/_/_/    _/_/_/    _/_/_/      _/    _/  _/  _/      _/      _/    _/    \n");
	printf("\t _/        _/    _/  _/    _/  _/        _/    _/    _/    _/    _/_/      _/      _/    _/     \n");
	printf("\t_/_/_/_/  _/    _/  _/_/_/    _/_/_/_/  _/    _/  _/_/_/  _/      _/      _/        _/_/       \n");
	printf("\033[0;0m");
	printf("\n");
	printf("\n");
	printf("\033[1;34m");
	printf("\t\t\t\t      _____ _____ _____ _____ __    _____ _____ \n");
	printf("\t\t\t\t /|  |   | |     |  |  |   __|  |  |   __|   __|\n");
	printf("\t\t\t\t  |  | | | |-   -|  |  |   __|  |__|   __|__   |\n");
	printf("\t\t\t\t  |  |_|___|_____| ___/|_____|_____|_____|_____|\n");
	printf("\033[0;0m");
	printf("\033[1;35m");
	printf("\t\t\t __    _____ _____ _____ _____ _____ _____ __    _____ _____ \n");
	printf("\t\t\t   )  |     |     |   | |_   _| __  |     |  |  |   __|   __|\n");
	printf("\t\t\t  /   |   --|  |  | | | | | | |    -|  |  |  |__|   __|__   |\n");
	printf("\t\t\t /__  |_____|_____|_|___| |_| |__|__|_____|_____|_____|_____|\n");
	printf("\033[0;0m");
	printf("\033[1;34m");
	printf("\t\t\t\t __   _____ _____    __ _____ _____ _____ _____ \n");
	printf("\t\t\t\t __| |     | __  |__|  |   __|_   _|     |   __|\n");
	printf("\t\t\t\t   | |  |  | __ -|  |  |   __| | | |  |  |__   |\n");
	printf("\t\t\t\t __| |_____|_____|_____|_____| |_| |_____|_____|\n");
	printf("\033[0;0m");
	printf("\033[1;35m");
	printf("\t\t\t\t\t      _____ _____ __    _____ _____ \n");
	printf("\t\t\t\t\t|__| |   __|  _  |  |  |     | __  |\n");
	printf("\t\t\t\t\t   | |__   |     |  |__|-   -|    -|\n");
	printf("\t\t\t\t\t   | |_____|__|__|_____|_____|__|__|\n");
	printf("\033[0;0m");
}

void menucontroles(){
	int n=55;
	printf("\033[1;32m");
	char linea[n];
	printf("\n\n\n\n");
	printf("\t");
	for(int i=0;i<n;i++){
		linea[i]=178;
		printf("%c",linea[i]);
	}printf("\n");
	printf("\033[0;0m");
	printf("\033[0;33m");
	printf("\n\t\tUSA W A S D PARA MOVERTE\n\t\tUNA VEZ SELECCIONADA LA TECLA\n\t\tDA ENTER PARA EFECTUAR EL MOVIMIENTO\n\t\tPUEDES COLOCAR VARIAS LETRAS\n\t\tDEL MISMO TIPO PARA AVANZAR MAS CASILLAS");
	printf("\033[0;0m");
	printf("\033[1;35m");
	printf("\n\n\n\t\t[$]\tPREMIOS COLECCIONABLES");
	printf("\033[0;0m");
	printf("\033[0;33m");
	printf("\n\n\n\t\tAL TOCAR [$] PUEDES ESCOGER QUE PREMIO OBTENER");
	printf("\033[0;0m");
	printf("\033[1;31m");
	printf("\n\n\n\t\t[<+>]\tSALIDA");
	printf("\033[0;0m");
	printf("\033[0;33m");
	printf("\n\n\n\t\tBUENA SUERTE Y DIVIERTETE (/^o^)/");
	printf("\033[0;0m");
	for(int i=52;i<n;i++){
		linea[i]=' ';
		printf("\t%c\n",linea[i]);
	}
	printf("\t");
	printf("\033[1;32m");
	for(int i=0;i<n;i++){
		linea[i]=178;
		printf("%c",linea[i]);
	}
	printf("\n\n\n\n");	
	printf("\033[0;0m");
}

void textoNiveles(){
	printf("\033[0;32m");
	printf("\t\t\t\t      _____ _____ _____ _____ __    \n");
	printf("\t\t\t\t     |   | |     |  |  |   __|  |   	/|	\n");
	printf("\t\t\t\t     | | | |-   -|  |  |   __|  |__ 	 |	\n");
	printf("\t\t\t\t     |_|___|_____| ___/|_____|_____|	 |	\n");
	printf("\033[0;0m");
	printf("\n");
	printf("\033[0;33m");
	printf("\t\t\t\t      _____ _____ _____ _____ __        __  \n");
	printf("\t\t\t\t     |   | |     |  |  |   __|  |   	  )	\n");
	printf("\t\t\t\t     | | | |-   -|  |  |   __|  |__ 	 /	\n");
	printf("\t\t\t\t     |_|___|_____| ___/|_____|_____|	/__	\n");
	printf("\033[0;0m");
	printf("\n");
	printf("\033[0;31m");
	printf("\t\t\t\t      _____ _____ _____ _____ __        __  \n");
	printf("\t\t\t\t     |   | |     |  |  |   __|  |   	__|	\n");
	printf("\t\t\t\t     | | | |-   -|  |  |   __|  |__ 	  |	\n");
	printf("\t\t\t\t     |_|___|_____| ___/|_____|_____|	__|	\n");
	printf("\n");
	printf("\033[0;0m");
	printf("\033[1;34m");	
	printf("\t\t\t\t\t _____ _____ _____ _____    ___ \n");
	printf("\t\t\t\t\t|     |   __|   | |  |  |  | | |\n");
	printf("\t\t\t\t\t| | | |   __| | | |  |  |  |_  |\n");
	printf("\t\t\t\t\t|_|_|_|_____|_|___|_____|    |_|\n");
	printf("\033[0;0m");
}

void insertarPremio(){
		fflush(stdin);
		premios *q=(premios*)malloc(sizeof(premios));
		gets(q->premio);
		if(primero==NULL){
			primero=q;
			primero->siguiente=primero;
			ultimo=primero;
			primero->anterior=ultimo;
		}
		else{
			ultimo->siguiente=q;
			q->siguiente=primero;
			q->anterior=ultimo;
			ultimo=q;
			primero->anterior=ultimo;
		}
		printf("Se ha agregado a tus objetos con exito!!\n");
}

void mostrarPremio(){
    printf("\033[0;33m");
	printf("\t\t\t\t _____ _____ _____ _____ _____ _____ _____ \n");
	printf("\t\t\t\t|  _  | __  |   __|     |     |     |   __|\n");
	printf("\t\t\t\t|   __|    -|   __| | | |-   -|  |  |__   |\n");
	printf("\t\t\t\t|__|  |__|__|_____|_|_|_|_____|_____|_____|\n");
	printf("\033[0;0m");
	printf("\nEscribe el premio que deseas ver de los que tienes: \n");
	premios *indice=(premios*)malloc(sizeof(premios));
	indice=primero;
	if(indice!=NULL){
		do{
			printf("\n[%s]\t",indice->premio);
			indice=indice->siguiente;
		}while(indice!=primero);
		printf("\n");
	}
	else{
	printf("\t\t\t\t _____ _____    _____ _____ _____ _____ _____ _____    _____ _____ _____ _____ _____ _____ _____ \n");
	printf("\t\t\t\t|   | |     |  |_   _|     |   __|   | |   __|   __|  |  _  | __  |   __|     |     |     |   __|\n");
	printf("\t\t\t\t| | | |  |  |    | | |-   -|   __| | | |   __|__   |  |   __|    -|   __| | | |-   -|  |  |__   |\n");
	printf("\t\t\t\t|_|___|_____|    |_| |_____|_____|_|___|_____|_____|  |__|  |__|__|_____|_|_|_|_____|_____|_____|\n");
	}
	printf("\n");
	premios *q=(premios*)malloc(sizeof(premios));
	fflush(stdin);
	gets(q->premio);
	if(strcmpi(q->premio,"globo")==0||strcmpi(q->premio,"Globo")==0){
		printf("\n");
		system("cls");
		printf("\033[0;31m");
		printf("\t        ,,,,,,,,,,,,,\n");
		printf("\t    .;;;;;;;;;;;;;;;;;;;,.\n");
		printf("\t  .;;;;;;;;;;;;;;;;;;;;;;;;,\n");
		printf("\t.;;;;;;;;;;;;;;;;;;;;;;;;;;;;.\n");
		printf("\t;;;;;@;;;;;;;;;;;;;;;;;;;;;;;;\n");
		printf("\t;;;;@@;;;;;;;;;;;;;;;;;;;;;;;;'\n");
		printf("\t;;;;@@;;;;;;;;;;;;;;;;;;;;;;;;\n");
		printf("\t`;;;;@;;;;;;;;;;;;;;;@;;;;;;;'\n");
		printf("\t `;;;;;;;;;;;;;;;;;;;@@;;;;;'\n");
		printf("\t   `;;;;;;;;;;;;;;;;@@;;;;'\n");
		printf("\t     `;;;;;;;;;;;;;@;;;;'\n");
		printf("\t        `;;;;;;;;;;;;'   \n");
		printf("\t           `;;;;;;'      \n");
		printf("\t              ;;         \n");
		printf("\033[0;0m");
		printf("\t              `          \n");
		printf("\t             `           \n");
		printf("\t            `            \n");
		printf("\t           `             \n");
		printf("\t          `              \n");
		printf("\t         `              \n");
		printf("\t        `                 \n");
		printf("\t        `                    \n");
		printf("\n");
		printf("[UN GLOBO MUY BONITO Y COLORIDO, NO LO PIERDAS!!]\n");
		printf("\n");
	}
	if(strcmpi(q->premio,"cactus")==0||strcmpi(q->premio,"Cactus")==0){
		printf("\n");
		system("cls");
		printf("\033[0;32m");
		printf("\t       ,`""',\n");
		printf("\t      ;' ` ;\n");
		printf("\t      ;`,',;\n");
		printf("\t      ;' ` ;\n");
		printf("\t ,,,  ;`,',;\n");
		printf("\t;,` ; ;' ` ;   ,',\n");
		printf("\t;`,'; ;`,',;  ;,' ;\n");
		printf("\t;',`; ;` ' ; ;`'`';\n");
		printf("\t;` '',''` `,',`',;\n");
		printf("\t `''`'; ', ;`'`'\n");
		printf("\t      ;' `';\n");
		printf("\t      ;` ' ;\n");
		printf("\t      ;' `';\n");
		printf("\t      ;` ' ;\n");
		printf("\t      ; ',';\n");
		printf("\t      ;,' ';\n");
		printf("\033[0;0m");
		printf("\n");
		printf("[QUE BONITO CACTUS, PERO TEN CUIDADO CON SUS PINCHOS]\n");
		printf("\n");
	}
	if(strcmpi(q->premio,"Lentes")==0||strcmpi(q->premio,"lentes")==0){
		printf("\n");
		system("cls");
		printf("\033[1;34m");
		printf("\t             ....:::::::::....                               ....:::::::::....\n");
		printf("\t        ..:::''''         '''':::..                     ..:::''''         '''':::..\n");
		printf("\t      .:''                       '':.    ..:::::..    .:''                       '':.\n");
		printf("\t    .:'                             ':.::''     ''::.:'                             ':.\n");
		printf("\t.---::______________________________.::_____________::.______                ____....::---.\n");
		printf("\t:___::_____________________________:c::_____________::z:_____`.__....----''''____....::___:\n");
		printf("\t   '::                            '_.:'        ____.::.:-'''''''':.`.....----''''    ::'\n");
		printf("\t    ':.                        ____.::.----''''____..::.-''''  `.`.                 .:'\n");
		printf("\t     ':.                     .'___.::..----''''''      ':.       : :               .:'\n");
		printf("\t       ':.                 .'.' .:'                      ':.      : :            .:'\n");
		printf("\t         '::..            : :.::'                          '::..   : :        ..::'\n");
		printf("\t            ''::::......::::''                                '':::::.:...::::''\n");
		printf("\t                  '''''': :                                          :'':''\n");
		printf("\t                       : :                                           '.  :\n");
		printf("\t                      : .'                                            '._'\n");
		printf("\t                     :_.'\n");
		printf("\n");
		printf("\033[0;0m");
		printf("\n");
		printf("\t\t\t\t[UNOS BUENOS LENTES PARA TIRAR FACHA]\n");
		printf("\n");
	}
	if(strcmpi(q->premio,"Helado")==0||strcmpi(q->premio,"helado")==0){
		printf("\n");
		system("cls");
		printf("\033[1;35m");
		printf("\t            .oo.\n");
		printf("\t          oGGGGGGo\n");
		printf("\t         GGGGGGGGGG\n");
		printf("\t  .mMMMMMMGGGGGGEEEE=\n");
		printf("\t MMMMMMMMMMMGGEEEEEEEE\n");
		printf("\tMMMMMMMMMMMNICKEEEEEEEE\n");
		printf("\tMMMMMMMMMMMMMEEEEEEEEEE\n");
		printf("\t!MMMMMMMMMMMOOEEEEEEEE\n");
		printf("\t MMM!MMMMMMOOOOOOE!=\n");
		printf("\033[0;0m");
		printf("\033[01;33m");
		printf("\t  !!!!!!!!!!!!!!!!!\n");
		printf("\t   !!!!!!!!!!!!!!!'\n");
		printf("\t   !!!!!!!!!!!!!!!\n");
		printf("\t    !!!!!!!!!!!!!'\n");
		printf("\t     !!!!!!!!!!!!\n");
		printf("\t      `!!!!!!!!!'\n");
		printf("\t       !!!!!!!!!\n");
		printf("\t       `!!!!!!!'\n");
		printf("\t        !!!!!!!\n");
		printf("\t        `!!!!!'\n");
		printf("\t         !!!!!\n");
		printf("\t         `!!!'\n");
		printf("\t          !!!\n");
		printf("\t          `!'\n");
		printf("\t           !   \n");
		printf("\033[0;0m");
		printf("\n");
		printf("[UN FRIO Y DELICIOSO HELADO PARA EL VERANO]\n");
		printf("\n");
	}
	if(strcmpi(q->premio,"Batman")==0||strcmpi(q->premio,"batman")==0){
		printf("\n");
		system("cls");
		printf("\033[0;33m");
		printf("\t              *         *      *         *\n");
		printf("\t          ***          **********          ***\n");
		printf("\t       *****           **********           *****\n");
		printf("\t     *******           **********           *******\n");
		printf("\t   **********         ************         **********\n");
		printf("\t  ****************************************************\n");
		printf("\t ******************************************************\n");
		printf("\t********************************************************\n");
		printf("\t********************************************************\n");
		printf("\t********************************************************\n");
		printf("\t ******************************************************\n");
		printf("\t  ********      ************************      ********\n");
		printf("\t   *******       *     *********      *       *******\n");
		printf("\t     ******             *******              ******\n");
		printf("\t       *****             *****              *****\n");
		printf("\t          ***             ***              ***\n");
		printf("\t            **             *              **\n");
		printf("\033[0;0m");
		printf("\n");
		printf("[Na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, na, BATMAN!]\n");
		printf("\n");
	}
	if(strcmpi(q->premio,"Luna")==0||strcmpi(q->premio,"luna")==0){
		printf("\n");
		system("cls");
		printf("\033[01;33m");
		printf("\t     *                                                            *\n");
		printf("\t                             aaaaaaaaaaaaaaaa               *\n");
		printf("\t                         aaaaaaaaaaaaaaaaaaaaaaaa\n");
		printf("\t                      aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
		printf("\t                    aaaaaaaaaaaaaaaaa           aaaaaa\n");
		printf("\t                  aaaaaaaaaaaaaaaa                  aaaa\n");
		printf("\t                 aaaaaaaaaaaaa aa                      aa\n");
		printf("\t*               aaaaaaaa      aa                         a\n");
		printf("\t                aaaaaaa aa aaaa\n");
		printf("\t          *    aaaaaaaaa     aaa\n");
		printf("\t               aaaaaaaaaaa aaaaaaa                               *\n");
		printf("\t               aaaaaaa    aaaaaaaaaa\n");
		printf("\t               aaaaaa a aaaaaa aaaaaa\n");
		printf("\t                aaaaaaa  aaaaaaa\n");
		printf("\t                aaaaaaaa                                 a\n");
		printf("\t                 aaaaaaaaaa                            aa\n");
		printf("\t                  aaaaaaaaaaaaaaaa                  aaaa\n");
		printf("\t                    aaaaaaaaaaaaaaaaa           aaaaaa        *\n");
		printf("\t      *               aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
		printf("\t                         aaaaaaaaaaaaaaaaaaaaaaaa\n");
		printf("\t                      *      aaaaaaaaaaaaaaaa\n");
		printf("\033[0;0m");
		printf("\n");
		printf("\t[LA LUNA ES HERMOSA,NO ES ASI\?]\n");
		printf("\n");
	}
}

void nivel1(){
			system("cls");
			char mapa1[50][50]=
				   {"\t===============================",
                    "\t|o        |$   |   |          |",
                    "\t| === === |===   | | |==== |  |",
                    "\t| |   | | |    | | | |   | |  |",
                    "\t|   | | | |  | | | | |   | |==|",
                    "\t|===| | | |  | |=| | |     |  |",
                    "\t|   | | | |  |     | | ====|  |",
                    "\t| | | | | |  | = | | |  |  |  |",
                    "\t| | | | | |==| | |   |     |  |",
                    "\t| |   |      | |=| | |= =|==  |",
                    "\t| |===| |=== |  |  | |   |    |",
                    "\t|       |  | |  |  | |  =| ===|",
                    "\t| ======== | |= |  |=|        <+>",
                    "\t|     |  | |         |  |=|===|",
                    "\t|==== |  | | |  | ===|  | |   |",
                    "\t|     |  | | |  | |  |    |   |",
                    "\t| |==    |   |=== == |====|   |",
                    "\t| |   |    |       |          |",
                    "\t===============================", 
                    };
					int x,y,ancho,altura;
					char movimiento;
					x=1;
					y=2; 
					ancho=32;
					altura=12;
					int regalo1x=1,regalo1y=12;
					for(int i=0;i<=18;i++)
						puts(mapa1[i]);
					while(x != altura || y != ancho)
					{
  						movimiento = getchar();
   					if(movimiento == 's'|| movimiento=='S')
   					{
        					if(mapa1[x+1][y] !='='&&mapa1[x+1][y] !='|')
        				{
        			    	mapa1[x][y] = ' ';
        			    	x++;
        					mapa1[x][y]='O';
       					}
        				else
   						{
    					printf("\nCamino bloqueado!!\n");
    					system("pause");
						}
    				}
    				if(movimiento=='w'|| movimiento=='W')
    				{
        				if(mapa1[x-1][y] != '='&&mapa1[x-1][y] !='|')
         				{
            				mapa1[x][y] = ' ';
             				x--;
             				mapa1[x][y]='O';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
    				if(movimiento == 'a'|| movimiento=='A')
    				{
     				   if(mapa1[x][y-1] != '|'&&mapa1[x][y-1] != '=')
        				{
         				   mapa1[x][y] = ' ';
         				   y--;
          				  mapa1[x][y]='o';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
    				if(movimiento == 'd' || movimiento=='D')
   					{
        				if(mapa1[x][y+1] != '|'&&mapa1[x][y+1] != '=')
        				{
							mapa1[x][y] = ' ';
        					y++;
        					mapa1[x][y]='o';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
       				if(y==regalo1y && x==regalo1x && contreg1==0){
							printf("\n\aOBTUVISTE UN REGALO\n");
							contreg1++;
							system("pause");
							printf("\nEscoge entre: Globo o Cactus\n");
							insertarPremio();
							system("pause");
					}
        			system("cls");
        			for(int i=0;i<=18;i++){
        				puts(mapa1[i]);
					}
					}
    				system("cls");
    				printf("\033[0;33m");
					printf("\t\t\t\t _____ _____ _____ _____ _____ _____ _____ \n");
					printf("\t\t\t\t|   __|  _  |   | |  _  |   __|_   _|   __|\n");
					printf("\t\t\t\t|  |  |     | | | |     |__   | | | |   __|\n");
					printf("\t\t\t\t|_____|__|__|_|___|__|__|_____| |_| |_____|\n\a");
					printf("\033[0;0m");
    				system("pause");
    				system("cls");
}

void nivel2(){
			system("cls");
			char mapa2[50][50]=
				   {"\t===============================",
                    "\t|o|     | |    |              <+>",
                    "\t| |== === |===== | | |=====|  |",
                    "\t| |   | | |      | | |   | |  |",
                    "\t| | | |   |  |=| | | | | | |==|",
                    "\t| |=| | |=|  | |=|=| |     ||$|",
                    "\t|   | | | |  |     | | ====|| |",
                    "\t| | | | | |    = | | |  |  || |",
                    "\t|   | | | |==| | | | |     || |",
                    "\t| |   | |    | |=| | |===| =| |",
                    "\t| | | | |=== |  |  | |   |  | |",
                    "\t| | |   |    |  |  | |  =| =| |",
                    "\t|==== ==== | |==|  |=|        |",
                    "\t|   | |  | |         | |  |=| |",
                    "\t|= =| |  | | |  | == | |==| | |",
                    "\t|   | |  | | |  | |= |      | |",
                    "\t| |   ===========  | |======= |",
                    "\t| | |              |          |",
                    "\t===============================", 
                    };
					int x,y,ancho,altura;
					char movimiento;
					x=1;
					y=2; 
					ancho=32;
					altura=1;
					int regalo2x=5,regalo2y=30;
					for(int i=0;i<=18;i++)
						puts(mapa2[i]);
					while(x != altura || y != ancho)
					{
  						movimiento = getchar();
   					if(movimiento == 's'|| movimiento=='S')
   					{
        					if(mapa2[x+1][y] !='='&&mapa2[x+1][y] !='|')
        				{
        			    	mapa2[x][y] = ' ';
        			    	x++;
        					mapa2[x][y]='O';
       					}
        				else
   						{
    					printf("\nCamino bloqueado!!\n");
    					system("pause");
						}
    				}
    				if(movimiento=='w'|| movimiento=='W')
    				{
        				if(mapa2[x-1][y] != '='&&mapa2[x-1][y] !='|')
         				{
            				mapa2[x][y] = ' ';
             				x--;
             				mapa2[x][y]='O';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
    				if(movimiento == 'a'|| movimiento=='A')
    				{
     				   if(mapa2[x][y-1] != '|'&&mapa2[x][y-1] != '=')
        				{
         				   mapa2[x][y] = ' ';
         				   y--;
          				  mapa2[x][y]='o';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
    				if(movimiento == 'd' || movimiento=='D')
   					{
        				if(mapa2[x][y+1] != '|'&&mapa2[x][y+1] != '=')
        				{
							mapa2[x][y] = ' ';
        					y++;
        					mapa2[x][y]='o';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
       				if(y==regalo2y && x==regalo2x && contreg2==0){
							printf("\n\aOBTUVISTE UN REGALO\n");
							contreg2++;
							system("pause");
							printf("\nEscoge entre: Helado o Lentes\n");
							insertarPremio();
							system("pause");
					}
        			system("cls");
        			for(int i=0;i<=18;i++){
        				puts(mapa2[i]);
					}
					}
    				system("cls");
    				printf("\033[0;33m");
					printf("\t\t\t\t _____ _____ _____ _____ _____ _____ _____ \n");
					printf("\t\t\t\t|   __|  _  |   | |  _  |   __|_   _|   __|\n");
					printf("\t\t\t\t|  |  |     | | | |     |__   | | | |   __|\n");
					printf("\t\t\t\t|_____|__|__|_|___|__|__|_____| |_| |_____|\n\a");
					printf("\033[0;0m");
    				system("pause");
    				system("cls");
}

void nivel3(){
			system("cls");
			char mapa3[50][50]=
				   {"\t===============================",
                    "\t|o             |              |",
                    "\t|  =========== | |== |=====|  |",
                    "\t|= ||   |      | |   | |   |  |",
                    "\t|  || |   ====== | ==|   |    |",
                    "\t| === |===|      |   | ====|= |",
                    "\t| | | |   |  |====== |     |  |",
                    "\t| | | | | |       || |==== | =|",
                    "\t|   | | | |==|==| || |     |  |",
                    "\t|==== | |    |    || |= |  |==|",
                    "\t| |   | |====|  |=|| |  ||  | <+>",
                    "\t|   |   |    |    ||$| =||==| |",
                    "\t| ======== | |==| ||=|  |     |",
                    "\t| | | |    |    | || |= | | | |",
                    "\t| |   | || | |  | || |  | |=| |",
                    "\t| | |   || | |    || | =|   | |",
                    "\t| | |============  | | ==== = |",
                    "\t|   |              |        | |",
                    "\t===============================", 
                    };
					int x,y,ancho,altura;
					char movimiento;
					x=1;
					y=2; 
					ancho=32;
					altura=10;
					int regalo3x=11,regalo3y=21;
					for(int i=0;i<=18;i++)
						puts(mapa3[i]);
					while(x != altura || y != ancho)
					{
  						movimiento = getchar();
   					if(movimiento == 's'|| movimiento=='S')
   					{
        					if(mapa3[x+1][y] !='='&&mapa3[x+1][y] !='|')
        				{
        			    	mapa3[x][y] = ' ';
        			    	x++;
        					mapa3[x][y]='O';
       					}
        				else
   						{
    					printf("\nCamino bloqueado!!\n");
    					system("pause");
						}
    				}
    				if(movimiento=='w'|| movimiento=='W')
    				{
        				if(mapa3[x-1][y] != '='&&mapa3[x-1][y] !='|')
         				{
            				mapa3[x][y] = ' ';
             				x--;
             				mapa3[x][y]='O';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
    				if(movimiento == 'a'|| movimiento=='A')
    				{
     				   if(mapa3[x][y-1] != '|'&&mapa3[x][y-1] != '=')
        				{
         				   mapa3[x][y] = ' ';
         				   y--;
          				  mapa3[x][y]='o';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
    				if(movimiento == 'd' || movimiento=='D')
   					{
        				if(mapa3[x][y+1] != '|'&&mapa3[x][y+1] != '=')
        				{
							mapa3[x][y] = ' ';
        					y++;
        					mapa3[x][y]='o';
        				}
        				else
   						{
    						printf("\nCamino bloqueado!!\n");
    						system("pause");
						}
    				}
       				if(y==regalo3y && x==regalo3x && contreg3==0){
							printf("\n\aOBTUVISTE UN REGALO\n");
							contreg3++;
							system("pause");
							printf("\nEscoge entre: Batman o Luna\n");
							insertarPremio();
							system("pause");
					}
        			system("cls");
        			for(int i=0;i<=18;i++){
        				puts(mapa3[i]);
					}
					}
    				system("cls");
    				printf("\033[0;33m");
					printf("\t\t\t\t _____ _____ _____ _____ _____ _____ _____ \n");
					printf("\t\t\t\t|   __|  _  |   | |  _  |   __|_   _|   __|\n");
					printf("\t\t\t\t|  |  |     | | | |     |__   | | | |   __|\n");
					printf("\t\t\t\t|_____|__|__|_|___|__|__|_____| |_| |_____|\n\a");
					printf("\033[0;0m");
    				system("pause");
    				system("cls");
}
