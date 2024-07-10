echo "Enter Question Number"
read n
g++ main.cpp -o main
./main <io/$n/1.in >out.txt
diff io/$n/1.out out.txt
