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
//1.1. Zadeklarowa� zmienne typu int, float, char. Przypisa� do nich warto��, wy�wietli� je na ekran.
int a=10;
float b=2.8;
char c= 'd';

printf ("Zmienna typu int = %d\nZmienna typu float = %.1f\nZmienna typu char = %c\n\n",a,b,c);

printf("Zadanie 1_2\n");
//1.2. Wy�wietli� zmienn� typu int na ekran. Nale�y u�y� metody printf i konstrukcji %d

printf ("Zmienna typu int = %d\n\n",a);

printf ("Zadanie 1_3\n");
//1.3. Pobra� od u�ytkownika liczb� x. Wy�wietli� kwadrat liczby x.
int x=0;
printf("Podaj liczbe calkowita x: ");
scanf ("%d", &x);
printf ("Kwadrat z x= %d\n\n",x*x);

printf ("Zadanie 1_4\n");
/*Zapozna� si� z instrukcjami warunkowymi (if, else if, else oraz switch). Pobra� od u�ywkownika liczb� i wy�wietli� informacj�, czy jest
ona: mniejsza, wi�ksza, czy r�wna 0.*/
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
//Pobra� ud u�ytkownika 3 liczby (x1, x2, x3). Wy�wietli� informacj�, kt�ra z tych liczb jest najwi�ksza.
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
	printf ("Najwieksza liczba to x3"); // sprawdzam tylko liczby x1,x2,x3 kt�re s� r�ne od siebie
	
printf ("\n\n Zadanie 1_6\n");
/*Napisa� prosty kalkulator. Nale�y pobra� od u�ytkownika 2 liczby oraz operator (jeden z czterech: mno�enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u�ytkownika. Uwaga - nale�y pami�ta� o u�amkach (1/3 powinno da� 0.33, a nie
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
	default : printf ("\nZ�e dzia�anie");
	break;
}
}

printf("\n\nZadanie 2_1\n");
/*Napisa� p�tl�, w kt�ej u�ytkownik podaje liczb� x. Nale�y
wy�wietli� t� liczb�. Je�eli u�ytkownik poda 0, nale�y zako�czy� program.*/
 x=1;
printf ("Wyswietlanie liczb jezeli chcesz zakonczyc podaj liczbe 0\n");
while (x!=0)
{
printf("\nPodaj liczbe: ");
scanf ("%d", &x);
printf ("\nTwoja liczba to: %d", x);
	
}
printf("\n\nZadanie 2_2\n");
/*Przerobi� kalkulator z zadania 1.6. Teraz po ka�dym dzia�aniu program powinien spyta� u�ytkownika, czy ten chce powt�rzy�
wszystko od pocz�tku. Je�li tak - restartujemy kalkulator i zaczynamy od nowa. Je�li nie - ko�czymy program.*/
printf("Patrz zadanie 1_6"); //zrobi�am to odrazu w zadaniu 1_6

printf("\n\nZadaniie 2_3\n");
/*Pobra� od u�ytkownika liczb� x. Nale�y wy�wietli� wszystkie kolejne pot�gi liczby x. Zako�czy� program, kiedy liczba przekroczy 100
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
/*Pobra� od u�ytkownika liczb� x. Je�li liczba jest niedodatnia - nale�y zako�czy� program. Nast�pnie nale�y wy�wietla� kolejno (w
nowej linii) wszystkie liczby mniejsze od x, a� osi�gni�te zostanie 0.*/
x=0; 
printf ("Podaj liczbe : ");
scanf ("%d",&x);
while (x>0)
{
	printf ("%d\n",x);
	x=x-1;
}
printf ("\n\nZadanie 2_5\n");
/*Przerobi� program z zadania 2.4, aby wy�wietla� tylko parzyste liczby (u�y� if oraz continue). Je�li liczba wynosi 40, nale�y
wyj�� z p�tli i zako�czy� program.*/
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
//Napisa� p�tl� for, kt�ra wy�wietli cyfry od 0 do 9. 
x=0;
for(i=0;i<10;i++)
{
	printf("%d ",i);
}

printf ("\n\nZadanie 2_7\n");
/*Pobra� od u�ytkownika liczby x i y. Zak�adamy, �e y > x (zawsze, nie musimy tego sprawdza�). Za pomoc� p�tli for wypisa� liczby
mi�dzy x a y (do przemy�lenia - co jest stanem pocz�tkowym, a co warunkiem zako�czenia p�tli?)*/
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
/*Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisa� wszystkie liczby mniejsze od x, ale wi�ksze ni� 0*/

x=0;
printf("Podaj liczbe x: ");
scanf("%d",&x);

for(x=x-1;x>0;x--)
{
	printf("Wartosc: %d\n",x);
}

 

printf ("\n\nZadanie 2_9\n");
/*Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisywa� CO TRZECI� liczb� wi�ksz� od x. P�tla powinna si� zako�czy�, je�li
liczba przekroczy 100. Uwaga - prosz� nie u�ywa� operacji continue i break, a sterowa� tylko parametrami p�tli.*/

x=0;

printf("Podaj liczbe x: ");
scanf("%d",&x);

for(x=x+3;x<100;x+=3)
{
	printf("Wartosc: %d\n",x);
}
printf ("\n\nZadanie 3_1\n");
/*Napisa� metod� void NewLine(). Powinna ona wypisa� na ekran pojedyncz� pust� lini�. U�y� tej metod� w main().*/

printf("Ponizej jest nowa linia");
NewLine();
printf("Powyzej jest nowa linia");

printf ("\n\nZadanie 3_2\n");
/*Napisa� metod� void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count (nale�y
u�y� p�tli for). U�y� metod� w main()*/
x=0;
printf("Podaj ile razy ma zostac napisana nowa linia: ");
scanf("%d",&x);
NewLines(x);
printf("Po wypisaniu nowych linii!");

printf ("\n\nZadanie 3_3\n");
/*Napisa� metod� void WriteBiggerNumber(int x, int y). Metoda powinna pobra� 2 parametry i zwr�ci� wi�kszy z nich. Wykorzysta�
funckj� w metodzie main(). UWAGA - pobieranie liczb od u�ytkownika powinno odby� si� w funkcji main(), a NIE w WriteBiggerNumber! Do
funkcji nale�y jedynie przes�a� pobrane wcze�niej parametry.*/
printf("Podaj pierwsza liczbe: ");
scanf("%d",&x);
printf("Podaj druga liczbe: ");
scanf("%d",&y);
WriteBiggerNumber(x,y);

printf ("\n\nZadanie 3_3\n");
/*Napisa� metod� Multiply(int x, int y) . Metoda powinna ZWR�CI� (s�owo kluczowe return) iloczyn dw�ch parametr�w. Uwaga! Metoda
NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main!*/
printf("Podaj pierwsza liczbe: ");
scanf("%d",&x);
printf("Podaj druga liczbe: ");
scanf("%d",&y);
printf("Wynik mnozenia tych dwoch liczb to = %d",Multiply(x,y));

return 0;

}
