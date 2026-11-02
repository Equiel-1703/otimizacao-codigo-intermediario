#!/bin/bash

if [ $# -ne 1 ]; then
  echo -e "Como usar:\n\t$0 NOME_ARQUIVO_LL"
  exit 1
fi

inputname=$1
outname=${inputname%".ll"}-mem2reg.ll

opt -passes=mem2reg -S $inputname -o $outname