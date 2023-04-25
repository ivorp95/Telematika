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

CelijaFilm* pronadji_char(char* trazeni_string_podatak, RedFilmova* pred);
CelijaFilm* pronadji_int(char* trazeni_int_podatak, RedFilmova* pred);



int main (){



    return 0;
}