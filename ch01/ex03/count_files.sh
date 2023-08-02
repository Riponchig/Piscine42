nb=0
for file in `find .`
do
	nb=`expr $nb + 1`
done
echo $nb
