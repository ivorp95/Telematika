
// test_ivor branch kopija za exp


#include <stdio.h>
#include <math.h>


int main(void){

int kcal, visina, godine, sum_kcal = 0;
float voda, tezina, bmr, kcal_min, kcal_max, voda_min, voda_max, vodal, sum_voda = 0;
char spol, odgovor;

        printf("Unesite svoju visinu \n");
        scanf("%d", &visina);
        printf("Unesite svoju tezinu \n");
        scanf("%f", &tezina);
        printf("Koliko imate godina \n");
        scanf("%d", &godine);
        printf("Unesite svoj spol (M/Z) \n");
        scanf(" %c", &spol, sizeof(spol));
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

        printf("Unesite kolicinu kalorija unesenih danas \n");
        scanf("%d", &kcal);
        sum_kcal += kcal;

        printf("Unesite kolicinu vode unesene danas u ml \n");
        scanf("%f", &voda);
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
        scanf(" %c", &odgovor, sizeof(odgovor));

        while (odgovor == 'd') {
            printf("Unesite kolicinu kalorije unesenih danas \n");
            scanf("%d", &kcal);
            sum_kcal += kcal;

            printf("Unesite kolicinu vode unesene danas u ml \n");
            scanf("%f", &voda);
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
            scanf(" %c", &odgovor, sizeof(odgovor));
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

