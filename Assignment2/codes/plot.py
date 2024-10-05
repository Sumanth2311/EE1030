import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Function to read points from a file
def read_points(filename):
    points = {}
    with open(filename, 'r') as file:
        for line in file:
            x, y, z, label = line.strip().split(':')
            points[label] = (float(x), float(y), float(z))
    return points

# Read points from the file
filename = 'dat.txt'  # Change to your file path
points = read_points(filename)

# Extract x, y, z coordinates
x = [point[0] for point in points.values()]
y = [point[1] for point in points.values()]
z = [point[2] for point in points.values()]

# Close the parallelogram by appending the first point
x.append(points[list(points.keys())[0]][0])
y.append(points[list(points.keys())[0]][1])
z.append(points[list(points.keys())[0]][2])

# Create the plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot the edges of the parallelogram
ax.plot(x, y, z, marker='o')

# Annotate points
for label, (xi, yi, zi) in points.items():
    ax.text(xi, yi, zi, label)

# Set labels
ax.set_xlabel('X-axis')
ax.set_ylabel('Y-axis')
ax.set_zlabel('Z-axis')

# Set title
ax.set_title('3D Parallelogram Plot')

# Show the plot
plt.savefig('plot.png')
plt.show()

