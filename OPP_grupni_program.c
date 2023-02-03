
// grupni program OPP

//OPIS - 20230111

//Program započinje sa prvim danom, od korisnika se traži da unese 
//količinu današnjeg unosa hrane u (kcal), te vode u (čašama, -čaša=300ml). 
//Programu su zadane varijable za preporučeni prosječni dnevni unos za odraslu osobu 
//težine 70-100kg i visine 170-190cm, kao kcal-min, kcal-max, voda-min, voda-max. 
//Korisniku se po uspješnom unosu podataka ispisuje poruka za prvi dan u obliku: 
//"(vaš današnji unos je: "kcal_unos / kcal-min - kcal-max" preporučenog, današnji unos je premalen/prevelik/dovoljan. - za kcal i vodu)". 
//Korisnika se zatim traži da unese želi li nastaviti na drugi dan ili završiti sa programom, 
//prelaskom na drugi dan program se vraća na početak, 
//na novo traži podatake o unosu hrane i vode, te zatim ispisuje sve podatke za drugi dan. 
//Kada korisnik odabere kraj programa, ispisuje se još jedna poruka koja daje sumu svih unosa hrane i vode za sve protekle dane.


#include <stdio.h>
#include <math.h>
int kcal, visina, godine, sum_kcal = 0;
float voda, tezina, bmr, kcal_min, kcal_max, voda_min, voda_max, vodal, sum_voda = 0;
char spol, odgovor;
int main(void)
{

    
        printf("Unesite svoju visinu \n");
        scanf_s("%d", &visina);
        printf("Unesite svoju tezinu \n");
        scanf_s("%f", &tezina);
        printf("Koliko imate godina \n");
        scanf_s("%d", &godine);
        printf("Unesite svoj spol (M/Z) \n");
        scanf_s(" %c", &spol, sizeof(spol));
            voda_min = tezina * 0.033;
            voda_max = tezina * 0.066;
        if (spol == 'M') {
            kcal_min = 10 * tezina + 6.25 * visina - 5 * godine + 5;
            kcal_max = (13.397 * tezina + 4.799 * visina - 5.677 * godine + 88.362)*1.5;
        }
        else if (spol == 'Z') {
            kcal_min = 10 * tezina + 6.25 * visina - 5 * godine - 161;
            kcal_max = (9.247 * tezina + 3.098 * visina - 4.330 * godine + 447.593)*1.5;
        }
        vodal = voda / 1000;

        printf("Unesite kolicinu kalorije unesenih danas \n");
        scanf_s("%d", &kcal);
        sum_kcal += kcal;

        printf("Unesite kolicinu vode unesene danas u ml \n");
        scanf_s("%f", &voda);
        vodal = voda / 1000;
        sum_voda += vodal;

        if (kcal < kcal_min)
            printf("Vas danasnji unos kalrija je premalen \n");
        else if (kcal > kcal_min && kcal < kcal_max)
            printf("Vas danasnji unos kalorija je dovoljan \n");
        else if (kcal > kcal_max)
            printf("Vas danasnji unos kalorija je prevelik \n");

        if (vodal < voda_min)
            printf("Vas danasnji unos vode je premalen \n\n");
        else if (vodal >= voda_min && vodal <= voda_max)
            printf("Vas danasnji unos vode je dovoljan \n\n");
        else if (vodal >= voda_max)
            printf("Vas danasnji unos vode je prevelik \n\n");
        printf("Minimalni i  maksimalni unos kalorija mora biti %.2f i %.2f \n", kcal_min, kcal_max);
        printf("Minimalni i maksimalni unos vode mora biti %.2f l i %.2f l\n\n", voda_min, voda_max);

        printf("Zelite li unijeti podatke za sljedeći dan napisite d \n");
        scanf_s(" %c", &odgovor, sizeof(odgovor));

        while (odgovor == 'd') {
            printf("Unesite kolicinu kalorije unesenih danas \n");
            scanf_s("%d", &kcal);
            sum_kcal += kcal;

            printf("Unesite kolicinu vode unesene danas u ml \n");
            scanf_s("%f", &voda);
            vodal = voda / 1000;
            sum_voda += vodal;
            if (kcal < kcal_min)
                printf("Vas danasnji unos kalrija je premalen \n");
            else if (kcal > kcal_min && kcal < kcal_max)
                printf("Vas danasnji unos kalorija je dovoljan \n");
            else if (kcal > kcal_max)
                printf("Vas danasnji unos kalorija je prevelik \n");

            if (vodal < voda_min)
                printf("Vas danasnji unos vode je premalen \n\n");
            else if (vodal >= voda_min && vodal <= voda_max)
                printf("Vas danasnji unos vode je dovoljan \n\n");
            else if (vodal >= voda_max)
                printf("Vas danasnji unos vode je prevelik \n\n");
            printf("Minimalni i  maksimalni unos kalorija mora biti %.2f i %.2f \n", kcal_min, kcal_max);
            printf("Minimalni i maksimalni unos vode mora biti %.2f l i %.2f l\n\n", voda_min, voda_max);
            printf("Zelite li unijeti podatke za sljedeći dan napisite d \n");
            scanf_s(" %c", &odgovor, sizeof(odgovor));
        }
        
        if (kcal < kcal_min)
            printf("Vas danasnji unos kalrija je premalen \n");
        else if (kcal > kcal_min && kcal < kcal_max)
            printf("Vas danasnji unos kalorija je dovoljan \n");
        else if (kcal > kcal_max)
            printf("Vas danasnji unos kalorija je prevelik \n");

        if (vodal < voda_min)
            printf("Vas danasnji unos vode je premalen \n");
        else if (vodal >= voda_min && vodal <= voda_max)
            printf("Vas danasnji unos vode je dovoljan \n");
        else if (vodal >= voda_max)
            printf("Vas danasnji unos vode je prevelik \n");
        printf("Minimalni i  maksimalni unos kalorija mora biti %.2f i %.2f \n", kcal_min, kcal_max);
        printf("Minimalni i maksimalni unos vode mora biti %.2f l i %.2f l\n\n", voda_min, voda_max);
        printf("Vas konacni broj kalorija i unosa vode je %d i %.2f l \n", sum_kcal, sum_voda);
 


    
    return 0;
}

