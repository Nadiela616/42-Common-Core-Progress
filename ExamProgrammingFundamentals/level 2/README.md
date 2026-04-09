*level 2*



Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

Si funksionon strcmp


Krahason dy string-e karakter për karakter.

Rregulli
nëse janë të njëjta → kthen 0
nëse s1 > s2 → kthen pozitiv
nëse s1 < s2 → kthen negativ





Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

shpjegim:
Që:

përmbys string-un (reverse)
e bën in-place (në të njëjtin string, pa krijuar një tjetër)
kthen pointer-in str

hello → olleh
abc → cba
42 → 24







Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$






Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>


testim:
gcc union.c -o union

./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj"


shpegim:
Ah, ky është programi union.c, që është si inter.c por pak më ndryshe:

inter: shfaq karakteret që ndodhen në të dy string-et.
union: shfaq karakteret që ndodhen në të paktën një nga string-et, pa përsëritje.







Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$

shpjegim:
Ky program ka logjikën:

Merr dy argumente:
Një fjale të madhe (string1)
Një fjale që duam të shohim në radhë (string2)
Programi duhet të shfaqë string2 nëse të gjithë karakteret e saj shfaqen në të njëjtin rend në string1, pa i ndryshuar renditjen.
Nëse nuk gjendet si radhë, nuk shfaq asgjë (vetëm \n).

testim:
gcc wdmatch.c -o wdmatch
./wdmatch "abpcdefghijklmnopqrstuvwxyz" "abc"








Assignment name: ft_atoi

Expected files: ft_atoi.c
Allowed functions: none (vetëm write për testim, nëse do)
_________________________________________________________________________________________
Detyrimi

Shkruaj një funksion:

int ft_atoi(const char *str);
Ai konverton një string në numër të plotë (int).
Ignoron hapësirat dhe tab-et në fillim.
Lexon shenjën + ose - në fillim.
Lexon të gjitha shifrat radhazi dhe ndalon tek karakteri i parë që nuk është shifër.
Kthen numrin final, me shenjën e duhur.
Rregullat
Nuk përdorim stdlib.h (pra nuk përdorim atoi)
Vetëm operacione të thjeshta me char dhe int
Nëse string nuk përmban shifra → kthen 0
Shembuj përdorimi
$> ./ft_atoi "42"
42

$> ./ft_atoi "   -42"
-42

$> ./ft_atoi "+123"
123

$> ./ft_atoi "   007"
7

$> ./ft_atoi("abc123")
0

$> ./ft_atoi("-0")
0


testim:


gcc ft_atoi.c -o ft_atoi
./ft_atoi "42"
# Output: 42

./ft_atoi "   -42"
# Output: -42

./ft_atoi "+123"
# Output: 123

./ft_atoi "   007"
# Output: 7

./ft_atoi "abc123"
# Output: 0


