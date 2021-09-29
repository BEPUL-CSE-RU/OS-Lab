## All command [here](https://github.com/Bepul-Hossain/Lab-collections/blob/master/4Y1S/parallel%20processing/All-Command.md)

Many types environment setup system for run mpi programming [here](https://github.com/Bepul-Hossain/Lab-collections/blob/master/4Y1S/parallel%20processing/Many-Environment-setup-system-for-run-mpi-programming.docx)

Vedio for set up Windows subsystem and run mpi 

[1 windows sub system setup](https://www.youtube.com/watch?v=1ap3hL-UR9I&ab_channel=ProgrammingKnowledge&fbclid=IwAR3SbUVAk5uOV_tFc5d51LlozJuYGnNEb0O3ldTpWYWUuXOtPlSjfLKeAT0) 

[2. run c program](https://www.youtube.com/watch?v=oLjN6jAg-sY&ab_channel=ProgrammingKnowledge2&fbclid=IwAR2MpJGmeI29LKnBphgc_336XUh-QGXZF1CwIpY9mkdNL0mLEIXabB3lPig)

 [3. openmp mpi hello world run](https://www.youtube.com/watch?v=4tlQpCyiBig&ab_channel=BasantGiri&fbclid=IwAR2MpJGmeI29LKnBphgc_336XUh-QGXZF1CwIpY9mkdNL0mLEIXabB3lPig)



This is the basic of openmp and mpi with ful setup description  .

for openmp:

compile:    gcc -fopenmp filename.c -o filename.out

run         :   ./filename.out

source code: 
https://drive.google.com/file/d/1CoAjsOqHYPr5xNdLrsea2JbZ4B46ezfS/view


for mpi:

setup : 

$ sudo apt-get update

$sudo apt-get upgrade

$ sudo apt-get install libopenmpi-dev

$ sudo apt-get install openmpi-bin
 
compile:   mpicc filename.c -o filename

run         :   mpirun -np 4 ./filename
run(default)         :   mpirun ./filename
source code:
https://drive.google.com/file/d/18JonHpnwjVPe1q0ig17y9KP2_S-LbvMN/view
