# hh

### Co vypise

```cpp
cout << !6;
```

- a) `-6`
- b) chyba pri kompilaci
- c) `0`
- d) `1`

### Kolikrat se provede cyklus 

```cpp
for (int i = 0; i < 5; i++)
    i++;
```

- a) 0
- b) 3
- c) 2
- d) 5

### Co se vypise

```cpp
for (int i = 0; i < 3; i++)
    cout << "a";
```

- a)
- b)
- c)
- d)

- a) `aaa`
- b) nic
- c) `a`
- d) `aa`

### Co se vypise

```cpp
for (int i = 0; i < 5; i++)
    cout << "b";
```

- a) `bbbbb`
- b) `bbbb`
- c) chyba pri kompilaci
- d) nic

### Co se vypise (u little endian 32-bit CPU)

```cpp
cout \<\< (int)(char)259;
```

- a) 259 
- b) 0 
- c) 3 
- d) 4

**6) Co se vypíše:**

const int i = 4;

for (int i = 0; i \< 5; i++)

{

cout \<\< "a";

}

a\) aaaaa b) a c) chyba při kompilaci d) chyba při běhu programu

**7) Jsou identifikátory v C++ case-sensitive?**

a\) ano b) ne c) jen při použití #pragma explicit lowercase d) pouze
identifikátory funkcí

**8) Co se vypíše?**

int i = 13;

for (int i = 0; i \< 6; i++)

{

for (int i = 5; i \< 6; i++)

{

cout \<\< i;

}

}

a\) 13 b) 555555 c) 012345 d) 56

**9) Kolik bude i a j?**

int i = 5;

int j = 6;

{

i = 10;

int j = 1;

}

cout \<\< i \<\< "-" \<\< j;

a\) 5-6 b) 5-1 c) 10-1 d) 10-6

**10)** **Existují v C++ tyto operátory?**

new :: & \^ , throw erase

a\) žádný z nich neexistuje b) pouze první tři c) všechny kromě
posledního d) všechny

**11) Co se vypíše?**

int p=4;

int q=2;

while (p\<11)

{

p=p+q;

q=q\*q;

}

cout\<\<p\<\< " " \<\<q\<\<endl;

a\) 4 4 b) 26 256 c) 6 4 d) 10 16

**12) Kolik bude x a y?**

x=0;

y=1;

x=y;

y=x;

a\) x bude 0, y bude 1 b) x bude 1, y bude 0 c) x bude 1, y bude 1 d) x
bude 0, y bude 0

**13) Co dělají příkazy continue a break?**

a\) break - ukončí cyklus, continue - přeskočí na další iteraci cyklu

b\) break - přeskočí na další iteraci cyklu, continue - ukončí cyklus

c\) break - řekne cyklu, aby se vyresetoval, continue - řekne cyklu, aby
se vrátil o iteraci zpátky

d\) break - řekne cyklu, aby se vrátil o iteraci zpátky, continue -
řekne cyklu, aby se vyresetoval

**14) Co se vypíše?**

int cislo=5;

if(cislo\>5) if(cislo==5) cout\<\<\"rovny 5\"; else if(cislo\<=5)

cout\<\<\"mensi rovny 5\"; else cout \<\< "cislo neexistuje"; else cout
\<\< "nerovny 5";

a\) rovny 5 b) mensi rovny 5 c) cislo neexistuje d) nerovny 5

**15) Co se vypíše?**

int i = 0;

while(true)

{

if (i \> 50000)

cout \<\< break;

}

a\) break b) 0 c) chyba při kompilaci d) 50001

**16) Sto litrů vodky stojí 15,30 Kč, vymyslete C++ výraz na cenu pro N
litrů.**

a\) double cena = 15.30 \* N / 100; b) double cena = N \* 100/15.30; c)
char cena = N \* 15.30;

d\) int cena = 100 \* 15.30 / N;

**17) Co se vypíše?**

int i = 6, j = 7, m = 11, n = 11;

cout \<\< \"Karel \";

if (i\<j)

if(m==n)

cout \<\< \"snedl \";

else cout \<\< \"nesnedl \";

cout \<\< \"prilis mnoho \";

if (i \>= m)

cout \<\< \"spenatu.\";

else

cout \<\< \"brokolice.\";

a\) Karel snedl prilis mnoho spenatu. b) Karel snedl prilis mnoho
brokolice. c) Karel nesnedl prilis mnoho brokolice. d) Karel nesnedl
prilis mnoho spenatu.

**18) Co se stane?**

for (int n = 1; n \> 0; n = n\*10)

{

cout \<\< \"Hodnota n je: \" \<\< n \<\< endl;

}

a\) cyklus bude donekonečna vypisovat hodnotu proměnné n b) vypíše se 1
10 100

c\) cyklus několikrát vypíše n a pak se po přetečení n zastaví d) cyklus
neproběhne ani jednou

**\
19) Co se vypíše?**

char znak = 65;

cout \<\< znak;

a\) a b) nic c) 65 d) A

**20) Co bude v proměnné x?**

int x = 20 /\* 10 \*/ / 5;

a\) 400 b) 4 c) 200 d) 1000

**21) Jaké jsou cykly v C++?**

a\) switch, for, while b) while, for, do-while, foreach c) if, switch d)
while, for, do-while

**22) Jaké jsou podmínkové konstrukce v C++?**

a\) if, for, while b) if, switch c) else, while d) if, foreach, else

**23) Má \>= větší přednost než + / \* -?**

