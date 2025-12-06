# AEDs1-Projetos-Dev-Michele
Implementações de Algoritmos e Estruturas de Dados I em C e C++.

---

## Projeto: Manipulação de Dados de Aluno com Struct (Linguagem C)

### Visão e Objetivo do Projeto
Este projeto demonstra a implementação e o uso básico de uma **Estrutura de Dados (`struct`)** na linguagem **C** para organizar informações relacionadas a um único registro de aluno. Serve como um exercício fundamental na manipulação de **tipos de dados definidos pelo usuário** e o acesso a membros da estrutura.

### Linguagem Utilizada
* **Linguagem de Programação:** C

### Conceitos Chave de Algoritmos e Estrutura de Dados I
* **Estruturas de Dados (Struct):** Definição e uso.
* **Manipulação de Strings:** Uso seguro de `strncpy` e terminador nulo (`\0`).

---

### Conceitos e Funcionalidade
O código ilustra a definição e a utilização de uma `struct` chamada **`Aluno`**, que agrupa diferentes tipos de dados sob um único nome.

* **Definição de struct:** Criação de um tipo de dado personalizado que contém: `nome` (String), `matricula` (`int`), `mensalidade`, `nota1`, `nota2`, e `media` (`float`).
* **Acesso a Membros:** Utilização do **operador ponto (`.`)** para acessar e modificar campos individuais da estrutura.
* **Cálculo Algorítmico Simples:** Implementação do cálculo da média aritmética das duas notas.
* **Segurança de String:** Demonstração do uso de `strncpy` para copiar strings de forma segura, prevenindo potenciais estouros de *buffer*.

---

### Como Executar e Compilar

Este é um código simples em C, que pode ser compilado e executado em qualquer ambiente com o compilador GCC instalado (Code::Blocks, VS Code com MinGW, Terminal Linux, etc.).

1.  Salve o código como `aluno.c`.
2.  Compile o arquivo no seu terminal:
    ```bash
    gcc estruturas-basicas-em-C/aluno.c -o aluno
    ```
3.  Execute o programa:
    ```bash
    ./aluno 
    ```