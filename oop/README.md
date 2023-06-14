# OOP

### pravidla kritéria modularita

- pravidla (můžeme moduly skládat, moduly nezasahují do ničeho jiného - jsou to logické celky pro vlastní účely, jsou zapouzdřené, dělají program škálovatelný)

- public, private, protected a používání veřejných metod pro přístup

volání metody nebo vracení hodnoty skrze vlastní třídu, případně natřidu apod.

třída je abstrakce neboli šablona, která má nějaké datové položky a metody, dle ni se pak tvoří objekt neboli instance a ten už je skutečný objekt v paměti, se kterým může kod nějak pracovat

statická - tvoří se při kompilaci a má nějakou platnost, ničí se po vypršení platnosti a ukládá se do zásobníku. dynamická - tvoří se za běhu programu skrze new a ničí se skrze delete, kdy chceme v kodu, ukládá se do heap
objekt, který je tvořen jinými objekty. dobré pro hierarchické struktury s dobrým zapouzdřením
když potřebujeme mít více způsobů k vytvoření projektů, podle toho, co máme všechno za data nebo požadované parametry nebo když chceme nastavit nějaké parametry volitelné
jsou to specialni metody automaticky generované kompilátorem, pokud nejsou napsané někde v kodu. využivaji se pro automatické inicializování na vychozi hodnoty a automatické čištění paměti / ničení
funkční dekompozice - rozdělení programu na funkce, které dělají své specifické úkony, zodpovědné za určité logiky v programu, založené (BASED??) na modularitě a strukturování, objektová dekompozice - rozděluje program dle objektů, založené na dědění, polymorfismu atd.
třídu můžeme považovat za objekt, pokud máme přesnou definici jejích atributů a metod, které s nimi pracují, a pokud můžeme vytvářet instance této třídy
pokud třída nevyužívá žádné specifické prostředky nebo alokace paměti, může být destruktor zbytečný.
ano, bez konstruktoru by objekt neměl inicializované atributy a mohl by být ve stavu, který nevyhovuje požadovaným podmínkám a bez destruktoru by objekt neuvolnil své prostředky a mohl by způsobit únik paměti nebo jiné problémy.
dědičnost umožňuje mít potomky, co dědí metody a datové položky od rodiče, ale může si je pozměnit. skládání je kompozice - tedy objekt poskládán z více individuálních objektu
třídy v dědičnosti vystupují v různých rolích: základní (rodičovská) třída (dědí se od ní) a odvozená (potomkovská) třída (dědí a upravuje funkcionalitu základní třídy)
v dědičnosti se dědí atributy a metody základní třídy až na ty soukromé
Liskovův substituční princip - potomci mohou v kodu nahradit svou nadtridu beze změny chování programu
nejdříve konstruktor základní třídy, pak konstruktory předků až po kořenovou třídu a nakonec konstruktor odvozené třídy
se vytváří hierarchie tříd, kde obecnější třída představuje celkový koncept a specializovanější třídy reprezentují specifické varianty nebo rozšíření tohoto konceptu (správně třeba nadtřída "tvar" a pak specializované třídy Kruh, Čtverec apod. NE NAOPAK!! to je špatně (blé)
a) definování více funkcí se stejným názvem, ale s různými parametry - kompilátor zašéfí správné volání. b) přetížení operátorů, např pro + uděláš další funkcionalitu pro sčítání vektorů (Vector operator+(const druhe) return Vector (u + druhe.u, v + druhe.v).c) přetížení konstruktorů, víc způsobu jak vytvořit objekt s jinými parametry
public - přístup odkudkoliv z kodu, private - pouze přístup zevnitř třídy a skrze veřejné metody, protected - pouze přístup zevnitř třídy a z podtříd
časná - v době kompilace se pošéfí podle datového typu či parametrů, jakou metodu volat. pozdní - v době běhu na základě typu objektu
metoda v abstraktní třídě, která má nulové tělo (teda doslova jenom = 0), nemá implementaci a musí se udělat implementace v odvozených třídách
třída, která má aspon jednu čistě virtuální metodu, nemůžeme tvořit její instance
třída dědí z více tříd
když mají základní třídy stejné názvy metod / položek
možné použít pokud není konflikt se jmény a atributy mají actually jiné vlastnosti
problémy - duplikované funkce a konflikty
generičnost - můžeme udělat funkce nebo algoritmy, do kterých můžeme strčit jakékoliv datové typy
když potřebujeme obecný kod k používání více datových typů využíváme pro znovupoužitelnost a efektivitu
