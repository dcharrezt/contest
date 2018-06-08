
n_stormtroopers, x, y = [int(x) for x in input().split()]

positions = set()
ortogonal = 0

for i in range( n_stormtroopers ):
	x_i, y_i = [int(x) for x in input().split()]
	if y == y_i:
		ortogonal = 1
	else:
		positions.add( (x-x_i)/(y-y_i) )

print( len(positions) + ortogonal )