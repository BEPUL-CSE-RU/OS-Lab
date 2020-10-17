```
bepul@DESKTOP-KF1FA33:~$ ls -al
total 12
drwxr-xr-x 1 bepul bepul  512 Oct  5 18:32 .
drwxr-xr-x 1 root  root   512 Oct  5 17:50 ..
-rw------- 1 bepul bepul 3087 Oct  6 22:22 .bash_history
-rw-r--r-- 1 bepul bepul  220 Oct  5 17:50 .bash_logout
-rw-r--r-- 1 bepul bepul 3771 Oct  5 17:50 .bashrc
drwxr-xr-x 1 bepul bepul  512 Oct  5 17:53 .landscape
drwxrwxrwx 1 bepul bepul  512 Oct  5 18:15 .local
-rw-rw-rw- 1 bepul bepul    0 Oct 17 20:57 .motd_shown
-rw-r--r-- 1 bepul bepul  807 Oct  5 17:50 .profile
-rw-r--r-- 1 bepul bepul    0 Oct  5 18:32 .sudo_as_admin_successful
bepul@DESKTOP-KF1FA33:~$ pwd
/home/bepul
bepul@DESKTOP-KF1FA33:~$ ls /mnt/
c  d  e  f  g
bepul@DESKTOP-KF1FA33:~$ ls /mnt
c  d  e  f  g
bepul@DESKTOP-KF1FA33:~$ cd /mnt/e
bepul@DESKTOP-KF1FA33:/mnt/e$ ls
'$RECYCLE.BIN'                                        'System Volume Information'
 120500848_664206447614861_4297769734555924657_n.jpg   app.js
 Academic                                              azure
 Bonik_Summary_bangla.doc                              cv
 CSS                                                   download
 CSS.tgz                                               hsc
 DCIM                                                  java
 Jaggesher_RU_3Months.pdf                              java2
 Lab-collections                                      'my English'
 On-line-judge-problem-solved                          my-regular-learning
'Others not commit on On-line-judge-problem-solved'    software
 Programming                                           webdev
bepul@DESKTOP-KF1FA33:/mnt/e$ cd Academic/
bepul@DESKTOP-KF1FA33:/mnt/e/Academic$ cd 4Y1S/parallel/
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$ touch test.txt
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$ nano test.txt
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$ touch test.txt
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$ nano test.txt
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$ cat test.txt
test my txt
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$
```
bepul@DESKTOP-KF1FA33:/mnt/e/Academic/4Y1S/parallel$ nano test.txt

After this line you will show a window, write something (Ex: test my txt) 
Then type: └───> Ctrl+x   └───> y └───> Enter


```
This is the basic of openmp and mpi with ful setup description  .

for openmp:
compile:    gcc -fopenmp filename.c -o filename.out
run         :   ./filename.out
source code: 
https://drive.google.com/open?id=1CoA...


for mpi:

setup : 
$ sudo apt-get update
$sudo apt-get upgrade
$ sudo apt-get install libopenmpi-dev
$ sudo apt-get install openmpi-bin
 
compile:   mpicc filename.c -o filename
run         :   mpirun -np 4 ./filename

source code:
https://drive.google.com/open?id=18Jo...

```
