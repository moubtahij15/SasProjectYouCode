


struct Compte
{
    char cin[10];
    char nom[10];
    char prenom[10];
    float montant;


};

// AFFICHAGE DES COMPTE
void affichage(struct Compte *compte,int taille)
{

            if(taille != 0){



              for(int i =0; i<taille; i++)
    {
          printf(" \n --------------le compte numero %d ------------------- :  \n",i+1);

        printf(" >>>le nom : %s \n",compte[i].nom);
        printf(" >>>le prenom : %s \n",compte[i].prenom);
        printf(" >>>le Cin : %s \n",compte[i].cin);
        printf(" >>>le Montant : %f \n",compte[i].montant);

        printf("\n --------------------------------\n");

    }}



            else
                printf(" le tableau est vide \n");



}

//AFFICHAGE DES COMPTE Acsendant
 struct Compte * ascendant( struct Compte *comptee, int c) {
       int i,j,pman;
         struct Compte cmpt;
          for(i=0; i<c; i++)     {
                        pman = i;
          for(j=i+1; j<c ; j++)         {
                        if(comptee[j].montant < comptee[pman].montant)
                                        pman=j;
                                           }
                    cmpt = comptee[i];
                    comptee[i] = comptee[pman];
                    comptee[pman] = cmpt ;
                      }     return comptee ;
                      }

//AFFICHAGE DES COMPTE decsendnat

struct Compte * descendant( struct Compte *comptee, int c) {
       int i,j,pman;
         struct Compte cmpt;
          for(i=0; i<c; i++)     {
                        pman = i;
          for(j=i+1; j<c ; j++)         {
                        if(comptee[j].montant > comptee[pman].montant)
                                        pman=j;
                                           }
                    cmpt = comptee[i];
                    comptee[i] = comptee[pman];
                    comptee[pman] = cmpt ;
                      }     return comptee ;
                      }


//AFFICHAGE DES COMPTE decsendnat selon un chiffre
  void compteSuperieurDescend(struct  Compte *comptee,int taille )
{

         struct Compte *compte  = ( struct Compte* )malloc(100* sizeof(struct Compte));

            compte= descendant(comptee,taille);


    struct Compte test;
    int man,pos=0;
    float montant;
    printf(" entrer le chiffre : ");
                scanf("%f",&montant);
    //traitement
    for(int i=0 ; i<taille; i++)
    {

        man=compte[i].montant;

        for(int j = i; j<taille; j++)
        {

            if(compte[j].montant>=man)
            {
                test =compte[j];
                pos=j;
            }

        }


        compte[pos]=compte[i];


        compte[i]=test;


    }

    for(int i =0; i<taille; i++)
    {

        if(montant>=compte[i].montant)
        {
            pos=i;
            break;

        }


    }



    for(int i =0; i<pos; i++)
    {

        //affichage des resultats

          printf(" \n --------------le compte numero %d ------------------- : \n",i+1);
        printf(" >>>le nom : %s \n",compte[i].nom);
        printf(" >>>le prenom : %s \n",compte[i].prenom);
        printf(" >>>le Cin : %s \n",compte[i].cin);
        printf(" >>>le Montant : %f \n",compte[i].montant);
         printf(" \n --------------------------- ------------------- : \n");


    }

}


//AFFICHAGE DES COMPTE acsendnat selon un chiffre
  void compteSuperieurAscend(struct  Compte *comptee,int taille)
{
           struct Compte *compte  = ( struct Compte* )malloc(100* sizeof(struct Compte));

            compte= descendant(comptee,taille);

    struct Compte test;
    int man,pos=0;
    float montant;
    printf(" entrer le chiffre : ");
                scanf("%f",&montant);
    //traitement
    for(int i=0 ; i<taille; i++)
    {

        man=compte[i].montant;

        for(int j = i; j<taille; j++)
        {

            if(compte[j].montant>=man)
            {
                test =compte[j];
                pos=j;
            }

        }


        compte[pos]=compte[i];


        compte[i]=test;


    }

    for(int i =0; i<taille; i++)
    {

        if(montant>=compte[i].montant)
        {
            pos=i;
            break;

        }


    }
    compte=ascendant(compte,pos);

    for(int i =0; i<pos; i++)
    {

        //affichage des resultats
            printf(" le nom : %s \n",compte[i].nom);
        printf(" le prenom : %s \n",compte[i].prenom);
        printf(" le Cin : %s \n",compte[i].cin);
        printf(" le Montant : %f \n",compte[i].montant);



    }

}


