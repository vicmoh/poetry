clear
echo "Starting testing..."
echo ""
echo "Running make clean..."
make clean
echo ""
echo "Running make... (success = 1 mark)"
make
echo ""
echo "Running first test... (success = 1 mark)"
./poetry < Lab1_1.txt
echo ""
echo "Running second test... (success = 1 mark)"
./poetry < Lab1_2.txt
echo ""
echo "Running third test... (success = 1 mark)"
./poetry < Lab1_3.txt
echo ""
echo "Running fourth test... (success, i.e. no output = 1 mark)"
./poetry < Lab1_4.txt > out.txt; diff out.txt Lab1_4out.txt
echo ""
echo "...Finished testing (total possible marks = 5)"
