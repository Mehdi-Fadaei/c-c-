gcc micro_paint.c -o nooriginal -Wall -Wextra -Werror
gcc our_micro_paint.c -o original -Wall -Wextra -Werror
echo ""
echo "TEST - <ex_1>"
echo "NO original"
./nooriginal ./test/ex_1
echo "Original"
./original ./test/ex_1
echo ""
echo "TEST - <ex_2>"
echo "NO original"
./nooriginal ./test/ex_2
echo "Original"
./original ./test/ex_2
echo ""
echo "TEST - <ex_3>"
echo "NO original"
./nooriginal ./test/ex_3
echo "Original"
./original ./test/ex_3
echo ""
echo "TEST - <ex_4>"
echo "NO original"
./nooriginal ./test/ex_4
echo "Original"
./original ./test/ex_4
echo ""
echo "TEST - <NULL>"
echo "NO original"
./nooriginal
echo "Original"
./original
echo ""
echo "TEST - <Error file>"
echo "NO original"
./nooriginal ./test/ex
echo "Original"
./original ./test/ex
echo "TEST - <TEST!>"
echo "NO original"
./nooriginal ./test1
echo "Original"
./original ./test1
echo "TEST - <TEST!>"
echo "NO original"
./nooriginal ./example_
echo "Original"
./original ./example_
rm nooriginal
rm original