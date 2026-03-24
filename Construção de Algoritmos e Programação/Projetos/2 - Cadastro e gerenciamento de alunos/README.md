# Projeto 2° Semestre - Linguagem C
**Curso:** Engenharia da Computação – UNASP  
**Semestre:** 2° Semestre  
**Disciplina:** Construção de Algoritmos e Programação  

---

## 📌 Objetivo

Este projeto tem como objetivo consolidar os conhecimentos estudados em C até o momento, incluindo:

- `printf` / `scanf`  
- Variáveis  
- Estruturas de decisão (`if/else`, `switch`)  
- Estruturas de repetição (`while`, `for`)  

O programa simula um **sistema simples de login e gerenciamento de alunos**.

---

## 🧩 Funcionalidades do Programa

O programa desenvolvido permite:

1. Cadastro de usuário (login e senha).  
2. Login com verificação de até 3 tentativas.  
3. Menu principal com opções de:
   - Cadastrar aluno
   - Editar aluno
   - Mostrar aluno
   - Sair do sistema

---

## 🔐 Funcionamento

### 1. Cadastro de Usuário

Ao iniciar, o programa solicita o cadastro de um usuário e senha, que serão usados posteriormente para login:

```
=== CADASTRO DE USUARIO ===
Digite um nome de usuario: admin
Digite uma senha: 1234
=== Cadastro realizado com sucesso ===
```

---

### 2. Login

O usuário deve realizar login usando as credenciais cadastradas. São permitidas **3 tentativas**:

- Se as credenciais estiverem corretas, o sistema permite acesso ao menu principal.  
- Se exceder o número de tentativas, o programa encerra.

```
Digite o seu login: admin
Digite a sua senha: 0000
Tentativas restantes: 2
```

```
Login realizado com sucesso
```

---

### 3. Menu Principal

Após o login, o usuário pode escolher entre quatro opções:

```
=== MENU PRINCIPAL ===
1 - Cadastrar Aluno
2 - Editar Aluno
3 - Mostrar Aluno
4 - Sair
Escolha uma opção:
```

#### ➤ Opção 1 – Cadastrar Aluno

Solicita o nome, turma e nota do aluno:

```
=== Cadastrar aluno ===
Digite o nome do aluno: Maria
Digite a turma do aluno: 1A
Digite a nota do aluno: 8.5
=== Aluno cadastrado com sucesso ===
```

#### ➤ Opção 2 – Editar Aluno

Permite atualizar os dados do aluno cadastrado:

- 1 – Nome  
- 2 – Turma  
- 3 – Nota  

Exemplo de alteração da turma:

```
=== Editar Aluno ===
1 - Editar Nome
2 - Editar Turma
3 - Editar Nota
Escolha: 2
Digite uma nova turma: 1B
=== Dados Atualizados ===
Turma: 1B
```

#### ➤ Opção 3 – Mostrar Aluno

Exibe os dados atuais do aluno cadastrado:

```
Aluno: Maria
Turma: 1B
Nota: 8.5
```

#### ➤ Opção 4 – Sair

Encerra o programa:

```
Saindo do programa...
```

---

## ⚠️ Observações

- O projeto foi para **entregar e apresentar individualmente**.  
- O programa foi desenvolvido **inteiramente em C**, do zero, sem uso de inteligência artificial.  
- Tem como objetivo **praticar lógica de programação e construção de algoritmos**.  

---

## 📚 Tecnologias utilizadas

- Linguagem: **C**  
- IDE/Compilador: Dev C++

