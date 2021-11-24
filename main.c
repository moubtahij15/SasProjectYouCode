#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Compte
{
    char cin[10];
    char nom[10];
    char prenom[10];
    float montant;


};
 struct Compte * saisirMulti(struct Compte *compte,int taille ,int index);
  struct Compte * saisirOne( struct Compte *compte ,int index);
struct Compte * depot(struct Compte *compte , int taille);


struct Compte * retrait(struct Compte *compte , int taille);
void affichage(struct Compte *compte,int taille);
 struct Compte * ascendant(struct  Compte *comptee,int taille);
struct Compte * descendant(struct  Compte *comptee,int taille);
void compteSuperieurDescend(struct  Compte *comptee,int taille );
void compteSuperieurAscend(struct  Compte *comptee,int taille );
void rechercheCin(struct  Compte *compte,int taille  );
struct Compte * fidelisation(struct Compte *compte,int taille);
//struct Compte * d_by_ascending(bank_acc *acc, int c) {


int main()
{
    struct Compte *compte ;
    bool test=true;
    compte = ( struct Compte* )malloc(100* sizeof(struct Compte));
    int a=0 , b=0;

    int choix ,choixO ;
    while(test){

         printf("------------------------------------------- Menu -------------------------------------------\n >>>1.Introduire un compte bancaire \n >>>2.Introduire plusieurs comptes bancaires \n >>>3. Operations \n >>>4.Affichage \n >>>5.Fidelisation \n >>>6.Quitter lapplication");

       printf("\n-----------------------------------------------------------------------------------------------\n");
            printf(" \n chosir le numero de votre choix : ");
        scanf("%d",&choix);

        switch(choix)

        {
    //choix  d'ajouter un seul compte
        case 1 :
           system("cls");
             printf("----------------------------- \n");
           compte= saisirOne(compte,a);
            a++;
            break;
        //choix  d'ajouter un multi compte compte
        case 2:
              system("cls");

             printf("----------------------------- \n");
            printf("enter le nombre des comptes bancaires : ");
            scanf("%d",&b);
            compte=saisirMulti(compte,a+b,a);
            a=a+b;
            break;

        case 3 :// les operations
                 system("cls");
                printf(" Choisir votre operation :\n 1.Retrait \n 2.Depot \n ");
                scanf("%d",&choixO);

                    switch(choixO){

                case 1 ://Retarait
                system("cls");
                compte= retrait(compte,a);

                    break;

                case 2://depot
                    system("cls");
                    compte= depot(compte,a);
                    break;
                default :
                            printf(" le choix invalide ");
                        }
                        break;

                case 4 : // Affichage
                                  system("cls");
                            printf(" 1.par ordre Ascendant \n 2.Par Ordre Descendant \n 3.Par Ordre Ascendant (les comptes bancaire ayant un montant supérieur à un chiffre introduit) \n 4.Par Ordre Descendant (les comptes bancaire ayant un montant supérieur à un chiffre introduit) \n 5.Recherche par CIN \n");
                            scanf("%d",&choixO);
                                switch (choixO){

                                case 1: // Ascendant
                                      system("cls");
                                        compte= ascendant(compte,a);
                                      affichage(compte,a);
                                        break;


                                case 2:// Descendant
                                          system("cls");
                                        compte= descendant(compte,a);
                                        affichage(compte,a);


                                        break;
                                case 3://AFFICHAGE DES COMPTE Acsendnat selon un chiffre
                                          system("cls");
                                        compteSuperieurAscend(compte,a);
                                        break;

                                case 4://AFFICHAGE DES COMPTE Descendant selon un chiffre
                                          system("cls");
                                        compteSuperieurDescend(compte,a);
                                        break;
                                case 5 : //Recherche par Cin
                                     system("cls");
                                    rechercheCin(compte,a);
                                    break;

                                }
                                    break;

                    case 5 : //Fedilisation
                                  system("cls");
                                compte= fidelisation(compte,a);

                                break;

                    case 6 : // Quitter l'app
                        system("cls");
                       printf("\n  byby \n");

                        test=false;

            break;


    }

    }

    return 0;
}


