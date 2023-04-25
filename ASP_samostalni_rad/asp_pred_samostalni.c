/*
ASP samostalni zadatak 2023 Ivor Pangos

Potrebno je izraditi program pisan u C jeziku u kojem se podaci (minimalno 3 komponente, pri tome: minimalno 1 komponenta tip polje znakova i minimalno 1 komponenta brojevnog tipa) pohranjuju u strukturu podataka tipa RED.

Odabir načina implementacije reda (preko polja ili preko pokazivača, tj. ćelija), kao i vrste podataka za pohranu (npr. zbirka filmova, knjiga, cipela, ...) je na vama, tj. odabir je slobodan.

Program treba imati početni izbornik u kojem korisnik odabire operaciju koju želi izvršiti:
- unos novog zapisa,   
- ispis svih zapisa,
- brisanje postojećeg zapisa,
- izmjenu postojećeg zapisa,
- pretraživanje reda prema vrijednosti jedne komponente i odgovarajući ispis. Napisana funkcija ispisuje sve elemente reda koji sadrže taj podatak. Primjer: ispisuju se svi podaci o svim ljubimcima koji se zovu Max, koliko god ljubimaca tog imena u redu bilo.
Sve navedene funkcije je potrebno isprogramirati.

C kod projektnog zadatka je potrebno predati do ponedjeljka 05.06.2023. u 08:00 sati

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct {
char title_eng[31];      
char director_lname[30]; 
char director_fname[30]; 
int publication_year;    
int duration;            
} Film;

typedef struct Celija
{
	Film element;
	struct Celija* pnext;
} CelijaFilm;


typedef struct
{
	CelijaFilm* pexit;
	CelijaFilm* pentry;
} RedFilmova;


void unos_filma(Film* pfilm);

void ubaci(Film noviElement, RedFilmova* pred);
void ispisi(RedFilmova* pred);
void obrisi(RedFilmova* pred);
void izmijeni(Film izmijenjeniElement, Film originalniElement, RedFilmova* pred);

CelijaFilm* pronadji_string(char* trazeni_string_podatak, RedFilmova* pred);
CelijaFilm* pronadji_int(char* trazeni_int_podatak, RedFilmova* pred);


int main (){
    char menu_opcija;

    printf("\nProgram za unos filmova preko celija u strukturu reda, unose se podatci o:\nNazivu filma na engleskom, Prezimenu Redatelja, Imenu redatelja, Godini izdavanja filma, Trajanju filma u minutama.\n");

    do{
    printf("\nGLAVNI IZBORNIK:\n");
    printf("a. Unos podataka o novom filmu.\n");
    printf("b. Ispis svih podataka trenutno pohranjenih u redu.\n");
    printf("c. Brisanje podataka iz reda.\n");
    printf("d. Izmjena postojecih podataka u redu.\n");
    printf("e. Pretraga podataka po Imenu filma ili Imenu/Prezimenu redatelja.\n");
	printf("f. Pretraga podataka po Godini izdavanja filma ili Trajanju filma u minutama.\n");
	printf("g. Zavrsetak programa.\n");
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

        default:
            printf("invalid input");
            break;
    }

    }while(menu_opcija !='g');



    return 0;
}


