#include <stdio.h>

int main() {
//EXERCICE 1

        /*int n=0;
        int p=0;
        printf(" \n saisissez un entier:");
        scanf("%d",&n);
        printf("\n saisissez un entier:");
        scanf("%d",&p);
        if(n>=p){
            printf("\n %d est la plus grande valeur", n);
        }
        else{
            printf("\n %d est la plus grande valeur", p);
        }*/

//EXERCICE 2

        /*int lon=0, lar=0;
        printf("\n Saisissez la longueur du rectangle:");
        scanf("%d", &lon);
        printf("\n Saisissez la largeur du rectangle:");
        scanf("%d", &lar);
        printf("\n Le perimetre du rectangle est : %d  \n son aire est : %d", (lon+lar)*2, lon*lar);*/

//EXERCICE 3

        /*int entier=0;
        printf("\n saisissez un entier:");
        scanf("%d", &entier);
        const int trois=3;
        if (entier % trois == 0){
            printf("\n %d est un multiple de 3", entier);
        }
        else{
            printf("\n %d n'est pas un multiple de 3", entier);
        }
        if (entier >= 10){
            printf("\n %d est >= a 10", entier);
        }
        else{
            printf("\n %d est < a 10", entier);
        }*/

//EXERCICE 4

        /*int age=0;
        int etudiant=0;
        printf("\n saisissez votre age :");
        scanf("%d",&age);
        printf("\n Etes vous etudiant? (repondre par 1 pour oui ou 0 pour non)");
        scanf("%d",&etudiant);
        if (age < 12){
            printf("\n tarif enfant : 4 euros");
        }
        else if ((age >= 12 && age <17 )||(age<27 && etudiant==1)){
            printf("\n tarif jeune : 6 euros");
        }
        else if (age >= 65){
            printf("\n tarif senior : 6 euros");
        }
        else{
            printf("\n plein : 9 euros");
        }*/


//EXERCICE 5

        /*int boisson=0;
        printf("\n saisissez votre numero de boisson");
        scanf("%d", &boisson);
        if (boisson==1){
            printf("\n coca-cola");
        }
        else if (boisson==2){
            printf("\n orangina");
        }
        else if (boisson==3){
            printf("\n limonade");
        }
        else if (boisson==10){
            printf("\n cafe");
        }
        else if (boisson==11){
            printf("\n the a la menthe");
        }
        else{
            printf("erreur : boisson indisponible");
        }*/

//EXERCICE 6

          /*float note1=0, note2=0, note3=0, moy=0;
            printf("\n saisissez une note :");
            scanf("%f",&note1);
            printf("saisissez une note :");
            scanf("%f",&note2);
            printf("saisissez une note :");
            scanf("%f",&note3);

            if ((note1 >= 0 && note1 <= 20) && (note2 >= 0 && note2 <= 20) && (note3 >=0 && note3 <= 20)){
                moy=(note3+note2+note1)/3 ;
                printf("\n la moyenne est : %f", moy );
            }
            else{
                printf("\n une ou plusieurs notes ne sont pas conformes");
            }*/



//EXERCICE 7

          /*int nbreclasses=0, nbretotal=0, nbreeleve=0, k=0;
            printf("\n saisissez le nombre de classes");
            scanf("%d", &nbreclasses);
            while(k < nbreclasses){
                k = k+1;
                printf("\n saisissez le nombre d'eleves dans une classe :");
                scanf("%d", &nbreeleve);
                nbretotal= nbretotal + nbreeleve;
            }
            printf("\nle nombre total d'eleves est : %d", nbretotal);*/

//EXERCICE8

           /* int nombre=0;                     //on veut (n % 2 == 0 && n % 7 == 0)
            printf("\n saisissez un nombre");
            scanf("%d", &nombre);
            while(nombre % 2 != 0 || nombre % 7 != 0){    // equivalent à  !(n % 2 == 0 && n % 7 == 0)
                printf("saisissez un autre nombre");
                scanf("%d", &nombre);
            }*/


//EXERCICE 9

               /* int nombredepierres=0, nombreetages=0;
                printf("\n saisissez le nombre de pierres");
                scanf("%d", &nombredepierres);

                    while (nombredepierres>= 0){
                        nombredepierres = nombredepierres - nombreetages*nombreetages;
                        if (nombredepierres >= 0){
                            nombreetages = nombreetages+1;
                        }
                        else {
                            nombreetages = nombreetages;
                        }
                        }
                printf("\n le nombre d'etages est de %d", nombreetages-1);*/


//EXERCICE 10

       /* float nbreentierpositif=0, moyenne=0, sommedesentiers=0, s=0;
        while (nbreentierpositif >= 0){
            printf("\n saisissez un nombre entier positif (si vous n'en avez plus, rentrez un entier negatif ):");
            scanf("%f", &nbreentierpositif);
            if (nbreentierpositif >= 0){
                s=s+1;
                sommedesentiers=sommedesentiers+nbreentierpositif;
            }
            else {
                moyenne = sommedesentiers/s;
                printf("la moyenne est de %f ", moyenne);
            }
        }*/


    return 0;
}
