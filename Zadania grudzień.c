#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int IsSorted(int *tab, int s)
{
	int a = 0;
	int i;
	for (i=0; i<s; i++)
	{
		if (tab[i]<tab[i+1])
		a++;
	}
	if (a==s)
	return 1;
	else
	return 0;
}

void printBackwards(int *a, int s)
{
	printf ("\n Tablica od konca \n");
	int i;
	for (i=s; i>=0; i--)
	{
		printf ("%i \n", a[i]);
	}
	
}

void printDots(int*a, int s)
{
	int i,j;
	for (i = 0 ; i<s ; i++)
		{
			
			for(j = 0 ; j<a[i]; j++)
			{
				printf(".");
			}
			printf("\n");
		}	
}

int getLength(char *str)
{
	int a = 0, i = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
	a++;	
	}

	return a;
}

void Reverse (char *str)
{
	int t = getLength(str);
	char str1[100];
	int i;
	int e = t-1;
	for (i = 0; i < t; i++) 
	{
      str1[i] = str[e];
      e--;
    }
 
	
    str1[i] = '\0';
 
    printf("Lancuch znakow po odwroceniu: %s", str1);
	
}

int Sum(int *a, int s)
{
	int k = 0;
	int i;
	for (i = 0 ; i<s ; i++)
	{
		k = k + a[i];
	}
	return k;
}

int containsDigits(char *str)
{
	int i,p = 0;
	int t = getLength(str);
	for(i = 0; i<t; i++)
	{
		if(isdigit(str[i]))
		{
			p = 1;
		}
	}
	return p;
}

int AreArraysIdentical(int *a1, int s1, int *a2, int s2)
{
	int i, flag = 0, k = 0;
	if(s1 == s2)
	{
	for(i = 0; i<s1 ;i++)
	{
		if(a1[i] == a2[i])
		{
			k++;
		}
	}
		if(k == i)
		{
			flag = 1;
		}
	}
	else
	flag = 0;
	
	return flag;
	
	
}

char* reverseString(char *s)
{
	int t = getLength(s);	
	char *str1;
	str1 = (char*)malloc(sizeof(char)*t);
	int i;
	int e = t-1;
	for (i = 0; i < t; i++) 
	{
      str1[i] = s[e];
      e--;
    }
 
	
    str1[i] = '\0';
 
 	return str1;
}

