# Fundamentos de C++

## 📌 Introdução

Este documento cobre os fundamentos essenciais da linguagem C++, baseado nas atividades práticas do curso DevSuperior.

---

## 1. Primeiro Passo em C++

### O que é C++?
C++ é uma linguagem de programação compilada, estaticamente tipada e multiparadigma que estende a linguagem C com suporte a programação orientada a objetos.

### Estrutura Básica de um Programa
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

**Componentes principais:**
- `#include <iostream>` - Biblioteca padrão para entrada/saída
- `using namespace std;` - Uso do namespace padrão
- `int main()` - Função principal do programa
- `cout` - Objeto para saída de dados
- `endl` - Quebra de linha
- `return 0;` - Retorno de sucesso do programa

---

## 2. Variáveis e Tipos de Dados

### Tipos de Dados Primitivos

| Tipo | Tamanho | Intervalo | Exemplo |
|------|---------|-----------|---------|
| `int` | 4 bytes | -2.1 bi a 2.1 bi | `int idade = 20;` |
| `double` | 8 bytes | números reais | `double salario = 5800.5;` |
| `char` | 1 byte | um caractere | `char genero = 'F';` |
| `string` | variável | texto | `string nome = "Maria Silva";` |
| `bool` | 1 byte | true/false | `bool ativo = true;` |

### Declaração e Inicialização
```cpp
int idade = 20;
double altura = 1.63;
char genero = 'F';
string nome = "Maria Silva";
```

### Modificadores de Tipo
- `unsigned` - Apenas valores positivos
- `short` - Inteiro pequeno (2 bytes)
- `long` - Inteiro grande (8 bytes)
- `const` - Valor constante

**Exemplo:**
```cpp
const int LIMITE = 100;
unsigned int contador = 0;
```

---

## 3. Entrada e Saída de Dados

### Saída de Dados (Output)
```cpp
cout << "Texto simples" << endl;
cout << "Idade: " << idade << endl;
```

### Formatação de Saída
```cpp
#include <iomanip>

cout << fixed << setprecision(2); // 2 casas decimais
cout << "Salário: R$ " << salario << endl;
```

### Entrada de Dados (Input)
```cpp
int numero;
cout << "Digite um número: ";
cin >> numero;

string nome;
cout << "Digite seu nome: ";
cin >> nome;
```

### Leitura de Strings com Espaços
```cpp
string frase;
getline(cin, frase); // Lê a linha inteira
```

---

## 4. Operadores

### Operadores Aritméticos
| Operador | Descrição | Exemplo |
|----------|-----------|---------|
| `+` | Adição | `a + b` |
| `-` | Subtração | `a - b` |
| `*` | Multiplicação | `a * b` |
| `/` | Divisão | `a / b` |
| `%` | Módulo (resto) | `a % b` |

### Operadores de Comparação
| Operador | Significado |
|----------|------------|
| `==` | Igual a |
| `!=` | Diferente de |
| `>` | Maior que |
| `<` | Menor que |
| `>=` | Maior ou igual |
| `<=` | Menor ou igual |

### Operadores Lógicos
| Operador | Significado | Exemplo |
|----------|------------|---------|
| `&&` | E (AND) | `(a > 0) && (b > 0)` |
| `\|\|` | OU (OR) | `(a == 0) \|\| (b == 0)` |
| `!` | NÃO (NOT) | `!(a > 10)` |

### Operadores de Atribuição
```cpp
a = 5;      // Atribuição simples
a += 3;     // a = a + 3
a -= 2;     // a = a - 2
a *= 2;     // a = a * 2
a /= 4;     // a = a / 4
```

---

## 5. Estrutura de Controle

### Condicional if-else
```cpp
if (condicao) {
    // Bloco executado se verdadeiro
} else if (outra_condicao) {
    // Bloco executado se outra condição for verdadeira
} else {
    // Bloco executado se nenhuma condição anterior for verdadeira
}
```

**Exemplo:**
```cpp
if (idade >= 18) {
    cout << "Maior de idade" << endl;
} else {
    cout << "Menor de idade" << endl;
}
```