a\) ano b) nelze určit c) ne d) pouze při porovnávání

**24) Který příklad je špatně?**

I. int FLOAT = 5.6f;

II\. int cislo_dva = 'a';

III\. double cislo = 5-5\^2;

IV\. char znak jedna = 'c';

a\) I. b) II. c) III. d) IV.

**25) Co se vypíše?**

int x = 2;

int z = (5/(1+x\*x));

cout \<\< z;

a\) 2 b) z c) 1 d) 9

**26) Co se vypíše?**

int counter1 = 0, counter2 = 0, counter3 = 0;

for (int i = 0; i \< 2; i++)

{

counter1++;

for (int i = 0; i \< 5; i++)

{

++counter2;

for (int i = -10; i \< 0; ++i)

{

counter3 += 1;

}

}

}

cout \<\< counter1 \<\< " " \<\< counter2 \<\< " " \<\< counter3;

a\) 2 5 10 b) 0 0 0 c) 2 10 100 c) 2 5 -10

**27) Co se stane?**

int i = 6;

bool k = true;

bool p = true;

p = !(!k\|\|p)&&p\|\|k;

a\) p bude false b) p bude true c) chyba při kompilaci - špatné závorky
d) k bude false

**28) Co se vypíše?**

int r = 2;

double s1 = 4\*r\*r/4;

double s2 = 5/2\*r\*r;

cout \<\< s1 \<\< s2;

a\) 00 b) 48 c) 010 d) 410

**29) Co se vypíše?**

int a = 2, b = 4, c = 6;

for (int i = 0; i \<= 10; i++) {a++; for (int i=0; i\<=30; b++){i++;}
++c;}

cout \<\< a \<\< b \<\< c;

a\) cyklus bude probíhat nekonečně dlouho b) 123030 c) 1334517 d) 123113

**30) Jaká bude hodnota l?**

bool p = false;

bool k = false;

bool l = true;

l = k != l && l ==p;

a\) l bude true b) l bude false c) chyba při kompilaci - špatné pořadí
operátorů d) chyba při kompilaci - porovnávání vně podmínky

**31) Na jakou velikost (kolik bytů) se nastaví pole retezec?**

char retezec\[\] = "asd\\n\\td";

a\) 8 b) 6 c) 7 d) 3

**32) Co se vypíše?**

int i =10;

int j =20;

{\
int i=30;\
int j=40;

}\
cout \<\< i \<\< \" \" \<\< j \<\< \" \"\<\< endl;

a\) nejde přeložit protože nelze mít 2x deklarované int b) 10 20 c) 30
40 d) 0

**33) Co se vypíše?**

int volba=1;

switch (volba+1)

{\
case 1:\
cout \<\< \"jedna\";\
break;\
case 2:\
cout \<\< \"dva\";\
case 3:\
cout \<\< \"tri\";\
break;\
default:\
cout \<\< \"ostatni\";\
}

a\) jedna b) dva c) ostatni d) dvatri

**34) Co se vypíše?**

int volba=1;

switch (volba+1)

{\
case \'1\':\
cout \<\< \"jedna\";\
break;\
case \'2\':\
cout \<\< \"dva\";\
break;\
case \'3\':\
cout \<\< \"tri\";\
break;\
default:\
cout \<\< \"ostatni\";\
break;\
}\
a) jedna b) dva c) tri d) ostatni

**35) Co se vypíše?**

int count = 0;

int i;

for (i=0;i\<10;i++)

{

if (i%2==0)

{

count +=1;

cout \<\< count;

}

}

a\) 12345 b) 0 c) nejde přeložit d) 2345

**36) Co se vypíše? \***

#include \<iostream\>

int main()

{

{

using std::cout;

}

cout \<\< "a" \<\< "hoj";

return 0;

}

a\) nic b) ahoj c) chyba při kompilaci d) hoja

**37) Co se vypíše? \***

int a = 1;

int b = -1;

int c = 2;

c = a+++ ++b;

cout \<\< a \<\< b \<\< c;

a\) 1-10 b) chyba při kompilaci c) 202 d) 201

**38) Co se vypíše? \***

int pole\[3\] = {3,2,1};

cout \<\< 1\[pole\];

a\) 1 b) chyba při kompilaci c) chyba při běhu programu d) 2

**39) Co se vypíše?**

string a = "4";

cout \<\< '4' + '5';

cout \<\< a + "5";

a\) 99 b) 945 c) 10545 d) 4545

**40) Co se vypíše?**

cout \<\< true \<\< boolalpha \<\< true \<\< noboolalpha \<\< true;

a\) 111 b) 1true1 c) truetrue1 d) truetruetrue

**41) Co se vypíše?**

int \* a = (int \*) 4, b = 3;

int c = 5;

a = &c;

b = a;

cout \<\< \*b;

a\) chyba při kompilaci b) 5 c) 3 d) 4

**Odpovědi**

1\) c) 17) b) 33) d)

2\) b) 18) c) 34) d)

3\) c) 19) d) 35) a)

4\) c) 20) b) 36) c)

5\) c) 21) d) 37) d)

6\) a) 22) b) 38) d)

7\) a) 23) c) 39) c)

8\) b) 24) d) 40) b)

9\) d) 25) c) 41) a)

10\) c) 26) c)

11\) b) 27) b)

12\) c) 28) b)

13\) a) 29) c)

14\) d) 30) b)

15\) c) 31) c)

16\) a) 32) b)