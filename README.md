# Obvod-kruhu-Circle-Circumference-

Definice struktury pro kruh
Naimplementujte strukturu pro reprezentaci kruhu Circle, která reprezentuje kruh. Ten může být reprezentován polohou středu v prostoru (center) a poloměrem (radius).

Střed kruhu definujte jako další strukturu Point2, která obsahuje dva atributy x a y typu float.

Obvod kruhu
Naimplemntujte funkci circle_circumference, která vrátí obvod kruhu podle dobře známého vzorce.

float circle_perimeter( const Circle * self );
Program načte ze standardního vstupu souřadnice polohy středu a poloměru. Na standardní výstup program vytiskne obvod zadaného kruhu spočítaného pomocí funkce circle_circumference. Floatové číslo výsledku zaokrouhlete na dvě desetinná místa.

Pro získání hodnoty čísla π použijte konstantu M_PI z hlavičkového souboru math.h.

Příklad vstupu:

0.0 0.0 1.0
Příklad výstupu:

6.28
HINT: Formátováný floatových čísel se provede ve funkci printf nebo fprintf pomocí formátovacího řetězce %.Xf, kde X je počet desetinných míst za desetinnou čárkou (tečkouv US notaci).