### Condicional switch-case
```cpp
int opcao;
cin >> opcao;

switch(opcao) {
    case 1:
        cout << "Opção 1" << endl;
        break;
    case 2:
        cout << "Opção 2" << endl;
        break;
    default:
        cout << "Opção inválida" << endl;
}
```

### Loop while
```cpp
int x = 0, soma = 0;

while (x != 0) {
    soma = soma + x;
    cout << "Digite outro número: ";
    cin >> x;
}

cout << "Soma = " << soma;
```

### Loop for
```cpp
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

### Loop do-while
```cpp
int numero;

do {
    cout << "Digite um número (0 para sair): ";
    cin >> numero;
} while (numero != 0);
```

### Controle de Fluxo
- `break;` - Interrompe o loop
- `continue;` - Pula para a próxima iteração
- `return;` - Retorna da função

---

## 6. Arrays (Vetores)

### Declaração e Inicialização
```cpp
int notas[5];                    // Array de 5 inteiros
double precos[10] = {1.5, 2.3}; // Array com valores iniciais
string nomes[3] = {"Ana", "Bob", "Carlos"};
```

### Acesso aos Elementos
```cpp
notas[0] = 85;
cout << notas[0] << endl;
```

### Percurso com Loop
```cpp
int n = 5;
double vet[n];

for (int i = 0; i < n; i++) {
    cout << "Digite um número: ";
    cin >> vet[i];
}

// Exibindo valores
cout << fixed << setprecision(1);
for (int i = 0; i < n; i++) {
    cout << vet[i] << endl;
}
```

---

## 7. Matrizes

### Declaração
```cpp
int matriz[3][3];           // Matriz 3x3
double dados[2][4];         // Matriz 2x4
```

### Inicialização
```cpp
int matriz[2][2] = {
    {1, 2},
    {3, 4}
};
```

### Acesso e Modificação
```cpp
matriz[0][1] = 10;
cout << matriz[0][1] << endl;
```

### Percurso com Loop Aninhado
```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matriz[i][j] << " ";
    }
    cout << endl;
}
```

---

## 8. Funções

### Declaração de Função
```cpp
// Prototipo
int somar(int a, int b);

// Implementação
int somar(int a, int b) {
    return a + b;
}

// Uso
int resultado = somar(5, 3);
cout << resultado << endl;  // Saída: 8
```

### Tipos de Retorno
- `void` - Nenhum retorno
- `int`, `double`, `string` - Retorna valores específicos

### Parâmetros
```cpp
// Parâmetro por valor
void alterarValor(int x) {
    x = 100;  // Não afeta a variável original
}

// Parâmetro por referência
void alterarValor(int &x) {
    x = 100;  // Afeta a variável original
}
```

---

## 9. Casting (Conversão de Tipos)

### Conversão Implícita
```cpp
int a = 5;
double b = a;  // 5 é convertido para 5.0
```

### Conversão Explícita
```cpp
double salario = 5800.5;
int salario_inteiro = (int)salario;  // Cast em C

int valor = static_cast<int>(3.7);   // Cast em C++
```

### Formatação com Precision
```cpp
double numero = 3.14159;
cout << fixed << setprecision(2) << numero;  // Saída: 3.14
```

---

## 10. Boas Práticas

✅ **Faça:**
- Use nomes significativos para variáveis
- Comente seu código
- Use indentação consistente
- Valide entradas do usuário
- Use const para valores que não mudam

❌ **Evite:**
- Variáveis com nomes genéricos (x, y, z)
- Magic numbers - sempre use constantes
- Código não indentado
- Sem tratamento de erros
- Variáveis globais desnecessárias

---

## 📚 Resumo Rápido

| Conceito | Sintaxe |
|----------|---------|
| Saída | `cout << valor << endl;` |
| Entrada | `cin >> variavel;` |
| Condicional | `if (cond) { } else { }` |
| Loop for | `for (int i = 0; i < n; i++)` |
| Loop while | `while (condicao) { }` |
| Array | `tipo nome[tamanho];` |
| Função | `tipo nome(parametros) { }` |
| Casting | `(tipo)valor` |

---

**Última atualização:** Janeiro de 2026
