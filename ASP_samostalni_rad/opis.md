OPIS PROGRAMA -  Moja kolekcija UHD 4k Bluray filmova




izbornik u main-u (unos, ispis, brisanje, izmjena, pretrazivanje)




funkcija za pretrazivanje po imenu/godini/redatelju/trajanju(<>),?
funkcija za unos podataka u celiju
funkcija za ubacivanje celije u red
funkcija za ispis reda
funkcija za brisanje elementa u redu
funkcija za izmjenu elementa



Struktura pohranjenih podataka - Moja kolekcija UHD 4k Bluray filmova

typedef struct {
char title_eng[31]      engleski naziv filma
char director_lname[30] redatelj prezime
char director_fname[30] redatelj ime
int publication_year    godina izdavanja
int duration            trajanje filma u min
} Film;


Celija sa elementom Film i pokazivacem na sljedecu

typedef struct Celija{
    Film element
    struct Film *pnext
} FilmCelija


Red sa pokazivacima pentry(ulaz) i pexit(izlaz) na celije tipa FilmCelija sa elementima strukture Film

typedef struct{
    CelijaFilm* pentry
    CelijaFilm* pexit
}




