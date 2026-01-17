# Conceitos Avançados de C++

## 📌 Introdução

Este documento aborda conceitos importantes e padrões aplicados em desenvolvimento C++, baseado nas soluções de problemas do curso DevSuperior.

---

## 1. Processamento de Dados e Casting

### Conversão de Tipos (Type Casting)

**Conversão Implícita:**
```cpp
int numero = 5;
double resultado = numero / 2.0;  // 2.5 (conversão automática)
```

**Conversão Explícita:**
```cpp
double altura = 1.75;
int altura_int = (int)altura;  // 1 (truncamento)

// Método moderno C++
int valor = static_cast<int>(3.99);  // 3
```

### Processamento com Precisão Decimal
```cpp
#include <iomanip>

double salario = 5800.5;
cout << fixed << setprecision(2) << salario;  // 5800.50
```

### Aplicação Prática
```cpp
// Converter entrada de string para número
string entrada;
cin >> entrada;
int numero = stoi(entrada);          // string para int
double valor = stod(entrada);        // string para double
```

---

## 2. Estruturas de Repetição Avançadas

### Validação com Loop
```cpp
int opcao;
do {
    cout << "Escolha uma opção (1-5): ";
    cin >> opcao;
    if (opcao < 1 || opcao > 5) {
        cout << "Opção inválida! Tente novamente." << endl;
    }
} while (opcao < 1 || opcao > 5);
```

### Processamento Acumulativo
```cpp
int soma = 0, numero;

cout << "Digite números (0 para encerrar): ";
cin >> numero;

while (numero != 0) {
    soma += numero;
    cout << "Digite outro número: ";
    cin >> numero;
}

cout << "Soma total: " << soma << endl;
```

### Contagem com Condições
```cpp
int negros = 0, pares = 0, soma = 0;

for (int i = 0; i < n; i++) {
    if (matriz[i][i] < 0) negros++;
    if (matriz[i][i] % 2 == 0) pares++;
    soma += matriz[i][i];
}
```

---

## 3. Arrays e Busca

### Busca Linear
```cpp
int procurar(int vet[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        if (vet[i] == alvo) {
            return i;  // Encontrado na posição i
        }
    }
    return -1;  // Não encontrado
}
```

### Busca do Mínimo e Máximo
```cpp
double encontrarMaior(double vet[], int n) {
    double maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

double encontrarMenor(double vet[], int n) {
    double menor = vet[0];
    int posicao = 0;
    
    for (int i = 1; i < n; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
            posicao = i;
        }
    }
    return menor;  // ou return posicao;
}
```

### Filtro de Valores
```cpp
// Contar elementos que satisfazem condição
int contadorPares = 0;
for (int i = 0; i < n; i++) {
    if (vet[i] % 2 == 0) {
        contadorPares++;
    }
}

// Encontrar média de valores maiores que X
double soma = 0;
int count = 0;
for (int i = 0; i < n; i++) {
    if (vet[i] > x) {
        soma += vet[i];
        count++;
    }
}
double media = (count > 0) ? soma / count : 0;
```

---

## 4. Matrizes - Operações Comuns

### Leitura Dimensionada
```cpp
int m, n;
cout << "Linhas e colunas: ";
cin >> m >> n;

int matriz[m][n];

for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cin >> matriz[i][j];
    }
}
```

### Diagonal Principal
```cpp
cout << "Diagonal: ";
for (int i = 0; i < n; i++) {
    cout << matriz[i][i] << " ";
}
```

### Diagonal Secundária
```cpp
cout << "Diagonal secundária: ";
for (int i = 0; i < n; i++) {
    cout << matriz[i][n-1-i] << " ";
}
```

### Elementos Negativos
```cpp
// Contar negativos
int negativ = 0;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (matriz[i][j] < 0) {
            negativ++;
        }
    }
}

// Exibir negativos
cout << "Negativos:" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (matriz[i][j] < 0) {
            cout << "Posição [" << i << "," << j << "]: " 
                 << matriz[i][j] << endl;
        }
    }
}
```

### Transposição de Matriz
```cpp
double transposta[n][m];

for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        transposta[j][i] = matriz[i][j];
    }
}
```

---

## 5. Problemas Comuns e Soluções

### Problema: Encontrar o Menor de Três Números

**Abordagem 1 - if-else:**
```cpp
double a, b, c;
cin >> a >> b >> c;

double menor = a;
if (b < menor) menor = b;
if (c < menor) menor = c;

cout << menor << endl;
```

**Abordagem 2 - Operador Ternário:**
```cpp
double menor = (a < b) ? a : b;
menor = (menor < c) ? menor : c;
cout << menor << endl;
```

### Problema: Retângulo

```cpp
double base, altura;
cout << "Base e altura: ";
cin >> base >> altura;

double area = base * altura;
double perimetro = 2 * (base + altura);

cout << fixed << setprecision(2);
cout << "Área: " << area << endl;
cout << "Perímetro: " << perimetro << endl;
```

### Problema: Soma de Ímpares Consecutivos

```cpp
int n;
cin >> n;

int soma = 0;
for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {  // Se é ímpar
        soma += i;
    }
}

cout << "Soma: " << soma << endl;
```

### Problema: Sequência Crescente

```cpp
int n;
cin >> n;

bool crescente = true;
for (int i = 1; i < n; i++) {
    int anterior, atual;
    if (i == 1) cin >> anterior;
    
    cin >> atual;
    
    if (atual <= anterior) {
        crescente = false;
    }
    anterior = atual;
}

cout << (crescente ? "SIM" : "NÃO") << endl;
```

