#include <stdio.h>

int fact(int m);

int main()
{
	int m;

	printf("Enter a number to find the factorial : ");

	scanf("%d",&m );

	int Factoriel = fact(m);
	printf("The factorial of %d is %d.", m, Factoriel);
	return 0;
}

int fact(int m)
{   

	if (m==0)
	{
		return 1;
	}
	
	return m*fact(m-1);


}

/* Exercises 
- ecrivez l'en tete de la fonction fait_le() qui a trois arguments de type char et qui renvoie une valeur de type float au programme appelant.
   float fait_le(char a, char b, char c)
-ecrivez l'en tete de la fonction affiche_un_nombre() qui a un seul argument de type int et qui n erenvoi rein au programme appelant.
   void affiche_un_nombre(int a)
-Quel type de valeur renvoient les fonctions suivantes:
   - int affiche_erreur(float err_nbr);
   -long lit


-ecrivez une fonction qui recoit deux nombres en arguments et qui renvoie la valeur correspondant au produit de ces deux nombres.
   int mult(int a, int b)
   { 
   return a*b;
   }


-ecrivez une fonction qui recoit deux nombres en arguments et qui divise le premier par le second si cellui-ci est different de zero.
  float div(float a, floatb)
  {
  if (b!=0)
  {
  return a/b;
  }
  else {return 0};
  }

-ecrivez un programme qui utilise une fonction pour calculer la moyenne de valeurs de type float, données par l'utilisateur.
  float moyenne(float a, floatb)
  {
  int avg;
  avg= (a+b)/2;

  }


-Ecrivez une fonction recurrente qui calcule le resultat de la valeur 3 a la puissancce du nombre choisi par l'utilisateur.
-par example si le nombre 4 est tapé par l'utilisateur, le resultat sera 81

float puissance(int a)
{
if (a==0)
{return 1;
}
else if (a<0)
{
return 1/puissance(a)
}
else
{
return puissance(a)= 3*puissance(a-1) or return puissance(a)= 3*puissance(--a)
}

}


*/