# Įrėmintas pasisveikinimas
## Programos versijos
- [v0.1](https://github.com/Step1st/1st-Assigment/tree/v0.1)
- [v0.2](https://github.com/Step1st/1st-Assigment/tree/v0.2)
- [v1.0](https://github.com/Step1st/1st-Assigment/tree/v1.0)
##  Programos naudojimas ir veikimo principas
Ši programa atspausdina įrėmintą pasisveikinimą, panašu į vizitinę kortelę, su vartotojo įvestu vardu.
  
Paleidus programą bus paprašyta įvesti vardą. Įvesti vardą galima tik naudojant raides, įvedus kitus simbolius programoje bus pranešta apie klaidą ir bus paprašyta įvesti vardą iš naujo.
```
Enter your name: St3ponas@

Error! Please use only letters
Try to enter your name again: Steponas
```
Įvedus vardą bus paprašyta įvesti rėmelio dydį. Įvesti galima tik skaitmenis, įvedus kitus simbolius programoje bus pranešta apie klaidą ir bus paprašyta rėmelio dydį iš naujo.
```
Enter border size: two

Error! Please enter only digits
Try to enter border size again: 2
```
Įvedus vardą ir rėmelio dydį programoje bus atspausdintas atitinkamai įrėmintas pasisveikinimas.
```
Enter your name: Steponas

Enter border size: 2

************************
*                      *
*                      *
*  Sveikas, Steponas!  *
*                      *
*                      *
************************
```
#  
  Programoje automatiškai pasirenkamas moteriškam arba vyriškam vardui pasisveikinimas. (**veikia tik vardams su lietuviškomis galūnėmis, įvedus vardus su kitomis galūnėmis bus pasirenkamas pasisveikinimas moteriškam vardui**)
```
Enter your name: Griedrė

Enter border size: 1

********************
*                  *
* Sveika, Griedrė! *
*                  *
********************
```
## Įdiegimas
Atsiustą *main.cpp* failą sukompiliuokite C++11 arba naujesniu standartu
