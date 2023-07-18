#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int op, i;
		  
	printf(" \t\t -------Programa 3.8------- \n\n ");
	printf(" 1. promedio anual de cada region \n ");
	printf(" 2. El mes y registro con la mayor y menor temperaturas\n ");
	printf(" 3. En las regiones SUR, PACÍFICO y CARIBE cual tiene el mayor promedio de temperatura anual \n ");

	printf("Dame la opcion que escoges \n ");
	scanf("%d",&op);
		 	
	switch(op){
		case 1:{
				printf(" \t\t1. promedio anual de cada region \n ");
				printf("\t\t------Registro de la region norte------- \t\t \n ");
															 
						int mesnort[12], sumnort=0;
						float pnort;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mesnort[i]);
							sumnort=sumnort+mesnort[i];
							pnort=sumnort/12;
						}
				printf("\t\t------Registro de la region centro------- \t\t \n ");
						int mescent[12], sumcent=0;
						float pcent;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mescent[i]);
							sumcent=sumcent+mescent[i];
							pcent=sumcent/12;
						}
				printf("\t\t------Registro de la region sur ------- \t\t \n ");
						int messur[12], sumsur=0;
						float psur;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&messur[i]);
							sumsur=sumsur+messur[i];
							psur=sumsur/12;
						}
				printf("\t\t------Registro de la region golfo------- \t\t \n ");
						int mesgol[12], sumgol=0;
						float pgol;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mesgol[i]);
							sumgol=sumgol+mesgol[i];
							pgol=sumgol/12;
						}
				printf("\t\t------Registro de la region pacifico------- \t\t \n ");
						int mespac[12], sumpac=0;
						float ppac;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mespac[i]);
							sumpac=sumpac+mespac[i];
							ppac=sumpac/12;
						}
				printf("\t\t------Registro de la region caribe------- \t\t \n ");
						int mescar[12], sumcar=0;
						float pcar;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mescar[i]);
							sumcar=sumpac+mescar[i];
							pcar=sumcar/12;
						}
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------Promedio de la region norte : %.4f \n ", pnort);
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------Promedio de la region centro: %.4f \n ", pcent);
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------Promedio de la region sur: %.4f \n ", psur);
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------Promedio de la region golfo : %.4f \n ", pgol);
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------Promedio de la region pacifico: %.4f \n ", ppac);
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------Promedio de la region caribe: %.4f \n ", pcar);
	printf(" \t\t ---------------------------------------------- \n ");
	system("color 2");
			break;
		}
		case 2:{
				printf(" \t\t2. El mes y registro con la mayor y menor temperaturas \n ");
				printf("\t\t------Registro de la region norte------- \t\t \n ");
															 
						int mesnort[12], nmayor=0, nmenor=0;
						float mayorn=0, menorn=9999;		     	  
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mesnort[i]);
							if(mesnort[i]>mayorn){
								mayorn=mesnort[i];
								nmayor=i;
							}
							if(mesnort[i]<menorn){
								menorn=mesnort[i];
								nmenor=i;
							}
						}
				printf("\t\t------Registro de la region centro------- \t\t \n ");
						int mescent[12], cmayor=0, cmenor=0;
						float mayorc=0, menorc=9999;		     	  
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mescent[i]);
							if(mescent[i]>mayorc){
								mayorc=mescent[i];
								cmayor=i;
							}
							if(mescent[i]<menorc){
								menorc=mescent[i];
								cmenor=i;
							}
						}
				printf("\t\t------Registro de la region sur ------- \t\t \n ");
						int messur[12], smayor=0, smenor=0;
						float mayors=0, menors=9999;		     	  
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&messur[i]);
							if(messur[i]>mayors){
								mayors=messur[i];
								cmayor=i;
							}
							if(messur[i]<menors){
								menors=messur[i];
								smenor=i;
							}
						}
				printf("\t\t------Registro de la region golfo------- \t\t \n ");
						int mesgol[12], gmayor=0, gmenor=0;
						float mayorg=0, menorg=9999;		     	  
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mesgol[i]);
							if(mesgol[i]>mayorg){
								mayorg=mesgol[i];
								gmayor=i;
							}
							if(mesgol[i]<menorg){
								menorg=mesgol[i];
								gmenor=i;
							}
						}
				printf("\t\t------Registro de la region pacifico------- \t\t \n ");
						int mespac[12], pmayor=0, pmenor=0;
						float mayorp=0, menorp=9999;		     	  
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mespac[i]);
							if(mespac[i]>mayorp){
								mayorp=mespac[i];
							    pmayor=i;
							}
							if(mespac[i]<menorp){
								menorp=mespac[i];
								pmenor=i;
							}
						}
				printf("\t\t------Registro de la region caribe------- \t\t \n ");
						int mescar[12], ccmayor, ccmenor;
						float mayorcc=0, menorcc=9999;		     	  
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mescar[i]);
							if(mescar[i]>mayorcc){
								mayorcc=mescar[i];
								ccmayor=i;
							}
							if(mescar[i]<menorcc){
								menorcc=mescar[i];
								ccmenor=i;
							}
						}
	printf(" \t\t ----------------------  mes y registro------------------------ \n ");
	printf(" \t\t ----------------- mayor y menor temperatura ------------------------ \n ");
																																						                 
	printf(" \t\t Region norte\n ");
	printf(" \t\t la mayor temperatura se encuentra en el mes %d con %.4f \n ", nmayor, mayorn );
	printf(" \t\t la menor temperatura se encuentra en el mes %d con %.4f \n ", nmenor, menorn );
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t Region centro \n ");							
	printf(" \t\t la mayor temperatura se encuentra en el mes %d con %.4f \n ", cmayor, mayorc );
	printf(" \t\t la menor temperatura se encuentra en el mes %d con %.4f \n ", cmenor, menorc );
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t Region sur \n ");
	printf(" \t\t la mayor temperatura se encuentra en el mes %d con %.4f \n ", smayor, mayors );
	printf(" \t\t la menor temperatura se encuentra en el mes %d con %.4f \n ", smenor, menors );
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t Region golfo  \n ");
	printf(" \t\t la mayor temperatura se encuentra en el mes %d con %.4f \n ", gmayor, mayorg );
	printf(" \t\t la menor temperatura se encuentra en el mes %d con %.4f \n ", gmenor, menorg );
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t Region pacifico    \n ");
	printf(" \t\t la mayor temperatura se encuentra en el mes %d con %.4f \n ", pmayor, mayorp );
	printf(" \t\t la menor temperatura se encuentra en el mes %d con %.4f \n ", pmenor, menorp );
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t Region caribe \n ");
	printf(" \t\t la mayor temperatura se encuentra en el mes %d con %.4f \n ", ccmayor, mayorcc );
	printf(" \t\t la menor temperatura se encuentra en el mes %d con %.4f \n ", ccmenor, menorcc );
	printf(" \t\t ---------------------------------------------- \n ");

			system("color 2");
			break;
		}
		case 3:{
						int ren=0;
						float psmayor=0;
				printf(" \t\t 3. En las regiones SUR, PACÍFICO y CARIBE cual tiene el mayor promedio de temperatura anual   \n ");
						printf("\t\t------Registro de la region sur ------- \t\t \n ");
						int messur[12], sumsur=0;
						float psur;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&messur[i]);
							sumsur=sumsur+messur[i];
							psur=sumsur/12;
						}
				printf("\t\t------Registro de la region pacifico------- \t\t \n ");
						int mespac[12], sumpac=0;
						float ppac;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mespac[i]);
							sumpac=sumpac+mespac[i];
							ppac=sumpac/12;
						}
				printf("\t\t------Registro de la region caribe------- \t\t \n ");
						int mescar[12], sumcar=0;
						float pcar;
						for(i=1;i<=12;i++){							 
							printf(" Dame el registro del mes %d \n ", i);
							scanf("%d",&mescar[i]);
							sumcar=sumpac+mescar[i];
							pcar=sumcar/12;
						}  
						if(psur>pcar && psur>ppac){
							psmayor=psur;
							ren=ren+1;
						}
						else 	if(pcar>psur && pcar>ppac){
							psmayor=pcar;
							ren=ren+2;
						}
						else	if(ppac>pcar && ppac>psur){
							psmayor=ppac;
							ren=ren+3;
						}
	printf(" \t\t ---------------------------------------------- \n ");
	printf(" \t\t -------El mayor es la region %d con promedio de : %.4f \n ", ren, psmayor);
	printf(" \t\t ---------------------------------------------- \n ");
			system("color 2");
			break;
		}
		default:{
			system("color 4");
			printf("No conozco esa opcion que escoges \n ");
			break;
		}
	}
	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
		   

	return 0;
}
