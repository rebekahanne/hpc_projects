#!/bin/bash

# set the job name
#SBATCH --job-name=helloname_hardcode

# send output to compute_pi.out
#SBATCH --output=helloname_hardcode.out

# receive an email when job starts, ends, and fails
#SBATCH --mail-type=BEGIN,END,DAIL

#SBATCH --account=osmlab

# this job requests 1 core. Cores can be selected from various nodes.
#SBATCH --ntasks=1

# there are many partitions on Midway1 and it is important to specify which
# partition you want to run your job on. Not having the following option, the
# sandby partition on Midway1 will be selected as the default partition
#SBATCH --partition=sandyb

# Run the process
./hidiho_hardcode.exec
