# Introduction to the Design and Analysis of Algorithms - Levitin

## Úvod

- **Algoritmus:** Postup krok za krokem pro řešení problému, obvykle vyjádřený v programovacím jazyce.
- **Složitost:** Množství zdrojů (času, paměti) potřebných k provedení algoritmu jako funkce velikosti vstupu.
- **Efektivita:** Míra tohoq kolik zdrojů algoritmus používá vzhledem k velikosti vstupu.
- **Asymptotická analýza:** Způsob charakterizace chování algoritmu při růstu velikosti vstupu na nekonečno.
- **Analýza nejhoršího případu:** Analýza, která určuje maximální množství zdrojů, které může algoritmus spotřebovat pro jakýkoli vstup dané velikosti.
- **Analýza průměrného případu:** Analýza, která určuje očekávané množství zdrojů, které může algoritmus spotřebovat pro náhodný vstup dané velikosti.
- **Analýza nejlepšího případu:** Analýza, která určuje minimální množství zdrojů, které může algoritmus spotřebovat pro jakýkoli vstup dané velikosti.

## Analýza algoritmů

- Abychom mohli určit efektivitu algoritmu, potřebujeme znát jeho složitost.
- Síla algoritmu spočívá v jeho schopnosti řešit problémy pro velké vstupy.
- Složitost algoritmu se obvykle měří pomocí asymptotické notace, jako jsou velké O, Omega a Theta.
- Notace velké O určuje horní mez složitosti algoritmu, tzn. nejvíce zdrojů, které může algoritmus použít pro vstup dané velikosti.
- Notace Omega určuje dolní mez složitosti algoritmu, tzn. nejméně zdrojů, které může algoritmus použít pro vstup dané velikosti.
- Notace Theta určuje přesnou složitost algoritmu, pokud horní a dolní mez jsou stejné.
- Vyhodnocení složitosti algoritmu může být provedeno pomocí postupného odhadu, matematické analýzy nebo experimentálního testování.
- Nejhorší případ vstupu poskytuje horní mez pro složitost algoritmu.
- Průměrná složitost algoritmu se vypočítá jako průměr složitosti přes všechny možné vstupy.
- Nejlepší případ vstupu poskytuje dolní mez pro složitost algoritmu.
- Složitost se může lišit pro různé implementace stejného algoritmu nebo pro různé modely výpočtu.

## Algoritmické strategie

- Algoritmické strategie jsou přístupy k návrhu algoritmů, které řeší určitý typ problémů.
- Klasifikace algoritmických strategií zahrnuje například hladový algoritmus, rozděl a panuj, dynamické programování, větvící se a omezující podmínky (backtracking), a algoritmus prohledávání (např. do hloubky a do šířky).
- Hladový algoritmus se snaží řešit problém postupným výběrem nejlepšího řešení v každém kroku.
- Rozděl a panuj je strategie, která rozdělí problém na menší části, řeší každou část zvlášť a poté kombinuje výsledky.
- Dynamické programování řeší problémy rozdělením na menší podproblémy a ukládáním výsledků podproblémů k pozdějšímu použití.
- Backtracking (větvící se a omezující podmínky) systematicky prohledává všechny možnosti řešení a vrací se k předchozím krokům, pokud není možné najít platné řešení.
- Algoritmus prohledávání hledá řešení v grafu prohledáváním všech možností.
- Každá strategie má své výhody a nevýhody a může být vhodná pro určitý typ problémů.
- Návrh algoritmu je obvykle iterativní proces, který zahrnuje testování, zlepšování a opakované testování.

## Úpravy algoritmů

- Úpravy algoritmů jsou techniky pro vylepšení efektivity algoritmů.
- Mezi úpravy patří například eliminace zbytečných operací, zjednodušení výpočtu, zlepšení použití paměti, zvýšení rychlosti a optimalizace návrhu algoritmu pro určitý typ problému.
- Eliminace zbytečných operací zahrnuje například vynechání kroků, které nepřispívají k řešení problému, nebo úpravu algoritmu tak, aby opakované kroky byly provedeny pouze jednou.
- Zjednodušení výpočtu zahrnuje například nahrazení složitých výpočtů jednoduššími nebo použití heuristik pro rychlejší nalezení řešení.
- Zlepšení použití paměti může být dosaženo například omezením počtu proměnných nebo použitím efektivnějšího způsobu ukládání dat.
- Zvýšení rychlosti může být dosaženo například použitím optimalizovaného kódu, paralelního zpracování nebo rozdělením algoritmu na menší kroky, které lze provést souběžně.
- Optimalizace návrhu algoritmu pro určitý typ problému zahrnuje například použití algoritmických strategií, které jsou vhodné pro daný typ problému, nebo přizpůsobení algoritmu specifickým požadavkům vstupu a výstupu.
- Úpravy algoritmů mohou výrazně zlepšit výkon algoritmu a často jsou nezbytné pro řešení složitých problémů.

