set -e
make

./ex17 test.dat c
echo DATABASE CREATED

./ex17 test.dat s 1 jon jon@email.com | $a
if [ "$a" = "" ]
then
  echo "ENTRY SET FOR JON"
else
  echo "FAILED SETTING ENTRY FOR JON"
fi

./ex17 test.dat s 2 bob bob@email.com | $a
if [ "$a" = "" ]
then
  echo "ENTRY SET FOR BOB"
else
  echo "FAILED SETTING ENTRY FOR BOB"
fi

./ex17 test.dat s 3 alex alex@email.com | $a
if [ "$a" = "" ]
then
  echo "ENTRY SET FOR ALEX"
else
  echo "FAILED SETTING ENTRY FOR ALEX"
fi

echo ENTRIES SET

./ex17 test.dat l
echo ENTRIES PRINTED

./ex17 test.dat g 1
echo ENTRY 1 PRINTED

./ex17 test.dat f alex
echo ENTRY CONTAINING \"alex\" PRINTED

./ex17 test.dat f o
echo ENTRY CONTAINING CHARACTER \'o\' PRINTED

./ex17 test.dat d 1
./ex17 test.dat d 2
./ex17 test.dat d 3
echo ENTRIES DELETED

./ex17 test.dat l
echo EMPTY DATABASE PRINTED

rm test.dat
echo "(DATABASE FILE REMOVED)"
