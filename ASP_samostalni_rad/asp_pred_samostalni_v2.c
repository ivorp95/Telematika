#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

typedef struct {
char nazivFilma[31];      
char directorPrezime[30]; 
char directorIme[30]; 
int godina_izlaska;    
int trajanje;            
} Film;

typedef struct Celija
{
	Film element;
	struct Celija* sljedeca;
} CelijaReda;


typedef struct
{
	CelijaReda* izlaz;
	CelijaReda* ulaz;
} RedFilmova;

//test pull push

void unos_filma(Film* pfilm);

void ubaci(Film noviElement, RedFilmova* pred);
void ispisi(RedFilmova* pred);
void obrisi(RedFilmova* pred);
void izmijeni(Film izmijenjeniElement, Film originalniElement, RedFilmova* pred);

CelijaReda* pronadji_string(char* trazeni_string_podatak, RedFilmova* pred); //poo koojem parametru se pretrazuje. funkcija strcasecmp

CelijaReda* pronadji_int(char* trazeni_int_podatak, RedFilmova* pred); //po kojem parametru. za trajanje treba interval


int main (){
    RedFilmova mojRed;
    mojRed.izlaz=mojRed.ulaz= (CelijaReda*) malloc (sizeof(CelijaReda));
    char menu_opcija;

    printf("\nProgram za unos filmova preko celija u strukturu reda, unose se podatci o:\nNazivu filma na engleskom, Prezimenu Redatelja, Imenu redatelja, Godini izdavanja filma, Trajanju filma u minutama.\n");

    do{
    sleep(1);
    printf("\nGLAVNI IZBORNIK:\n\n");
    sleep(1);
    printf("a. Unos podataka o novom filmu.\n");
    printf("b. Ispis svih podataka trenutno pohranjenih u redu.\n");
    printf("c. Brisanje podataka iz reda.\n");
    printf("d. Izmjena postojecih podataka u redu.\n");
    printf("e. Pretraga podataka po Imenu filma ili Imenu/Prezimenu redatelja.\n");
	printf("f. Pretraga podataka po Godini izdavanja filma ili Trajanju filma u minutama.\n");
    printf("g. Zavrsetak programa.\n");
    sleep(1);
    printf("\nUnesite svoj odabir: ");
    scanf("%c",&menu_opcija);

        switch(menu_opcija){

        case 'a':
            break;
        case 'b':
            break;
        case 'c':
            break;
        case 'd':
            break;
        case 'e':
            break;
		case 'f':
			break;
        case 'g':
            break;

        default:
            printf("\nKrivo slovo odabira, molim ponovite odabir kroz izbornik.\n");
            break;
    }

    }while(menu_opcija !='g');






    return 0;
}


void ubaci (Film x, RedFilmova *pokRed) {
	pokRed->ulaz->sljedeca = (CelijaReda*) malloc (sizeof(CelijaReda));
	pokRed->ulaz = pokRed->ulaz->sljedeca;
	pokRed->ulaz->element = x;
	pokRed->ulaz->sljedeca = NULL;
}
 
void ispis (RedFilmova *pokRed) {
	CelijaReda *celija;
	if (pokRed->izlaz != pokRed->ulaz){
		celija = pokRed->izlaz;
printf("\n\nIspis reda: \n\n");
		while (celija->sljedeca!=NULL)
		{
			celija = celija->sljedeca;
			printf("% ", celija->element);
			
		}	
	}	
} 
 
void obrisi (RedFilmova *pokRed) {
	CelijaReda *privremeno;
	if (pokRed->ulaz == pokRed->izlaz)   
		printf("Red Filmova je prazan");
	else {
		privremeno = pokRed->izlaz;
		pokRed->izlaz = pokRed->izlaz->sljedeca;
		free(privremeno);
	}
}