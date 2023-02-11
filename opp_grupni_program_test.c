
// test_ivor branch kopija za exp


#include <stdio.h>
#include <math.h>


int main(){

int kcal, visina, godine, sum_kcal = 0;
float voda, tezina, kcal_min, kcal_max, voda_min, voda_max, sum_voda = 0;
char spol;
char polje_odgovor[21];
char polje_nastavak[21]={"nastavak"};
char polje_kraj[21]={"kraj"};


printf("\n Unesite svoju visinu u cm : ");
scanf("%d", &visina);
printf("\n Unesite svoju tezinu u kg : ");
scanf("%f", &tezina);
printf("\n Koliko imate godina : ");
scanf("%d", &godine);
printf("\n Unesite svoj spol (M/Z) : ");
scanf("%c", &spol);
    voda_min = tezina * 0.02;
    voda_max = tezina * 0.045;

    if (spol == "M" || spol == "m") {
            kcal_min = 10 * tezina + 6.25 * visina - 5 * godine + 5;
            kcal_max = (13.397 * tezina + 4.799 * visina - 5.677 * godine + 88.362)*1.5;
        }
    else if (spol == "Z" || spol == "z") {
            kcal_min = 10 * tezina + 6.25 * visina - 5 * godine - 161;
            kcal_max = (9.247 * tezina + 3.098 * visina - 4.330 * godine + 447.593)*1.5;
        }
        // unos osnovnih podataka i izrcun min i max vrijednosti

    do{
        printf("\n Unesite kolicinu kalorija u kcal, unesenih danas : ");
        scanf("%d", &kcal);
        sum_kcal = sum_kcal + kcal;

        printf("\n Unesite kolicinu vode unesene danas u L : ");
        scanf("%f", &voda);
        sum_voda = sum_voda + voda;

        if (kcal < kcal_min)
            printf("\n Vas danasnji unos kalrija je premalen !");
        else if (kcal > kcal_min && kcal < kcal_max)
            printf("\n Vas danasnji unos kalorija je dovoljan !");
        else if (kcal > kcal_max)
            printf("\n Vas danasnji unos kalorija je prevelik !");


        if (voda< voda_min)
            printf("\n Vas danasnji unos vode je premalen \n\n");
        else if (voda>= voda_min && voda <= voda_max)
            printf("\n Vas danasnji unos vode je dovoljan \n\n");
        else if (voda>= voda_max)
            printf("\n Vas danasnji unos vode je prevelik \n");

        printf("\n Vas minimalni unos kalorija je: %.2f kcal, te minimalni unos vode je: %.2f L .", kcal_min, voda_min);
        printf("\n Vas maksimalni unos kalorija je: %.2f kcal, te maksimalni unos vode je: %.2f L .", kcal_max, voda_max);

        printf("Zelite li unijeti podatke za sljedeći dan napisite 'nastavak' a za zavrsetak programa 'kraj' \n");
        scanf("%s", &polje_odgovor);
    }
    while(polje_odgovor == polje_nastavak);



printf("Vas konacni broj kalorija i unosa vode je %d i %.2f l \n", sum_kcal, sum_voda);
 


    
    return 0;
}

