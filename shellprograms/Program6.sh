echo "Enter the number: "
read num
n1=0
n2=1
echo "The fibonacci series of "$num" is"
for((i=0;i<$num;i++))
do
echo $n1
n=$((n1+n2))
n1=$n2
n2=$n
done
