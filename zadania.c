#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NewLine()
{
	printf("\n");
}

void NewLines(int count)
{
	int i = 0;
	for(i=0;i<count;i++)
	{
	printf("\n");
	}
}
void WriteBiggerNumber(int x, int y)
{
	if(x>y)
	printf("Pierwsza podana liczba jest wieksza, czyli = %d",x);
	else if (y>x)
	printf("Druga podana liczba jest wieksza, czyli = %d",y);
	else
	printf("Pierwsza podana liczba = %d, druga podana liczba to = %d.\nTo znaczy ze one sa rowne!",x,y);
}
int Multiply(int x, int y)
{
	return x*y;
}

main()
{
printf ("Zadanie 1_1\n");
//1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.
int a=10;
float b=2.8;
char c= 'd';

printf ("Zmienna typu int = %d\nZmienna typu float = %.1f\nZmienna typu char = %c\n\n",a,b,c);

printf("Zadanie 1_2\n");
//1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d

printf ("Zmienna typu int = %d\n\n",a);

printf ("Zadanie 1_3\n");
//1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.
int x=0;
printf("Podaj liczbe calkowita x: ");
scanf ("%d", &x);
printf ("Kwadrat z x= %d\n\n",x*x);

printf ("Zadanie 1_4\n");
/*Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
ona: mniejsza, wiêksza, czy równa 0.*/
int i=0;
printf ("Podaj wartosc zmiennej i= ");
scanf ("%f",&i);
if (i==0)
printf ("Wartosc i jest rowna 0\n");
else if (i>0)
printf ("Wartosc i jest wieksza od 0\n");
else 
printf ("Wartosc i jest mniejsza od 0\n\n");

printf("Zadanie 1_5\n");
//Pobraæ ud u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.
int x1=0 , x2=0, x3=0; 
printf("Podaj wartosc x1 = ");
scanf("%d", &x1);
printf("Podaj wartosc x2 = ");
scanf("%d", &x2);
printf("Podaj wartosc x3 = ");
scanf("%d", &x3);
if (x1>x2)
	if (x1>x3) 
		printf ("Najwieksza liczba to x1");
	else
		printf ("Najwieksza liczba to x3");
else if (x2>x3)
	printf ("Najwieksza liczba to x2");
else
	printf ("Najwieksza liczba to x3"); // sprawdzam tylko liczby x1,x2,x3 które s¹ ró¿ne od siebie
	
printf ("\n\n Zadanie 1_6\n");
/*Napisaæ prosty kalkulator. Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie
0)*/
float l1=0, l2=0;  int dzialanie=0, d=1;

printf("KALKULATOR\n");
while (d!=0)
{
printf("\nPodaj pierwsza liczbe =");
scanf("%f",&l1);
printf("Podaj druga liczbe = ");
scanf ("%f",&l2);
printf ("Wpisz\n1- jezeli chcesz dodac\n2- jezeli chcesz odjac\n3- jezeli chcesz podzielic\n4- jezeli chcesz pomnozyc\n0- jezeli chcesz zakonczyc\n");
scanf ("%d",&dzialanie);
switch (dzialanie)
{
	case 1 : printf ("\nl1 + l2= %f", l1+l2);
	break;
	case 2 : printf ("\nl1 - l2= %f", l1-l2);
	break; 
	case 3 : 
	if (l2==0) printf ("\nNie dzielimy przez zero");
	else
	printf ("\nl1 / l2=%f ", l1/l2);
	break;
	case 4 : printf ("\nl1 * l2=%f ", l1*l2);
	break;
	case 0 : d=0; printf ("\nDo widzenia !");
	break;
	default : printf ("\nZ³e dzia³anie");
	break;
}
}

printf("\n\nZadanie 2_1\n");
/*Napisaæ pêtlê, w któej u¿ytkownik podaje liczbê x. Nale¿y
wyœwietliæ tê liczbê. Je¿eli u¿ytkownik poda 0, nale¿y zakoñczyæ program.*/
 x=1;
printf ("Wyswietlanie liczb jezeli chcesz zakonczyc podaj liczbe 0\n");
while (x!=0)
{
printf("\nPodaj liczbe: ");
scanf ("%d", &x);
printf ("\nTwoja liczba to: %d", x);
	
}
printf("\n\nZadanie 2_2\n");
/*Przerobiæ kalkulator z zadania 1.6. Teraz po ka¿dym dzia³aniu program powinien spytaæ u¿ytkownika, czy ten chce powtórzyæ
wszystko od pocz¹tku. Jeœli tak - restartujemy kalkulator i zaczynamy od nowa. Jeœli nie - koñczymy program.*/
printf("Patrz zadanie 1_6"); //zrobi³am to odrazu w zadaniu 1_6

printf("\n\nZadaniie 2_3\n");
/*Pobraæ od u¿ytkownika liczbê x. Nale¿y wyœwietliæ wszystkie kolejne potêgi liczby x. Zakoñczyæ program, kiedy liczba przekroczy 100
000.*/
long int f = 0; int w = 1 ;
x=0;
printf("Podaj f = ");
scanf("%d", &f);
while (x<100000)
{

	x=pow(f,w);
	printf("\nf^2 = %d",x);
	w= w+1;
}
printf("\n\nZadanie 2_4\n");
/*Pobraæ od u¿ytkownika liczbê x. Jeœli liczba jest niedodatnia - nale¿y zakoñczyæ program. Nastêpnie nale¿y wyœwietlaæ kolejno (w
nowej linii) wszystkie liczby mniejsze od x, a¿ osi¹gniête zostanie 0.*/
x=0; 
printf ("Podaj liczbe : ");
scanf ("%d",&x);
while (x>0)
{
	printf ("%d\n",x);
	x=x-1;
}
printf ("\n\nZadanie 2_5\n");
/*Przerobiæ program z zadania 2.4, aby wyœwietla³ tylko parzyste liczby (u¿yæ if oraz continue). Jeœli liczba wynosi 40, nale¿y
wyjœæ z pêtli i zakoñczyæ program.*/
x=0; 
printf ("Podaj liczbe : ");
scanf ("%d",&x);
while (x>0)
{
	if (x==40)
	break;
	
	else if (x%2==0)
	{
		printf ("%d\n",x);
		x=x-1;
		continue;
	}
	x=x-1;
}
printf ("\n\nZadanie 2_6\n");
//Napisaæ pêtlê for, która wyœwietli cyfry od 0 do 9. 
x=0;
for(i=0;i<10;i++)
{
	printf("%d ",i);
}

printf ("\n\nZadanie 2_7\n");
/*Pobraæ od u¿ytkownika liczby x i y. Zak³adamy, ¿e y > x (zawsze, nie musimy tego sprawdzaæ). Za pomoc¹ pêtli for wypisaæ liczby
miêdzy x a y (do przemyœlenia - co jest stanem pocz¹tkowym, a co warunkiem zakoñczenia pêtli?)*/
x=0;
int y=0;
printf("Podaj mniejsza liczbe: ");
scanf("%d",&x);
printf("Podaj wieksza liczbe: ");
scanf("%d",&y);
for(x=x+1;x<y;x++)
{
	printf("Wartosc: %d\n",x);
}
printf ("\n\nZadanie 2_8\n");
/*Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisaæ wszystkie liczby mniejsze od x, ale wiêksze ni¿ 0*/

x=0;
printf("Podaj liczbe x: ");
scanf("%d",&x);

for(x=x-1;x>0;x--)
{
	printf("Wartosc: %d\n",x);
}

 

printf ("\n\nZadanie 2_9\n");
/*Pobraæ od u¿ytkownika liczbê x. Za pomoc¹ pêtli for wypisywaæ CO TRZECI¥ liczbê wiêksz¹ od x. Pêtla powinna siê zakoñczyæ, jeœli
liczba przekroczy 100. Uwaga - proszê nie u¿ywaæ operacji continue i break, a sterowaæ tylko parametrami pêtli.*/

x=0;

printf("Podaj liczbe x: ");
scanf("%d",&x);

for(x=x+3;x<100;x+=3)
{
	printf("Wartosc: %d\n",x);
}
printf ("\n\nZadanie 3_1\n");
/*Napisaæ metodê void NewLine(). Powinna ona wypisaæ na ekran pojedyncz¹ pust¹ liniê. U¿yæ tej metodê w main().*/

printf("Ponizej jest nowa linia");
NewLine();
printf("Powyzej jest nowa linia");

printf ("\n\nZadanie 3_2\n");
/*Napisaæ metodê void NewLines(int count). Powinna ona wypisaæ tyle nowych linii, ile zosta³o podanych W PARAMETRZE count (nale¿y
u¿yæ pêtli for). U¿yæ metodê w main()*/
x=0;
printf("Podaj ile razy ma zostac napisana nowa linia: ");
scanf("%d",&x);
NewLines(x);
printf("Po wypisaniu nowych linii!");

printf ("\n\nZadanie 3_3\n");
/*Napisaæ metodê void WriteBiggerNumber(int x, int y). Metoda powinna pobraæ 2 parametry i zwróciæ wiêkszy z nich. Wykorzystaæ
funckjê w metodzie main(). UWAGA - pobieranie liczb od u¿ytkownika powinno odbyæ siê w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji nale¿y jedynie przes³aæ pobrane wczeœniej parametry.*/
printf("Podaj pierwsza liczbe: ");
scanf("%d",&x);
printf("Podaj druga liczbe: ");
scanf("%d",&y);
WriteBiggerNumber(x,y);

printf ("\n\nZadanie 3_3\n");
/*Napisaæ metodê Multiply(int x, int y) . Metoda powinna ZWRÓCIÆ (s³owo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
NIE POWINNA wypisywaæ wyniku - powinien on byæ wyœwietlony w funkcji main!*/
printf("Podaj pierwsza liczbe: ");
scanf("%d",&x);
printf("Podaj druga liczbe: ");
scanf("%d",&y);
printf("Wynik mnozenia tych dwoch liczb to = %d",Multiply(x,y));

return 0;

}