int main ()
{
	//Zadanie 1.1
	printf ("Zadanie 1.1 \n");
	int tab[5];
	int i,j;
	for (i =0; i<5; i++)
	{
		printf ("\n Podaj liczbe: ");
		scanf ("%i", &tab[i]);
	}
	int a = tab[0];
	for (i=1; i<5; i++)
	{
		if (a<tab[i])
		a=tab[i];
	}
	printf ("\n Najwyzsza wartosc= %i", a);
	//Zadanie 1.2
	printf ("\n Zadanie 1.2 \n");
    printf ("\n Tablica od poczatku \n");
	for (i =0; i<5; i++)
	{
		printf ("%i \n", tab[i]);
	}
	printf ("\n Tablica od konca \n");
	for (i=4; i>=0; i--)
	{
		printf ("%i \n", tab[i]);
	}
	printf ("\n Zadanie 1.3\n");
	a = 0;
	for (i=0; i<4; i++)
	{
		if (tab[i]<tab[i+1])
		a++;
	}
	if (a==4)
	printf("Tablica posortowana niemalejaco.");
	else
	printf("Tablica nie jest posortowana");
	
	printf ("\n Zadanie 2.1\n");
	int r;
	printf("Podaj rozmiar tablicy do posortowania (nie moze byc wiekszy niz 5)\n");
	scanf("%d", &r);
	if (r>5)
	printf("Zly rozmiar tablicy!");
	else
	if (IsSorted(tab, r-1) == 1)
	printf("Tablica posortowana niemalejaco.");
	else
	printf("Tablica nie jest posortowana");
	
	printf ("\n Zadanie 2.2\n");
	
	r = 0;
	printf("Podaj rozmiar tablicy do wypisania od tylu (nie moze by wiekszy niz 5)\n");
	scanf("%d", &r);
	if (r>5)
	printf("Zly rozmiar tablicy!");
	else
	printBackwards(tab,r-1);
	
	printf ("\n Zadanie 2.3\n");
	
	r = 0;
	printf("Podaj rozmiar tablicy do wykropkowania (nie moze byc wiekszy niz 5)\n");
	scanf("%d", &r);
	if (r>5)
	printf("Zly rozmiar tablicy!");
	else
	printDots(tab,r);
	
	printf ("\n Zadanie 2.4\n");
	
	r = 0;
	printf("Podaj rozmiar tablicy do zsumowania (nie moze byc wiekszy niz 5)\n");
	scanf("%d", &r);
	if (r>5)
	printf("Zly rozmiar tablicy!\n");
	else
	printf("Suma elementow tablicy: %i",Sum(tab,r));
	
	printf ("\n Zadanie 2.5\n");
	
	printf("Podaj rozmiar tablicy: ");
	scanf("%d", &r);
	int tablica[r];
	for (i = 0; i<r; i++)
	{
		tablica[i] = rand()%10;
	}
	
	printf("\nNieposortowana tablica: ");
	for (i = 0; i<r; i++)
	{
		printf("%i,",tablica[i]);		
	}

	int temp = 0;
	for (i = 0; i<r-1; i++)
	{
		for (j = 0 ; j<r-1-i; j++)
		{
			if (tablica[j]>tablica[j+1])
			{
			temp = tablica[j+1];
			tablica[j+1] = tablica[j];
			tablica[j] = temp;
			}
		}
	}
	
	printf("\nPosortowana tablica: ");
	for (i = 0; i<r; i++)
	{
		printf("%i,",tablica[i]);		
	}
	
	printf ("\n Zadanie 3.1\n");
	
	char str[100];
	printf("Podaj slowo do przeliczenia: ");
	scanf(" %[^\t\n]s",&str);
	
	printf("Twoje slowo: %s\n", str);
	printf("Rozmiar tablicy wynosi: %i",getLength(str));
	
	printf ("\n Zadanie 3.2\n");
	
	printf("Lancuch znakow przed odwroceniem: %s\n",str);
	Reverse(str);
	
	printf ("\n Zadanie 3.3\n");
	
	if (containsDigits(str) == 1)
	printf("Podany string posiada cyfre.");
	else
		printf("Podany string nieposiada cyfry.");
		
	printf ("\n Zadanie 3.4\n");	
	printf ("Wszystkie zadania od poczatku byly robione na stringu pobranego od uzytkownika.");
	
	printf ("\n Zadanie 4.1\n");
	
	int *tab1;
	int n = 0;
	printf ("Podaj liczbe elementow tablicy n= ");
	scanf ("%i",&n);
	tab1 = (int*)malloc(sizeof(int)*n);
	for (i = 0; i<n; i++)
	{
		printf ("\n Podaj liczbe: ");
		scanf ("%i", &tab1[i]);
	}
	printBackwards(tab1,n-1);
	free(tab1);
	
	printf ("\n Zadanie 4.2\n");
		
	int *tab2, *tab3;
	int n1 = 0;
	printf ("Podaj liczbe elementow tablicy n= ");
	scanf ("%i",&n1);
	tab2 = (int*)malloc(sizeof(int)*n1);
	for (i = 0; i<n1; i++)
	{
		printf ("\n Podaj liczbe: ");
		scanf ("%i", &tab2[i]);
	}
	
	tab3 = (int*)malloc(sizeof(int)*n1);
	int k = 0;
	for (i = 0; i<n1; i++)
	{
		if(tab2[i]<0)
		{
			*(tab3 + k) = tab2[i];
			k++;
		}
	}	
	if(k == 0)
	printf("Brak ujemnych elementow!");
	else
	{
	printf("Ujemne elementy: ");
	for(i = 0; i<k ; i++)
	{
		printf("%i,",tab3[i]);
	}
	}
	
	free(tab2);
	free(tab3);
	
	printf ("\n Zadanie 4.3\n");
	
	int rozm1 = 0, rozm2 = 0;

	printf ("Podaj rozmiar pierwszej tablicy: ");
	scanf ("%i",&rozm1);
	printf ("Podaj rozmiar drugiej tablicy: ");
	scanf ("%i",&rozm2);
	int tab4[rozm1];
	int tab5[rozm2];
	for (i = 0; i<rozm1; i++)
	{
		printf ("\nPodaj liczbe do pierwszej tablicy: ");
		scanf ("%i", &tab4[i]);
	}
	for (i = 0; i<rozm2; i++)
	{
		printf ("\nPodaj liczbe do drugiej tablicy: ");
		scanf ("%i", &tab5[i]);
	}
	
	if(AreArraysIdentical(tab4,rozm1,tab5,rozm2) == 1)
	printf("Podane tablice sa identyczne!");
	else
	printf("Podane tablice nie sa identyczne!");
	
	printf ("\n Zadanie 4.4\n");
		
	char *str5;
	int n5 = 0;
    printf("Ile znakow ma Twoje zdanie? ");
    scanf("%d", &n5);

    str5 = (char*)malloc(sizeof(char)*n5);

    printf("Wpisz zdanie: ");
    scanf(" %[^\t\n]s",str5);
	
	char *result = reverseString(str5);
	printf("Odwrocone Twoje zdanie: %s", result);
	
	free(str5);
	free(result);
	
	return 0;
}
