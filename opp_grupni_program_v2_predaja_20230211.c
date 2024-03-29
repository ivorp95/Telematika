
// test_ivor branch kopija

////Program započinje sa prvim danom, od korisnika se traži da unese 
//količinu današnjeg unosa hrane u (kcal), te vode u (čašama, -čaša=300ml). 
//Programu su zadane varijable za preporučeni prosječni dnevni unos za odraslu osobu 
//težine 70-100kg i visine 170-190cm, kao kcal-min, kcal-max, voda-min, voda-max. 
//Korisniku se po uspješnom unosu podataka ispisuje poruka za prvi dan u obliku: 
//"(vaš današnji unos je: "kcal_unos / kcal-min - kcal-max" preporučenog, današnji unos je premalen/prevelik/dovoljan. - za kcal i vodu)". 
//Korisnika se zatim traži da unese želi li nastaviti na drugi dan ili završiti sa programom, 
//prelaskom na drugi dan program se vraća na početak, 
//na novo traži podatake o unosu hrane i vode, te zatim ispisuje sve podatke za drugi dan. 
//na kraju se takoder ispisujue BMI sa porukom ako je korisnik pothranjen, tman, ili pretil
//Kada korisnik odabere kraj programa, ispisuje se još jedna poruka koja daje sumu svih unosa hrane i vode za sve protekle dane.


#include <stdio.h>
#include <math.h>
#include <string.h>



int main()

{
    

    int i=0;
    int kcal, godine, sum_kcal = 0;
    float voda, tezina, visina, visina_m, kcal_min, kcal_max, voda_min, voda_max, bmi, sum_voda = 0;
    char spol_m[]="m", spol_z[]="z", spol_unos[2];
    char polje_odgovor[21];
    char polje_nastavak[]= "nastavak";
    char polje_kraj[]= "kraj";

    printf("\n Dobro dosli u nas grupni program !!!\n\n Program izradili:\n\n Emma Sikic\n Filip Maksimovic\n Matej Malnar\n Demien Bajur\n Ivor Pangos\n\n\n");

                                                //pohrana unesenih podataka korisnika

    printf("\n Unesite svoju visinu u cm : ");
    scanf_s("%f", &visina);
    printf("\n Unesite svoju tezinu u kg : ");
    scanf_s("%f", &tezina);
    printf("\n Koliko imate godina : ");
    scanf_s("%d", &godine);
    printf("\n Unesite svoj spol (m/z) : ");
    scanf_s("%1s",spol_unos);

    voda_min = tezina * 0.02;
    voda_max = tezina * 0.045;

    visina_m = visina/100;

    bmi=tezina / (visina_m*visina_m);
                                         //BMI izracun za ispis na kraju

    if (strcmp(spol_unos,spol_m)==0) {                               //izracun muskarci
            kcal_min = 10 * tezina + 6.25 * visina - 5 * godine + 5;
            kcal_max = (13.397 * tezina + 4.799 * visina - 5.677 * godine + 88.362)*1.5;
        }
    else if (strcmp(spol_unos,spol_z)==0) {                            //izracun zene
            kcal_min = 10 * tezina + 6.25 * visina - 5 * godine - 161;
            kcal_max = (9.247 * tezina + 3.098 * visina - 4.330 * godine + 447.593)*1.5;
        }
                                            // unos osnovnih podataka i izracun min i max vrijednosti


                                            //do while petlja za ponavljanje po danima dok je odgovor nastavak
    do{
        printf("\n\n\n Unesite kolicinu kalorija u kcal, unesenih danas : ");
        scanf_s("%d", &kcal);
        sum_kcal = sum_kcal + kcal;

        printf("\n Unesite kolicinu vode unesene danas u L : ");
        scanf_s("%f", &voda);
        sum_voda = sum_voda + voda;

        if (kcal < kcal_min)
            printf("\n\n\n\n Vas danasnji unos kalorija je premalen !");
        else if (kcal > kcal_min && kcal < kcal_max)
            printf("\n\n\n\n Vas danasnji unos kalorija je dovoljan !");
        else if (kcal > kcal_max)
            printf("\n\n\n\n Vas danasnji unos kalorija je prevelik !");


        if (voda< voda_min)
            printf("\n\n Vas danasnji unos vode je premalen !");
        else if (voda>= voda_min && voda <= voda_max)
            printf("\n Vas danasnji unos vode je dovoljan !");
        else if (voda>= voda_max)
            printf("\n Vas danasnji unos vode je prevelik !");

        printf("\n\n\n\n Vas minimalni dnevni unos kalorija trebao bi biti: %.2f kcal, a minimalni dnevni unos vode: %.2f L .", kcal_min, voda_min);
        printf("\n\n Vas maksimalni dnevni unos kalorija trebao bi biti: %.2f kcal, a maksimalni dnevni unos vode: %.2f L .", kcal_max, voda_max);

        printf("\n\n\n\n Zelite li unijeti podatke za sljedeći dan napisite '%s' \n Za zavrsetak programa napisite '%s' \n", polje_nastavak, polje_kraj);
        scanf_s(" %20s",polje_odgovor);

        i++;
    }
    while(strcmp(polje_nastavak,polje_odgovor)==0);
    
                                                        // print podataka




printf("\n\n Vas trenutni BMI iznosi: %.2f", bmi );
if(bmi<18.5f)
printf("\n BMI manji od 18.5, vi ste pothranjeni !");
else if(bmi<25.0f)
printf("\n BMI manji od 25, vi ste normalne tezine, CESTITAMO !");
else if(bmi<30.0f)
printf("\n BMI manji od 30, vi ste prekomjerene tezine !");
else
printf("\n BMI veci od 30, vi ste pretili, preporucujemo vam vise tjelesne aktivnosti !");

                                                        //ispis BMI i poruka

printf("\n\n\n\n Vas ukupni unos kalorija kroz %d dana iznosi: %d kcal \n\n Vas ukupni unos vode kroz %d dana iznosi: %.2f L", i, sum_kcal, i, sum_voda);



    
    return 0;
}

