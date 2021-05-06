# STRCMP && STRNCMP

É uma função difícil de trabalhar, pois, no manual a informação sobre o valor de retorno só diz que ele deve ser positivo, 0 ou negativo, a primeira óbvia solução que você vai tentar fazer é:

```c
if (s1[i] > s2[i]){
return (42);
}
if (s1[i] < s2[i]){
return (-42);
}
else{
return (0);
}
```

E tecnicamente falando está certo, mas até hoje não entendo se o valor de retorno esperado é isso ou a diferença de s1 e s2.
Deixei o código que me deu certo, mas caso você não consiga um certo tente mudar para retornar 1, 0 ou -1.
