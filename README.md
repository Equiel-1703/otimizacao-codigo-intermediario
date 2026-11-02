# Otimização de Código Intermediário

Material prático da aula de Compiladores sobre Otimização de Código Intermediário.

## Como rodar?

Você vai precisar do LLVM instalado na sua máquina. Se você está usando o um Linux baseado no Debian (como o Ubuntu, Linux Mint, etc), você pode instalar o LLVM com o seguinte comando:

```bash
sudo apt install llvm clang
```

Se você está no Windows, você pode baixar o instalador Windows do LLVM nas releases oficiais do projeto: [LLVM Releases](https://github.com/llvm/llvm-project/releases).

Para compilr um código C de exemplo para LLVM IR, simplesmente rode o seguinte comando:

```bash
./gerar-llvm.sh exemplo-1.c
```

Depois, não esqueça de converter o código LLVM para o formato SSA, que é o formato que os scripts de otimização esperam. Para isso, rode o seguinte comando:

```bash
./mem2reg.sh exemplo-1.ll
```

Para otimizar o LLVM gerado, é só rodar os scripts de otimização passando o arquivo com código LLVM em formato SSA como argumento. Por exemplo, para otimizar o código do exemplo-1 com constant folding e constant propagation, rode o seguinte comando:

```bash
./const-propagation-folding.sh exemplo-1-mem2reg.ll
```