### Problema: Diferença de Idade

```cpp
int idade1, idade2;
cout << "Duas idades: ";
cin >> idade1 >> idade2;

int diferenca = (idade1 > idade2) ? (idade1 - idade2) : (idade2 - idade1);
cout << "Diferença: " << diferenca << " anos" << endl;
```

### Problema: Alturas

```cpp
int n;
cin >> n;

double altura[n];
for (int i = 0; i < n; i++) {
    cin >> altura[i];
}

// Calcular média
double soma = 0;
for (int i = 0; i < n; i++) {
    soma += altura[i];
}
double media = soma / n;

// Contar acima da média
int acima = 0;
for (int i = 0; i < n; i++) {
    if (altura[i] > media) {
        acima++;
    }
}

cout << fixed << setprecision(2);
cout << "Média: " << media << endl;
cout << "Pessoas acima da média: " << acima << endl;
```

---

## 6. Padrões de Algoritmos

### Padrão: Validação de Entrada
```cpp
int numero;
bool valido = false;

while (!valido) {
    cout << "Digite um número positivo: ";
    cin >> numero;
    
    if (numero > 0) {
        valido = true;
    } else {
        cout << "Entrada inválida! Tente novamente." << endl;
    }
}
```

### Padrão: Acumulador
```cpp
int soma = 0;
int produto = 1;

for (int i = 0; i < n; i++) {
    soma += vet[i];
    produto *= vet[i];
}

cout << "Soma: " << soma << endl;
cout << "Produto: " << produto << endl;
```

### Padrão: Contador
```cpp
int pares = 0, impares = 0;

for (int i = 0; i < n; i++) {
    if (vet[i] % 2 == 0) {
        pares++;
    } else {
        impares++;
    }
}

cout << "Pares: " << pares << endl;
cout << "Ímpares: " << impares << endl;
```

### Padrão: Busca
```cpp
int posicao = -1;

for (int i = 0; i < n; i++) {
    if (vet[i] == alvo) {
        posicao = i;
        break;
    }
}

if (posicao != -1) {
    cout << "Encontrado na posição: " << posicao << endl;
} else {
    cout << "Não encontrado!" << endl;
}
```

---

## 7. Otimizações e Boas Práticas

### Uso Eficiente de Memória
```cpp
// ❌ Ineficiente - cria cópias
void processar(vector<int> dados) {
    // ...
}

// ✅ Eficiente - passa referência
void processar(const vector<int>& dados) {
    // ...
}
```

### Validação de Divisão por Zero
```cpp
if (divisor != 0) {
    resultado = dividendo / divisor;
} else {
    cout << "Erro: divisão por zero!" << endl;
}
```

### Tratamento de Arrays
```cpp
// Use constantes para tamanhos
const int TAMANHO_MAX = 1000;
int vet[TAMANHO_MAX];

// Sempre verifique limites
if (indice >= 0 && indice < TAMANHO_MAX) {
    cout << vet[indice];
}
```

### Clareza no Código
```cpp
// ❌ Confuso
int x = y > z ? y : z;

// ✅ Claro
int maximo = (y > z) ? y : z;

// ✅ Ainda mais claro
int maximo;
if (y > z) {
    maximo = y;
} else {
    maximo = z;
}
```

---

## 8. Dicas de Debugging

### Exibição de Valores em Tempo Real
```cpp
#ifdef DEBUG
    cout << "Variável x = " << x << endl;
    cout << "Loop i = " << i << endl;
#endif
```

### Verificação de Condições
```cpp
// Antes de operação crítica
assert(n > 0);  // Para em debug se n <= 0

// Ou explicitamente
if (n <= 0) {
    cerr << "ERRO: n deve ser positivo!" << endl;
    return -1;
}
```

### Rastreamento de Loops
```cpp
for (int i = 0; i < n; i++) {
    cout << "Iteração " << i << ": " << vet[i] << endl;
    // processamento
}
```

---

## 📊 Comparação de Complexidade

| Operação | Complexidade | Exemplo |
|----------|--------------|---------|
| Acesso direto | O(1) | `vet[i]` |
| Busca linear | O(n) | percorrer todo array |
| Busca binária | O(log n) | em array ordenado |
| Bubble sort | O(n²) | ordenação simples |
| Merge sort | O(n log n) | ordenação eficiente |

---

## 🎯 Checklist de Código

Antes de entregar seu código, verifique:

- ✅ Todas as variáveis foram inicializadas?
- ✅ Há validação de entrada do usuário?
- ✅ Os loops têm condições de parada claras?
- ✅ Arrays não têm acesso fora dos limites?
- ✅ Não há divisão por zero?
- ✅ A formatação de saída está correta?
- ✅ O código está indentado corretamente?
- ✅ Variáveis têm nomes significativos?
- ✅ Há comentários em seções complexas?
- ✅ O programa trata casos extremos (n=0, valores negativos, etc.)?

---

## 📚 Referência Rápida de Operadores

```cpp
// Operadores Aritméticos
a + b, a - b, a * b, a / b, a % b

// Comparação
a == b, a != b, a > b, a < b, a >= b, a <= b

// Lógicos
a && b (AND), a || b (OR), !a (NOT)

// Atribuição Combinada
a += b, a -= b, a *= b, a /= b, a %= b

// Ternário
condicao ? valor_verdadeiro : valor_falso

// Incremento/Decremento
a++, ++a, a--, --a
```

---

**Última atualização:** Janeiro de 2026
**Nível:** Intermediário
**Público-alvo:** Estudantes de Programação em C++
