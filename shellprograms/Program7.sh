echo "Enter the first number: "
read a
echo "Enter the second number: "
read b
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "Choose the operation (1-4)"
read ch
case $ch in
1) echo "The sum is "$((a+b)) ;;
2) echo "The difference is "$((a-b)) ;; 
3) echo "The product is "$((a*b)) ;;
4) echo "The quotient is "$((a/b)) ;; 
esac
