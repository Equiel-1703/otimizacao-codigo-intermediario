#!/bin/bash

if [ $# -ne 1 ]; then
  echo -e "Como usar:\n\t$0 NOME_ARQUIVO_C"
  exit 1
fi

inputname=$1
outname=${inputname%".c"}.ssa.ll

clang -S -emit-llvm -O0 -Xclang -disable-O0-optnone -fno-discard-value-names $inputname -o $outname
opt -passes=mem2reg -S $outname -o $outname