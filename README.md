# DevSuperior - Linguagem C++

![C++](https://img.shields.io/badge/C++-17-blue.svg)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow.svg)

## 📖 Sobre Este Repositório

Este repositório contém materiais de estudo e exercícios práticos da linguagem **C++** do curso **Fundação de Programação** da DevSuperior. Inclui desde os conceitos mais básicos até tópicos avançados de programação orientada a objetos.

---

## 📁 Estrutura do Projeto

```
DevSuperior-Linguagem-C-PP/
├── Atividades/              # Exercícios e atividades práticas
│   ├── ArraysEmCpp.cpp
│   ├── EntradaDeDadosEmCpp.cpp
│   ├── EstruturaDeControleEmCpp.cpp
│   ├── MatrizesEmCpp.cpp
│   ├── PrimeiroPassoEmC++.cpp
│   ├── ProcessamentoECastingEmCpp.cpp
│   ├── SaidaDeDados.cpp
│   ├── VariaveisETipos.cpp
│   └── Problemas/           # Exercícios de problemas práticos
│       ├── ProblemaAlturasEmCpp.cpp
│       ├── ProblemaCrescente.cpp
│       ├── ProblemaDiagonalNegativosEmCpp.cpp
│       ├── ProblemaIdadeEmCpp.cpp
│       ├── ProblemaMenorDeTresEmCpp.cpp
│       ├── ProblemaRetangulo.cpp
│       └── ProblemaSomaImpares.cpp
├── Docs/                    # Documentações
│   ├── Fundamentos/         # Conceitos básicos e essenciais
│   │   └── FUNDAMENTOS_C++.md
│   └── Conceitos/           # Tópicos avançados
│       └── CONCEITOS_C++.md
├── cmake-build-debug/       # Diretório de build (compilação)
├── CMakeLists.txt          # Arquivo de configuração CMake
└── README.md               # Este arquivo
```

---

## 🎯 Conteúdo das Atividades

### Fundamentos

| Atividade | Descrição |
|-----------|-----------|
| **PrimeiroPassoEmC++.cpp** | Hello World e primeiros passos |
| **VariaveisETipos.cpp** | Declaração e uso de variáveis e tipos primitivos |
| **EntradaDeDadosEmCpp.cpp** | Leitura de dados do usuário com `cin` e `getline` |
| **SaidaDeDados.cpp** | Exibição formatada de dados com `cout` |
| **ProcessamentoECastingEmCpp.cpp** | Operações matemáticas e conversão de tipos |
| **EstruturaDeControleEmCpp.cpp** | If, else, switch, loops (for, while, do-while) |
| **ArraysEmCpp.cpp** | Vetores unidimensionais |
| **MatrizesEmCpp.cpp** | Matrizes bidimensionais |

### Problemas Práticos

| Problema | Descrição |
|----------|-----------|
| **ProblemaAlturasEmCpp.cpp** | Cálculo e análise de alturas |
| **ProblemaIdadeEmCpp.cpp** | Processamento de dados de idade |
| **ProblemaMenorDeTresEmCpp.cpp** | Encontrar o menor entre três números |
| **ProblemaRetangulo.cpp** | Cálculo de área e perímetro de retângulo |
| **ProblemaSomaImpares.cpp** | Soma de números ímpares em um intervalo |
| **ProblemaCrescente.cpp** | Verificação de sequência crescente |
| **ProblemaDiagonalNegativosEmCpp.cpp** | Análise de diagonais e negativos em matriz |

---

## 📚 Documentações

### 📖 [Fundamentos de C++](Docs/Fundamentos/FUNDAMENTOS_C++.md)

Guia completo para iniciantes contendo:
- Estrutura básica de um programa C++
- Variáveis e tipos de dados primitivos
- Entrada e saída de dados
- Operadores (aritméticos, comparação, lógicos)
- Estruturas de controle (if, switch, loops)
- Arrays e matrizes
- Funções e parâmetros
- Processamento de dados e casting
- Boas práticas de programação

### 🔬 [Conceitos Avançados de C++](Docs/Conceitos/CONCEITOS_C++.md)

Referência para tópicos avançados incluindo:
- Processamento de dados e conversão de tipos
- Estruturas de repetição avançadas
- Algoritmos de busca em arrays
- Operações com matrizes
- Soluções de problemas reais
- Padrões de algoritmos
- Otimizações e boas práticas
- Debugging e checklist de código
- Complexidade de algoritmos

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

- **Compilador C++**: GCC, Clang ou MSVC
- **CMake** (opcional): Para compilação automatizada

### Compilação Manual

```bash
# Navegar até a pasta de atividades
cd Atividades

# Compilar um arquivo específico
g++ -o NomeDoPrograma NomeDoPrograma.cpp

# Executar
./NomeDoPrograma
```

### Compilação com CMake

```bash
# Criar diretório de build
mkdir build
cd build

# Gerar arquivos de compilação
cmake ..

# Compilar
cmake --build .

# Executar
./DevSuperiorLinguagemCpp
```

---

## 💡 Exemplos Rápidos

### Hello World

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

### Entrada e Saída

```cpp
#include <iostream>

using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Sua idade é: " << idade << endl;
    return 0;
}
```

### Loop Simples

```cpp
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    return 0;
}
```

---

## 🎓 Tópicos Cobertos

### Iniciante
- ✅ Sintaxe básica
- ✅ Variáveis e tipos
- ✅ Operadores
- ✅ Estruturas de controle
- ✅ Arrays

### Intermediário
- ✅ Funções
- ✅ Strings
- ✅ Ponteiros
- ✅ Alocação dinâmica
- ✅ Estruturas (structs)

### Avançado
- ✅ Classes e OOP
- ✅ Herança
- ✅ Polimorfismo
- ✅ Templates
- ✅ STL (Standard Template Library)
- ✅ Tratamento de exceções

---

## 📝 Notas Importantes

### Diferenças entre C e C++

| Aspecto | C | C++ |
|---------|---|-----|
| Paradigma | Procedural | Multi-paradigma (OOP, Procedural, Genérico) |
| Classes | Não | Sim |
| STL | Não | Sim |
| Namespaces | Não | Sim |
| Ponteiros | Sim | Sim (menos necessários) |
| Templates | Não | Sim |

### Boas Práticas

✅ **Sempre faça:**
- Inicializar variáveis
- Usar nomes descritivos
- Indentar corretamente
- Comentar código complexo
- Liberar memória alocada dinamicamente

❌ **Nunca faça:**
- Usar variáveis globais desnecessariamente
- Deixar variáveis não inicializadas
- Esquecer de liberar memória (memory leaks)
- Usar números mágicos
- Ignorar avisos do compilador

---

## 🔗 Recursos Externos

- [C++ Reference](https://en.cppreference.com/)
- [CPP Insights](https://cppinsights.io/)
- [GeeksforGeeks C++](https://www.geeksforgeeks.org/c-plus-plus/)
- [LearnCpp.com](https://www.learncpp.com/)
- [ISO/IEC 14882 Standard](https://isocpp.org/)

---

## 📧 Contato e Dúvidas

Para dúvidas sobre o conteúdo, consulte a documentação fornecida ou os comentários nos arquivos de código.

---

## 📄 Licença

Este projeto é parte do curso da DevSuperior. Use livremente para fins educacionais.

---

## 🔄 Histórico de Atualizações

- **v1.1** (17/01/2026): Atualização do README com links para novas codumentações
- **v1.0** (17/01/2026): Criação das documentações de Fundamentos e Conceitos
- **v0.9** (Inicial): Estrutura base do repositório com atividades

---

**Última atualização:** 17 de janeiro de 2026

