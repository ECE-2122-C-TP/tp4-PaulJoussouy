//
// Created by Paul on 25/09/2021.
//
#include <stdio.h>
#include "fonctionTd4.h"
int getInt(){// cette fonction correspond à "saisirEtier" de l'exo 2
    int a=0;
    scanf("%d",&a);
    return a;
}

float getFloat(){ // permet de saisir un entier
    float a= 0.0f;
    scanf("%f",&a);
    return a;
}

int getMax(int a, int b){
    return (a<b||b==a)? b: a;

}

int calculAire(int longueur, int largeur){
    return longueur * largeur ;
}

int calculPerimetre(int longueur, int largeur){
    return 2*longueur + 2*largeur ;
}

void multiplede3(int a){
    (a%3==0)? printf("%d est multiple de 3",a): printf("%d n'est pas un multiple de 3",a);
}

float calculMoyenne(float a, float b, float c){
    return (a+b+c)/(float)3 ;
}

int nmbreDeClasses(){
    printf("Saisir le nombre de classe: ");
    return getInt();

};

int nmbreEleve(int numeroClasse ){
    printf("Saisir le nombre d'eleves dans la classe numero %d: ",numeroClasse);
    return getInt();
}

int multipleDeX(int a, int x){ // fction qui renvoit 1 si "a" est multiple de "x", 0 sinon
    return (a % x== 0)? 1: 0;
}

int nmbreEtage(int nmbrePierre){// on rentre le nmbre de pierre et renvoie le nmbre d'etage
    int nmeroEtage= 1;
    while(nmbrePierre >= 0){
        nmbrePierre-= (nmeroEtage * nmeroEtage); // on enleve aux nmbre tot de pierre le nmbre de pierre par etage
        nmeroEtage+=1;
    }
    return  nmeroEtage;
}

