# Exercícios sobre o Capítulo 2 (Listas Baseadas em Array)

**Exercício 1.** Modifique a implementação do *ArrayDeque* de modo que o operador mod (`%`) não seja utilizado. *Dica:* dados dois números inteiros `a` e `b`, se `b` é uma potência de 2, vale a igualdade:

    a % b == a & (b - 1)

(`&` é o operador bitwise-and).

---

**Exercício 2.** Implemente um método `rotate(a, r)` que "gira" o array `a` de modo que `a[i]` seja movido para `a[(i + r) % length(a)]`, para todo `i` de `0` até `length(a)`.

---

**Exercício 3.** Implemente um método `rotate(r)` que "gira" uma *Lista* de modo que o item `i` da lista se torne o item `(i + r) % n` (`n` é o tamanho da lista). Quando executado em um *ArrayDeque* ou *DualArrayDeque*, `rotate(r)` deve ter tempo de execução de $O(1 + \min{r, n - r})$.

---

**Exercício 4.** Meus colegas fazem viagens a trabalho para outro país. Devemos achar o número de dias que nossa companhia é representada em um país. Todo dia em que um ou mais colegas estão presentes no país é um dia em que a companhia é representada. Um dia particular não pode contar como mais de um dia.

Escreva uma função que recebe uma lista de pares e retorna o número de dias em que a companhia esteve representada no outro país. O primeiro número do par é o *dia de chegada* e o segundo número do par é o *dia de partida* de alguém que viajou. Por exemplo, 1 de janeiro é o número `1` e 31 de dezembro é `365`.

*Exemplo:*

```
days_represented([(10, 17), (200, 207)])
```

Retorna 16 porque há duas viagens de 8 dias, que somando dá 16.

---

**Exercício 5.** Defina uma função que remove valores repetidos de um *array* de números não negativos e retorna o array como resultado.

A ordem da sequência deve permanecer a mesma.

*Exemplo:*

```
Input -> Output

[1, 1, 2] -> [1, 2]
[1, 2, 1, 1, 3, 2] -> [1, 2, 3]
```

---

*Fontes:*
- [Exercícios 1 a 3](http://www.araujo.eng.uerj.br/opendata/ods-ptbr-python.pdf)
- [Exercício 4](https://www.codewars.com/kata/58e93b4706db4d24ee000096)
- [Exercício 5](https://www.codewars.com/kata/57a5b0dfcf1fa526bb000118)
