#!/bin/sh

printf "#Architecture: "
uname -sr
printf "\t\t"
uname -vmo

printf "#CPU physical: "
nproc

printf "#vCPU: "
cat /proc/cpuinfo | grep processor | wc -l

printf "#Memory Usage: "
free -m | grep Mem | awk '{printf"%d/%d MB (%.2f%%)\n", $3, $2, $3/$2 * 100}'

printf "#Disk Usage: "
df -BM | grep /dev/mapper/ | awk '{sum+=$3}END{print sum}' | tr -d '\n'
printf "/"
df -H | grep /dev/mapper/ | awk '{sum+=$4}END{print sum}' | tr -d '\n'
printf " GB ("
df -BM | grep /dev/mapper/ | awk '{sum1+=$3 ; sum2+=$4}END{printf "%d", sum1/sum2 * 100}' | tr -d '\n'
printf "%%)\n"

printf "#CPU Load: "
mpstat | grep all | awk '{printf "%.2f%%\n", 100-$13}'

printf "#Last Boot: "
who -b | awk '{print $3, $4}'

printf "#LVM Usage: "
if [ "$(lsblk | grep lvm | wc -l)" -gt 0 ] ; then printf "yes\n" ; else printf "no\n" ; fi

printf "#Connections TCP: "
netstat | grep tcp | wc -l | tr -d '\n'
printf " ESTABLISHED\n"

printf "#User Log: "
who | wc -l

printf "#Network: IP "
ip address | grep enp0s3 | awk 'NR==2{print $2}' | tr -d '\n'
printf " ("
ip link | grep ether | awk 'NR==2{print$2}' | tr -d '\n'
printf ")\n"

printf "#Sudo: "
cat /var/log/sudo/logs | grep 'COMMAND=' | wc -l | tr -d '\n'
printf " cmd\n"

exit 0



