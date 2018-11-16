#!/bin/bash
#PBS -l nodes=5:ppn=8,mem=64gb,walltime=02:00
#PBS -M a.martinez@uniandes.edu.co
#PBS -m abe
#PBS -N Programa

#cd /hpcfs/home/fisi4028/a.martinez/AndresMartinez_Ejercicio27
cd $PBS_O_WORKDIR
make -f make.mk
./Listings

mpicc integra.c -0 integra
mpirun -np 5 sample 10
