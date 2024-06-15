#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	char  opcion, opcion2, opcion4, opcion5, opcion6, opcion7, opcion8, nombre[30], apellido[30], ced[20];
	int opcion3=0, zona=0, material=0, regmaterial=0;
	int aluminio=0, plastico=0, vidrio=0, papel=0, tetra=0, bateria=0, sumalu=0, sumpla=0, sumvid=0, sumpap=0, sumtet=0, sumbat=0, sumeco=0;
	int alu=0, pla=0, vid=0, pap=0, tet=0, bat=0, ecoalu=0, ecopla=0, ecovid=0, ecopap=0, ecotet=0, ecobat=0, toteco=0, persona=0;
	do {
	system("cls");
	printf("**********RECICLAJE APP***********");
	printf("\n\n");
	printf("1-- Consultar centros de recoleccion\n2-- Guia de materiales reciclables\n3-- Recompensa de ECOins por material\n4-- Registro de reciclaje\n5-- Salir");
	printf("\n\nEleccion:  ");
	scanf(" %i", &opcion3);
	if (opcion3==1){
		do {
		system("cls");	
		printf("Digite zona a consultar: \n1-- San Jose\n2-- Alajuela\n3-- Heredia\n4-- Cartago\n5-- Puntarenas\n6-- Guanacaste\n7-- Limon\n");
		printf("\nEleccion:  ");
		scanf(" %i", &zona);
			if(zona==1){
				system("cls");
				printf("*****Centros de reciciclaje en San Jose*****");
				printf("\n\n*Bodega de Envases El Tiribi\nDireccion: Paso Ancho, Carretera a Desamparados\n100 mts. Sur y 75 suroeste de\nantigua Radio Reloj.");
				printf("\n\n*Recoprimax S.A\nDireccion: 50 suroeste de la fabrica Numar Barrio Cuba");
			}else if (zona==2) {
				system("cls");
				printf("*****Centros de reciciclaje en Alajuela*****");
				printf("\n\n*Reciclando con Don Paco\nDireccion: Filas de San Isidro\nFrente al Hotel Buena Vista, Alajuela");
				printf("\n\n*Recolectora Yire\nDireccion: 200m oeste del Hotel Aeropuerto.\nAutopista Bernardo Soto");
			}else if (zona==3) {
				system("cls");
				printf("*****Centros de reciciclaje en Heredia*****");
				printf("\n\n*Kimberly Clark Centroamerica S.A\nDireccion: La Rivera de Belen\ncalle la Scott");
				printf("\n\n*Florida Bebidas S.A\nDireccion: La Asunción de Belen\ncarretera vieja a Alajuela");
			}else if (zona==4) {
				system("cls");
				printf("*****Centros de reciciclaje en Cartago*****");
				printf("\n\n*H20 Tecnologia Vital\nDireccion: Tejar del Guarco, del Megasuper Parque\nIndustrial, 50 sur y 75.");
				printf("\n\n*Fundiciones Crisol\nDireccion: Ochomogo, frente a HB Fuller.");
			}else if (zona==5) {
				system("cls");
				printf("*****Centros de reciciclaje en Puntarenas*****");
				printf("\n\n*Centro de Acopio de la Municipalidad de Esparza\nDireccion: Esparza, Marañonal. De la Iglesia\nCatolica 50 metros norte.");
				printf("\n\n*Bloque Bandera Azul - Municipalidad de Puntarenas\nDireccion: Parque Marino del Pacifico, 600 metros este\ndel muelle de cruceros");
			}else if (zona==6) {
				system("cls");
				printf("*****Centros de reciciclaje en Guanacaste*****");
				printf("\n\n*Centro de Acopio Liberia\nDireccion: Liberia, Barrio Guadalupe\nfrente a la arrocera El Sabanero.");
				printf("\n\n*Reciclaje Manrique Soto\nDirecion: Carrillo, En mercado Chorotega");
			}else if (zona==7) {
				system("cls");
				printf("*****Centros de reciciclaje en Limon*****");
				printf("\n\n*Centro De Acopio La Bendicion\nDireccion: Pocora, Limon");
				printf("\n\n*Reciclyng solutions company S. A.\nDireccion: Newcastle,un kilometro noroeste del Cementerio, Matama, Limon");
			}
			printf("\n\nDesea consultar otra zona:(s/n) ");
			scanf(" %c", &opcion4);
		}while (opcion4=='s'|| opcion4=='S');
	}else if (opcion3==2){
		do {
			system("cls");
			printf("Digite el material al consultar: ");
			printf("\n1-- Aluminio\n2-- Vidrio\n3-- Plastico\n4-- Papel, Carton\n5-- Tetra Pack, Tetra Brick\n6-- Baterias\n");
			printf("\nEleccion: ");
			scanf(" %i", &material);
			if(material==1){
				system("cls");
				printf("*****ALUMINIO*****");
				printf("\n*Latas de Refresco\n*Latas de cerveza\n*Latas de jugo\n*Piezas de aluminio\n*Ollas\n*aros");
				printf("\n\n*****PREPARACION DEL MATERIAL*****");
				printf("\nEnjuagar, drenar, aplastar las latas y colocarlas en una bolsa");
			}else if (material==2) {
				system("cls");
				printf("*****VIDRIO*****");
				printf("\n*Botellas\n*Frascos de todos los colores\n*vajillas de vidrio\n*Vidrios o celosias");
				printf("\n\n*****PREPARACION DEL MATERIAL*****");
				printf("\n\nEnjuagar, drenar, no es necesario quitar las etiquetas.\nSi el vidrio está quebrado colóquelo en una caja.");
			}else if (material==3) {
				system("cls");
				printf("*****PLASTICO*****");
				printf("\n*Botellas de refrescos gaseosos y agua\n*Envases de detergentes\n*Botella de jugos\n*Botellas de shampoo\n*Botellas de yogurt\n*Galones plasticos\n*Bolsas\n*Empaques de arroz, jabon en polvo, frijoles o azucar");
				printf("\n\n*****PREPARACION DEL MATERIAL*****");
				printf("\n\nEnjuagar, drenar (escurrir).\nSe aplasta y se coloca en una bolsa, no es necesario quitar las etiquetas.\nDeben estar secas y completamente limpias.");
			}else if (material==4) {
				system("cls");
				printf("*****PAPEL Y CARTON*****");
				printf("\n*Periodicos\n*Revistas\n*Guias telefonicas\n*Papeles impresos\n*Carton grueso y delgado\n*Cartulinas");
				printf("\n\n*****PREPARACION DEL MATERIAL*****");
				printf("\n\nDesarmar las cajas, colocarlas en una bolsa\nno se debe arrugar el papel, se coloca en \nbolsas plásticas para evitar quese mojen.");
			}else if (material==5) {
				system("cls");
				printf("*****TETRA PACK Y TETRA BRICK*****");
				printf("\n*Cajas de leche\n*Cajas de jugos\n*Cajas de Vino\n*Bebidas");
				printf("\n\n*****PREPARACION DEL MATERIAL*****");
				printf("\n\nAbrir el extremo superior\nlavar bien y secar completamente\nColocarlas en una bolsa.");
			}else if (material==6) {
				system("cls");
				printf("*****BATERIAS*****");
				printf("\n*Tipo AAA\n*Tipo AA\n*Tipo C\n*Tipo D\n*Tipo 9V\n*Tipo A23");
				printf("\n\n*****PREPARACION DEL MATERIAL*****");
				printf("\n\nDeben estar en buen estado, que no presente signos de derrame de liquidos.");
			}
			printf("\n\nDesea consultar otro material:(s/n) ");
			scanf(" %c", &opcion5);
		}while (opcion5=='s'|| opcion5=='S');
		
	}else if (opcion3==3) {
		do {
			system("cls");
			printf("*****Valor por tipo de material*****");
			printf("\n\nAluminio.......................10 ECOins/unidad");
			printf("\nVidrio......................... 5 ECOins/unidad");
			printf("\nPlastico.......................10 ECOins/unidad");
			printf("\nPapel y Carton.................10 ECOins/kilo");
			printf("\nTetra Pack y tetra brick....... 1 ECOins/unidad");
			printf("\nBaterias....................... 5 ECOins/unidad");
			
			printf("\n\nDesea salir: (s/n) ");
			scanf(" %c", &opcion6);
		}while (opcion6=='n'|| opcion6=='N');

	}else if(opcion3==4) {
		do {
			persona++;
			system("cls");
			printf("Digite su nombre: ");
			scanf(" %s", &nombre);
			printf("\nDigite su apellido: ");
			scanf(" %s", &apellido);
			printf("\nDigite su numero de cedula: ");
			scanf(" %s", &ced);
			sumalu=0, sumpla=0, sumvid=0, sumpap=0, sumtet=0, sumbat=0;
			ecoalu=0, ecopla=0, ecovid=0, ecopap=0, ecotet=0, ecobat=0;
			sumeco=0; 
			do {
			system("cls");	
			printf("Seleccione el material que desea reciclar:\n1-- Aluminio\n2-- Vidrio\n3-- Plastico\n4-- Papel, Carton\n5-- Tetra Pack, Tetra Brick\n6-- Baterias");
			printf("\nEleccion: ");
			scanf(" %i", &regmaterial);
			 
				if (regmaterial==1){
					printf("Cantidad de unidades de aluminio a reciclar: ");
					scanf(" %i", &aluminio);
					sumalu=sumalu+aluminio;
					ecoalu=sumalu*10;
											
				}else if (regmaterial==2){
					printf("Cantidad de unidades de vidrio a reciclar: ");
					scanf(" %i", &vidrio);
					sumvid=sumvid+vidrio;
					ecovid=sumvid*5;
					
				}else if (regmaterial==3){
					printf("Cantidad de unidades de plastico a reciclar: ");
					scanf(" %i", &plastico);
					sumpla=sumpla+plastico;
					ecopla=sumpla*10;
				}else if (regmaterial==4){
					printf("Cantidad de kilos de papel y carton a reciclar: ");
					scanf(" %i", &papel);
					sumpap=sumpap+papel;
					ecopap=sumpap*10;
				}else if (regmaterial==5){
					printf("Cantidad de unidades de tetra pack y tetra brick a reciclar: ");
					scanf(" %i", &tetra);
					sumtet=sumtet+tetra;
					ecotet=sumtet*1;
				}else if (regmaterial==6){
					printf("Cantidad de unidades de baterias a reciclar: ");
					scanf(" %i", &bateria);
					sumbat=sumbat+bateria;
					ecobat=sumbat*5;
				}
				sumeco=ecoalu+ecopla+ecovid+ecopap+ecotet+ecobat;
				printf("\nDesea reciclar otro tipo de material: (s/n) ");
				scanf(" %c", &opcion7);
		}while (opcion7=='s'||opcion7=='S');
		system("cls");
		printf("*******COMPROBANTE***********");
		printf("\nNombre del cliente:	%s", nombre);
		printf(" %s", apellido);
		printf("\nCedula:			%s", &ced);
		printf("\nMateriales reciclados:");
		printf("\nAluminio:		%i	unidades	ECOins ganados:	%i", sumalu, ecoalu);
		printf("\nVidrio:			%i	unidades	ECOins ganados:	%i", sumvid, ecovid);
		printf("\nPlastico:		%i	unidades	ECOins ganados:	%i", sumpla, ecopla);
		printf("\nPapel y Carton:		%i	kilos		ECOins ganados:	%i", sumpap, ecopap);
		printf("\nTreta Pack:		%i	unidades	ECOins ganados:	%i", sumtet, ecotet);
		printf("\nBaterias:		%i	unidades	ECOins ganados:	%i", sumbat, ecobat);
		printf("\n\nTotal de ECOins ganados: 	%i", sumeco);
		printf("\nDesea registrar otra persona: (s/n) ");
		scanf(" %c", &opcion8);
		alu=alu+sumalu;
		pla=pla+sumpla;
		vid=vid+sumvid;
		pap=pap+sumpap;
		tet=tet+sumtet;
		bat=bat+sumbat;
		toteco=toteco+sumeco;
	} while (opcion8=='s'||opcion8=='S'); 
	}else if (opcion3==5){
		break;
	}
printf("Desea volver al menu?(s/n) ");
scanf(" %c", &opcion);	
}while (opcion=='s');
	system("cls");
	printf("**********ESTADISTICAS*************");
	printf("\n\nTotal de personas que reciclaron:	%i", persona);
	printf("\nTotal de ECOins generados:		%i", toteco);
	printf("\nTotal de materiales reciclados");
	printf("\nAluminio:				%i unidades", alu);
	printf("\nVidrio:					%i unidades", vid);
	printf("\nPlastico:				%i unidades", pla);
	printf("\nPapel y Carton:				%i kilos", pap);
	printf("\nTetraPack y TetraBrick:			%i unidades", tet);
	printf("\nBaterias:				%i unidades", bat);
	
	
	return 0;

}