## Rekurze

- Rekurze je technika programování, která umožňuje vyřešit složité problémy rozdělením na menší části a opakováním téhož procesu pro každou z těchto částí.
- Rekurzivní funkce je funkce, která volá sama sebe s menšími vstupy, dokud není dosaženo určitého základního případu.
- Každá rekurzivní funkce musí mít základní případ, který ukončí opakované volání funkce a vrátí konečný výsledek.
- Rekurzivní funkce mohou být implementovány pomocí cyklů, ale cykly nemusí být vždy nejvhodnější řešení.
- Rekurze může být použita k řešení mnoha typů problémů, včetně matematických výpočtů, řešení hledání cesty v grafu nebo stromu, nebo kódování a dekódování dat.
- Při návrhu rekurzivní funkce je třeba dbát na to, aby byla účinná a správně ukončena v případě, že bude volána s nevhodným vstupem.
- Rekurze může být náročná na paměť, protože každá volání funkce vyžaduje vytvoření nového rámce zásobníku.
- Efektivita rekurze může být zlepšena pomocí technik jako je například koncová rekurze, paměťová optimalizace nebo použití iteračních metod namísto rekurze.
- Rekurze může být také užitečná pro výuku programování a pro modelování problémů v reálném světě.

## Úpravy a heuristiky algoritmů

- Úpravy algoritmů jsou techniky, které se používají k vylepšení výkonu existujících algoritmů.
- Tyto techniky mohou být použity k úpravě časové složitosti, prostorové složitosti nebo obou.
- Některé z nejčastěji používaných úprav algoritmů zahrnují změny v algoritmické struktuře, použití paměťových optimalizací nebo použití heuristik pro zjednodušení problému.
- Heuristiky jsou techniky, které se používají k nalezení rychlejších řešení pro složité problémy, aniž by byla zaručena dokonalá přesnost.
- Heuristiky mohou být použity k optimalizaci algoritmů v situacích, kdy dokonalé řešení je příliš náročné na výpočetní čas nebo prostor.
- Některé z nejčastěji používaných heuristik zahrnují hladový algoritmus, náhodné prohledávání a simulované ochlazování.
- Hladový algoritmus je technika, která se používá k nalezení optimálního řešení tím, že postupně vybírá nejlepší možnost v každém kroku algoritmu.
- Náhodné prohledávání je technika, která se používá k nalezení řešení prostřednictvím náhodného prohledávání prostoru řešení.
- Simulované ochlazování je technika, která se používá k nalezení řešení využitím principů termodinamiky, které umožňují vyhnout se uváznutí v lokálním optimu a přijít k celkově lepšímu řešení.
- Úpravy a heuristiky jsou důležité nástroje při návrhu a analýze algoritmů, protože mohou pomoci zlepšit výkon existujících algoritmů a řešit složité problémy rychleji a efektivněji.

##  Metody řešení rekurzivních algoritmů

- Rekurzivní algoritmy jsou algoritmy, které se skládají z volání sami sebe, aby řešily podproblémy.
- Tyto algoritmy jsou často používány k řešení složitých problémů, jako je například třídění nebo vyhledávání.
- Metody řešení rekurzivních algoritmů zahrnují použití matematické indukce, dokazování korektnosti a analýzu složitosti.
- Matematická indukce je matematická technika, která se používá k dokazování tvrzení pro všechna přirozená čísla.
- Tato technika se používá také k dokazování korektnosti rekurzivních algoritmů, které jsou navrženy tak, aby se v každém kroku postupně přibližovaly k řešení celého problému.
- Dokazování korektnosti je proces, při kterém se ověřuje, zda algoritmus vždy vrátí správný výsledek pro vstupní data.
- Analýza složitosti je proces, který se používá k určení časové a prostorové složitosti algoritmu.
- Při analýze složitosti se obvykle používají matematické techniky, jako je například O-notace, která umožňuje určit asymptotickou složitost algoritmu pro různě velká vstupní data.
- Metody řešení rekurzivních algoritmů jsou důležité nástroje při návrhu a analýze algoritmů, protože rekurzivní algoritmy jsou často používány k řešení složitých problémů.

