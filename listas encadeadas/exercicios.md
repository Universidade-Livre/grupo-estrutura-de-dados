# Exercícios sobre o Capítulo 3 (Listas Encadeadas)

**Exercício 1.** Crie uma função chamada `stringify` que aceita uma lista simplesmente encadeada como argumento e retorna sua representação como uma string. A string deve começar no primeiro nó e ser separado por ` -> ` até o último nó que deve ser `NULL`, por exemplo:

```
"1 -> 2 -> 3 -> NULL"
``` 

**Exercício 2.** Crie uma função chamada `swap_nodes` que recebe como argumentos:

- uma lista simplesmente encadeada `list1`;
- um índice `index1`;
- uma lista simplesmente encadeada `list2`;
- um índice `index2`.

A função deve trocar de lugar os nós na posição `index1` de `list1` e na posição posição `index2` de `list2`. Por exemplo, dadas as listas:

```
list1: 1 -> 2 -> 3 -> 4 -> NULL
list2: 3 -> 2 -> 1 -> NULL
```

Após a aplicação de `swap(list1, 3, list2, 1)`, as listas devem ser:

```
list1: 1 -> 2 -> 3 -> 2 -> NULL
list2: 1 -> 4 -> 3 -> NULL
```

A função deve retornar `true` quando a troca foi realizada com sucesso, e `false` caso não seja possível realizar a troca.

**Exercício 3.** Crie uma função que inverte a ordem de uma lista duplamente encadeada. Por exemplo:

```
# Inicialmente, antes da inversão.
1 -> 2 -> 3 -> NULL

# Lista invertida
3 -> 2 -> 1 -> NULL
```

**Exercício 4.** Delete a última ocorrência de um item em uma lista simplesmente encadeada. Crie uma função que recebe como argumento uma lista e uma "chave". Essa função irá buscar se a chave existe na lista e irá deletar a última ocorrência. Por exemplo:

```
# A chave é 1
1 -> 2 -> 3 -> 1 -> 4 -> NULL

# A última ocorrência de 1 foi deletada
1 -> 2 -> 3 -> 4 -> NULL
```

**Exercício 5.** Melhore a implementação do exercício 4: caso a chave não exista na lista, retorne um erro avisando que a chave não existe.

*Fontes:*

- [Exercício 1](https://www.codewars.com/kata/582c297e56373f0426000098)
- [Exercício 2](https://www.codewars.com/kata/58d91d5f024c724b50000300
)
- [Exercício 3](https://www.geeksforgeeks.org/reverse-a-doubly-linked-list/)
- [Exercícios 4 e 5](https://www.geeksforgeeks.org/delete-last-occurrence-of-an-item-from-linked-list/)
