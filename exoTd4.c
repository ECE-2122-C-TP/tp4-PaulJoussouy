//
// Created by Paul on 27/09/2021.
//
#include <stdio.h>
#include "exoTd4.h"
#include "fonctionTd4.h"

void exo1(){
    int a= 0, b= 0;
    printf("saisir un entier: ");
    a= getInt();
    printf("saisir un autre entier: ");
    b= getInt();
    printf("le max est: %d", getMax(a,b));
}

void exo2(){
    getInt();// cette fonction correspond à "saisirEntier" de l'exo 2
}

void exo3(){
    int longueur= 0, largeur= 0;
    printf("saisir la longeur: ");
    longueur= getInt();
    printf("saisir la largeur: ");
    largeur= getInt();
    printf("l'aire est de %d, et le perimetre de %d\n", calculAire(longueur,largeur), calculPerimetre(largeur,largeur));
}

int exo4(){
    int a= 0, b= 0;
    printf("saisir un entier: ");
    a= getInt();
    printf("saisir un autre entier: ");
    b= getInt();
    return (b%a==0)? 1: 0;
}

void exo4bis(){
    int a= 0;
    printf("saisir un entier: ");
    a= getInt();
    multiplede3(a);

}
#define CONSTANTE 10
void exo4bisBis(){
    int a= 0;
    printf("saisir un entier: ");
    a= getInt();
    (a>= CONSTANTE)? printf("%d est superieur ou egal à %d",a,CONSTANTE): printf("%d n'est pas superieur ou egal à %d",a,CONSTANTE);
}

float exo5(){
    float pNote= 0.0f, dNote= 0.0f, tNote= 0.0f;
    printf("saisir une note: ");
    pNote= getFloat();
    printf("saisir une deuxieme note: ");
    dNote= getFloat();
    printf("saisir une troisieme note: ");
    tNote= getFloat();
    return (0<=pNote && pNote <=20 && 0<=dNote && dNote <=20 && 0<=dNote && dNote <=20 )? calculMoyenne(pNote,dNote,tNote): -1.0f;

}

int exo7(){
    int nmbreDeClasse= 0, nmbreTotElv= 0;
    nmbreDeClasse= nmbreDeClasses();
    for(int i=0; i<nmbreDeClasse; i++){
       nmbreTotElv += nmbreEleve(i );
    }
    return nmbreTotElv;

}

void exo8(){
    int nmbre= 0;
    do{
        printf("saisir un entier: ");
        nmbre= getInt();
    }
    while(!(multipleDeX(nmbre,2) && multipleDeX(nmbre,7 ))) ;
}

int exo9(){
    int nmbrePierre= 0;
    printf("saisir nombre de pierre au tot: ");
    nmbrePierre= getInt();
    (nmbrePierre==0)? printf("On peut faire exactement 0 etage"): printf("on peut au maxi faire %d étage \t", nmbreEtage(nmbrePierre)-2);
    return 0;

}


int exo10(){
    int a=0, moyenne= 0, compteur= 0;
    do{
        printf("saisir un entier positif: ");
        a=getInt();
        compteur += 1;
        moyenne += a;
    }
    while (a>=0);
    compteur-=1;
    moyenne-= a;
    printf("la moyenne est: %f \n", ((float)moyenne / (float)compteur));
    return 0;
}