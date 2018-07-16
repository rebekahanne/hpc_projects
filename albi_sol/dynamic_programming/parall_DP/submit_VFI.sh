#!/bin/bash

#SBATCH --job-name=DP
#SBATCH --output=VFI.out
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=8
#SBATCH --partition=sandyb
#SBATCH --account=osmlab

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

# Run the process
./VFI
