# 🏋🏽 | Virtual Personal Trainer

**Virtual Personal Trainer** é um projeto desenvolvido por minha autoria, com o objetivo de oferecer uma ferramenta simples, prática e acessível para **personais trainers**, **alunos de academia** e **proprietários de academias**.  
Inicialmente programado em **Linguagem C**, o projeto busca **agilizar o gerenciamento de informações** relacionadas ao ambiente de academia, como:

- Cadastro de alunos.
- Cadastro de profissionais de educação física (Personal Trainers).
- Registro de evolução física dos alunos.
- Acompanhamento do personal de acordo com a evolução do seu aluno.

O projeto é ideal para quem deseja informatizar o processo de coleta de dados sem a necessidade de plataformas complexas.

---

## 📋 | Funcionalidades

O sistema é executado em modo terminal (linha de comando) e apresenta um menu principal com 4 opções:

### 1️⃣ | Cadastro Pessoal
Permite o registro básico de um aluno, solicitando:

- Nome completo
- Idade
- RG
- CPF

> Após o preenchimento, os dados são armazenados (apenas na sessão atual).

---

### 2️⃣ | Cadastro Personal Trainer
Destinado ao profissional da área. Solicita:

- Nome
- Registro CREF
- Código da academia

> Após isso, o sistema simula o acesso à lista de alunos matriculados.

---

### 3️⃣ | Dados Físicos
Registra os dados físicos do aluno, solicitando:

- Peso
- Altura

> A intenção é futuramente gerar relatórios de acompanhamento físico com base nesses dados.

---

### 4️⃣ | Sair
Finaliza a execução do programa.

---

## 💻 | Tecnologias Utilizadas

- **Linguagem C**
- Biblioteca padrão `stdio.h`
- Biblioteca `locale.h` para suporte ao idioma português

---

## ⚠️ | Pontos de Atenção

- A entrada de strings (como nomes) ainda está limitada pelo uso de `scanf`, o que pode causar erros com nomes compostos.
- O programa atualmente **não armazena os dados em arquivos ou banco de dados**, ou seja, todas as informações são perdidas ao encerrar a execução.


---

## 👨🏽‍💻 | Autor

Desenvolvido por **Gustavo Jesus Palmentieri**  
Projeto pessoal, com intenção de evoluir para algo mais robusto no futuro.
