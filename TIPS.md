# DICAS DE COISAS

### DIVISÕES E RESTOS

Como regra matemática qualquer número divido por 10 irá resultar em um decimal. Para calcular o resto numa calculadora científica devemos pegar o resultado da divisão substituindo o número antes da vírgula por zero e multiplicando esse valor por 10.
[Vídeo explicando melhor](https://www.youtube.com/watch?v=oG5yMRBVysc)

```c
divisao = (1 / 10);
divisao = 0.1;
resto = (0.1 * 10);
resto = 1;
/*------------------*/
ou
/*------------------*/
resto = (1 % 10);
resto = 1;
```

```c
divisao = ((-123 / 10) * -1);
divisao = 12,3;
resto = (0.3 * 10);
resto = 3;
/*------------------*/
ou
/*------------------*/
resto = ((-123 % 10) * -1)
resto = 3;
```

### HEXADECIMAL ~~FOR NOOBS~~

Hexadecimal é um estilo de contagem onde se utiliza uma base 16, ou seja, existem 16 variações antes de alterarmos algo, por exemplo, aprendemos na escola a contar em decimal, ou seja, em base 10, ou seja, aprendemos a escrever 10 variações antes de repeti-las: 

`(0, 1, 2,... 9, depois disso repetimos o 0, porém com o valor 1 antes dele, formando assim 10, 11, 12...)`

Considerando a base 10 da escola teremos números de 00 a 09, na base 16 teremos então mais 6 variações, essas representadas pelas letras "A, B, C, D, E, F", então quando chegamos a "0F" teremos o valor de 15 e depois voltamos para "10" com o valor de 16, para comparação:

`(9 = 09, 10 = 0A, 11 = 0B, 12 = 0C, 13 = 0D, 14 = 0E, 15 = 0F e 16 = 10) 10 = 16 porque iniciamos no 0.`

Se continuarmos seguindo o padrão hexadecimal terá:

`(18, 19, 1A, 1B… 7E, 7F, 80, 81...)`

Então quando dizemos que queremos o 13º valor em hexadecimal, estamos pedindo por "0D".
Você pode facilmente encontrar exemplos de grandes números hexadecimais num seletor de cores.

### RAIZ DIGITAL
**_NINE NINE NINE_**

Raiz digital é uma forma de reduzir uma grande quantidade algorismos para sua "raiz", tudo que você tem que fazer é somar todos os algorismos até restar apenas 1.

`(0123456789 = 0+1+2+3+4+5+6+7+8+9 = 45 = 4+5 = 9)`

Bem simples né? espera até você ter que somar um googol de número aleatórios.