//Recherech par Cin

void rechercheCin(struct  Compte *compte,int taille  ){
                int c=0;
           char cin[10];
            printf(" entrez votre Cin : ");
                scanf("%s",&cin);
          for(int i =0;i<taille;i++){
                    if(strcmp(compte[i].cin,cin) ==0){
            printf(" le nom : %s \n",compte[i].nom);
            printf(" le prenom : %s \n",compte[i].prenom);
            printf(" le Cin : %s \n",compte[i].cin);
            printf(" le Montant : %f \n",compte[i].montant);
            c++;
                        break;
                    }

                }
                if (c!=1){

                    printf("  \n le Cin in valide \n");

                }


}


//saisir  multi compte tableau
 struct Compte * saisirMulti(struct Compte *compte,int taille ,int index){
    int i;


for( i=index; i<taille; i++)
            {
                printf(" \n --------------le compte numero %d ------------------- : ",i+1);
                printf(" \n  >>>Enter votre nom : ");
                scanf("%s",&compte[i].nom);
                printf(" \n >>>Enter votre prenom : ");
                scanf("%s",&compte[i].prenom);
                printf("  \n >>>Enter votre Cin : ");
                scanf("%s",&compte[i].cin);
                printf("  \n >>>Enter votre montant :");
                scanf("%f",&compte[i].montant);


            }
             printf(" \n-----------------------------");
return compte;



}

//saisir  un seul   compte dans un tableau
 struct Compte * saisirOne( struct Compte *compte ,int index){



                printf(" \n Enter votre nom : ");
                scanf("%s",&compte[index].nom);
                printf(" \n Enter votre prenom : ");
                scanf("%s",&compte[index].prenom);
                printf("  \n Enter votre Cin : ");
                scanf("%s",&compte[index].cin);
                printf("  \n Enter votre montant :");
                scanf("%f",&compte[index].montant);



return compte;



}

//Retarit

struct Compte * retrait(struct Compte *compte , int taille){

     char cin[10];
        float montant;
        int c = 0;
                printf(" entrez votre Cin : ");
                scanf("%s",&cin);
                printf(" \n entrez le montant : ");
                scanf("%f",&montant)    ;
                for(int i  =0 ; i<taille ; i++)
                {
                    if(  strcmp(compte[i].cin,cin) ==0)
                    {
                            c++;
                        if(montant<=compte[i].montant){

                             compte[i].montant-=montant;

                             printf(" Bien fait ! \n ");
                             c++;
                        }


                        } }
                        if (c==0){

                             printf("  Le Cin est inccorect! \n ");
                        }if (c==1 ){

                             printf("  LE montant est entré est superieur  que  le montant dans le compte \n ");
                        }



};
//Depot

struct Compte * depot(struct Compte *compte , int taille){

        char cin[10];
        float montant;
        int c = 0;
                printf(" entrez votre Cin : ");
                scanf("%s",&cin);
                printf(" \n entrez le montant : ");
                scanf("%f",&montant)    ;
                for(int i  =0 ; i<taille ; i++)
                {
                    if(  strcmp(compte[i].cin,cin) ==0)
                    {


                        compte[i].montant+=montant;

                        printf(" Bien fait ! \n ");

                        c++;

                        } }
                        if (c!=1){

                             printf("  Le Cin est inccorect! \n ");
                        }

                        return compte;

};
// fedilisation
struct Compte * fidelisation(struct Compte *compte,int taille){
        compte=descendant(compte,taille);

        for(int i=0;i<3;i++){

                compte[i].montant +=  ( 1.3 * compte[i].montant /100 );

        }
        printf ( "\n bien fait ! ");
        return compte;


} ;


//ascendant 1