## Algoritmy pro grafové problémy

- Grafové problémy jsou problémy, které se týkají grafových struktur, jako jsou grafy, stromy, síťové grafy a další.
- Tyto problémy jsou často používány k řešení různých praktických problémů, jako jsou například plánování dopravy, návrh sítí, hledání cest v počítačových sítích a další.
- Existuje mnoho algoritmů pro řešení grafových problémů, jako jsou například algoritmy pro prohledávání grafů, algoritmy pro nalezení nejkratších cest a algoritmy pro hledání minimální kostry grafu.
- Algoritmy pro prohledávání grafů zahrnují hloubkové prohledávání a šířkové prohledávání, které jsou používány k prohledání všech vrcholů a hran v grafu.
- Algoritmy pro nalezení nejkratších cest jsou používány k nalezení nejkratších cest mezi dvěma vrcholy v grafu. Mezi takové algoritmy patří Dijkstrův algoritmus, Bellman-Fordův algoritmus a Floyd-Warshallův algoritmus.
- Algoritmy pro hledání minimální kostry grafu jsou používány k nalezení minimálního stromu pokrývajícího všechny vrcholy v grafu. Mezi takové algoritmy patří Kruskalův algoritmus a Primův algoritmus.
- Tyto algoritmy jsou často používány v různých oblastech, jako je například informatika, doprava, elektrotechnika a další.

## Algoritmy pro kombinatorické problémy

- Kombinatorické problémy jsou problémy, které se týkají kombinatorických struktur, jako jsou permutace, kombinace, variace a další.
- Tyto problémy jsou často používány k řešení různých praktických problémů, jako jsou například plánování turnajů, rozvrhování práce, řešení logických hádanek a další.
- Existuje mnoho algoritmů pro řešení kombinatorických problémů, jako jsou například algoritmy pro generování permutací, algoritmy pro generování kombinací a algoritmy pro řešení problému obchodního cestujícího.
- Algoritmy pro generování permutací jsou používány k nalezení všech možných uspořádání prvků v dané množině. Mezi takové algoritmy patří Heapův algoritmus, Steinhaus-Johnson-Trotterův algoritmus a další.
- Algoritmy pro generování kombinací jsou používány k nalezení všech možných kombinací prvků v dané množině. Mezi takové algoritmy patří algoritmus kombinačního generování a další.
- Algoritmy pro řešení problému obchodního cestujícího jsou používány k nalezení nejkratší cesty, která prochází všemi městy a vrátí se zpět do výchozího bodu. Mezi takové algoritmy patří Held-Karpův algoritmus, nejbližší sousedův algoritmus a další.
- Tyto algoritmy jsou často používány v různých oblastech, jako je například informatika, matematika, logika a další.

## Algoritmy pro grafovou teorii

- Grafy jsou matematické struktury, které se skládají z uzlů (vrcholů) a hran, které propojují tyto uzly.
- Grafová teorie se zabývá studiem vlastností grafů a různých problémů, které s nimi souvisejí, jako je hledání nejkratších cest, prohledávání grafů, barevnost grafů a další.
- Existuje mnoho algoritmů pro řešení problémů v grafových teoriích, jako jsou algoritmy pro hledání nejkratší cesty, prohledávání grafu a další.
- Mezi algoritmy pro hledání nejkratších cest v grafu patří Dijkstrův algoritmus, algoritmus Bellman-Ford a algoritmus Floyd-Warshall. Tyto algoritmy jsou používány k nalezení nejkratší cesty mezi dvěma body v grafu.
- Mezi algoritmy pro prohledávání grafu patří algoritmus prohledávání do hloubky (DFS) a algoritmus prohledávání do šířky (BFS). Tyto algoritmy jsou používány k nalezení všech uzlů v grafu, které jsou dosažitelné z určitého výchozího uzlu.
- Algoritmy pro barevnost grafu jsou používány k nalezení nejmenšího počtu barev, které jsou potřebné k obarvení uzlů grafu tak, aby žádné dva sousední uzly neměly stejnou barvu. Mezi takové algoritmy patří Greedy algoritmus a algoritmus založený na zpětném odstraňování.
- Tyto algoritmy jsou často používány v různých oblastech, jako je například informatika, matematika, síťové technologie a další.

