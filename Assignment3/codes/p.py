import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

# Create a grid of points
x = np.linspace(0, 3, 100)
y = np.linspace(-1, 1, 100)
x, y = np.meshgrid(x, y)

# Define the plane
z = 2*x + y - 5

# Create the figure
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot the plane
ax.plot_surface(x, y, z, alpha=0.5, rstride=100, cstride=100, color='cyan')

# Plot the x-axis intercept
ax.scatter(5/2, 0, 0, color='red', s=100, label='Intercept (5/2, 0, 0)')

# Labels and title
ax.set_xlabel('X-axis')
ax.set_ylabel('Y-axis')
ax.set_zlabel('Z-axis')
ax.set_title('Plane Intercept on X-axis')
ax.legend()

# Set limits
ax.set_xlim([0, 3])
ax.set_ylim([-1, 1])
ax.set_zlim([-5, 5])

# Show the grid
ax.grid(True)

# Save the diagram
plt.savefig('plane_intercept_diagram.png', bbox_inches='tight')
plt.show()

