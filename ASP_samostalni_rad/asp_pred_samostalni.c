#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct
{
	char ime[21];
	char spol;
	int godRodj;
} Natjecatelj;

typedef struct Celija
{
	Natjecatelj element;
	struct Celija* psljedeca;
} CelijaNatjecatelj;


typedef struct
{
	CelijaNatjecatelj* pizlaz;
	CelijaNatjecatelj* pulaz;
} RedNatjecatelj;


void unosNatjecatelja(Natjecatelj* pnatjecatelj);

void ubaci(Natjecatelj noviElement, RedNatjecatelj* pred);
void ispisi(RedNatjecatelj* pred);
void obrisi(RedNatjecatelj* pred);
void izmijeni(Natjecatelj izmijenjeniElement, Natjecatelj originalniElement, RedNatjecatelj* pred);

CelijaNatjecatelj* pronadjiAdresu_ime(char* imeNatjecatelja, RedNatjecatelj* pred);

int main (){



    return 0;
}