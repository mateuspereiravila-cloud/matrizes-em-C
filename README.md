# Construtor de Matrizes em C

Este é um programa desenvolvido em linguagem C que permite criar, preencher e visualizar matrizes dinâmicas diretamente no terminal.

## 🚀 Como funciona

1. **Definição de Dimensões:** O usuário informa a quantidade de linhas e colunas desejadas.
2. **Preenchimento:** O programa solicita a inserção manual do valor para cada posição `[linha][coluna]`.
3. **Exibição:** A matriz final é exibida na tela formatada em blocos visualmente organizados.

## 🛠️ Detalhamento do Código

* **`#include <stdio.h>`:** Biblioteca padrão utilizada para manipulação de entradas (`scanf`) e saídas (`printf`).
* **Matriz com VLA (*Variable Length Array*):** A matriz `mat[l][c]` ajusta seu tamanho em tempo de execução de acordo com o que o usuário digita.
* **Laços Encadeados (`for`):** Utiliza dois loops sobrepostos para iterar sobre as linhas e colunas tanto no preenchimento quanto na exibição.
* **Formatador de Saída:** Utiliza a variável auxiliar `k` e o operador de resto `%` para realizar quebras de linha (`\n`) automáticas na impressão visual.

---
*Código desenvolvido por Mateus Ávila.*
