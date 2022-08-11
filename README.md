# math
Conceitos de matemática descritos através da programação, com resolução de questões ou códigos de demonstração.

### Conceitos e códigos referentes
**Número primo**: número natural n tal que n é divisível apenas por 1 e por ele mesmo, ou seja: 

> ```n ∈ ℙ ⇔ n ∈ ℕ ∧ ∀ a < n ∧ a ≠ 1, a ∤ n```
>
> **Desc:** *o número n pertence ao conjunto dos números primos se, e somente se, n for natural e para todo valor a menor que n e diferente de 1, a não divide n).*

O primeiro código demonstra um programa que detecta se um valor é primo ou não;

O segundo código tem um programa que retorna os números primos dentro de um intervalo;
> Códigos: 
> - [main-primos.c](main-primos.c) - C
> - [primesInterval.dart](primesInterval.dart) - Dart

---

**Fatorial**: produto de um valor n por todos os seus antecessores até um, ou seja: ```n! = n × (n-1) × ... × 2 × 1```.
> Código: [fatorial.py](fatorial.py) - Python
