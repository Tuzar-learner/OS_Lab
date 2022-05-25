echo "Enter 1st number: "
read a
echo "Enter 2nd number: "
read b
if (($a > $b))
then
	largest=$a
else
	largest=$b
fi
echo "Biggest number is "$largest;