## NP-úplné problémy a aproximační algoritmy

- NP-úplné problémy jsou takové problémy, u kterých nelze v polynomiálním čase rozhodnout, zda pro ně existuje řešení nebo ne. Přestože lze řešení ověřit v polynomiálním čase, nalezení řešení pro takové problémy může trvat výrazně déle.
- Mezi NP-úplné problémy patří například problém obchodního cestujícího, problém batohu a další.
- Problémy NP-úplné jsou obvykle řešeny pomocí aproximačních algoritmů, které poskytují řešení, které není optimální, ale přesto se blíží optimálnímu řešení.
- Mezi aproximační algoritmy patří například Greedy algoritmus, který postupuje v každém kroku tak, aby maximalizoval okamžitý zisk, a algoritmus založený na lineárním programování, který řeší optimalizační problém pomocí lineárních nerovnic a rovnic.
- Aproximační algoritmy jsou často používány v situacích, kdy je třeba nalézt řešení problému v polynomiálním čase a optimální řešení není nutné.
- Existují také heuristické algoritmy, které poskytují rychlá řešení pro NP-úplné problémy, ale není garantována kvalita výsledku. Mezi heuristické algoritmy patří například simulované ochlazování a genetické algoritmy.
- Aproximační algoritmy a heuristické algoritmy jsou často používány v praxi, kde je třeba řešit NP-úplné problémy, jako je například optimalizace trasy pro rozvoz zásilek nebo plánování výroby.

## Paralelní algoritmy

- Paralelní algoritmy jsou algoritmy, které provádějí výpočet současně na více procesorech.
- Paralelní výpočty mohou být výrazně rychlejší než sekvenční výpočty, zejména u problémů, které lze rozdělit na menší úlohy a tyto úlohy lze provádět současně.
- Paralelní algoritmy se liší od sekvenčních algoritmů v tom, že musí být navrženy tak, aby byly efektivní při paralelním výpočtu.
- Mezi paralelní algoritmy patří například algoritmus map-reduce, který se často používá pro zpracování velkých datových souborů a distribuované výpočty.
- Paralelní algoritmy lze implementovat na různých úrovních, od paralelního zpracování dat v paměti až po paralelní zpracování na úrovni procesů a vláken.
- Pro paralelní algoritmy je důležité správné řízení přístupu k sdíleným zdrojům, jako jsou například paměťové jednotky a periferní zařízení.
- Existují také problémy, které nejsou vhodné pro paralelní výpočty, například problémy s vysokou závislostí na sekvenci výpočtu.
- Paralelní výpočty jsou důležité pro rychlé zpracování velkých datových souborů, výpočty v oblasti umělé inteligence a strojového učení, výpočty v oblasti fyziky a chemie a další oblasti, kde je třeba provádět výpočty na velkém množství dat současně.

## Aproximační algoritmy

- Aproximační algoritmy jsou algoritmy, které poskytují rychlé řešení pro optimalizační problémy, které nelze řešit v reálném čase.
- Tyto algoritmy poskytují řešení, která jsou blízká optimálnímu řešení a to v kratším čase než by bylo potřeba pro nalezení skutečného optimálního řešení.
- Cílem aproximačních algoritmů je minimalizovat chybu aproximace, tedy rozdíl mezi řešením aproximovaným a optimálním řešením.
- Jedním z příkladů aproximačních algoritmů je algoritmus pro obchodního cestujícího, který hledá nejkratší cestu pro návštěvu několika měst. Optimální řešení tohoto problému lze nalézt pouze pomocí exaktních algoritmů, které jsou příliš pomalé pro velká množství měst. Aproximační algoritmy poskytují rychlé řešení, které se blíží optimálnímu řešení, ale nemusí být dokonalá.
- Dalším příkladem aproximačního algoritmu je algoritmus pro hledání maximálního toku v síti. Existují exaktní algoritmy pro tento problém, ale jsou pomalé pro velké sítě. Aproximační algoritmy umožňují rychlejší řešení tohoto problému, ale řešení nemusí být optimální.
- Aproximační algoritmy mají široké uplatnění v oblastech jako jsou optimalizace výrobních procesů, návrh sítí a komunikací, řešení rovnic a mnoha dalších oblastech, kde je třeba nalézt nejlepší řešení v reálném čase.