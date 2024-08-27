import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection
import numpy as np

# Define the vertices of the parallelogram
vertices = np.array([
    [-1, 2, 1],  # A
    [1, -2, 5],  # B
    [4, -7, 8],  # C
    [2, -3, 4]   # D
])

# Define the vertices of the parallelogram
# The order of the vertices for the edges
edges = [
    (0, 1),  # A to B
    (1, 2),  # B to C
    (2, 3),  # C to D
    (3, 0)   # D to A
]

# Define the face of the parallelogram
faces = [[vertices[0], vertices[1], vertices[2], vertices[3]]]

# Create a 3D plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot the edges
for edge in edges:
    start, end = edge
    ax.plot3D(*zip(*vertices[[start, end]]), color='b', marker='o')

# Add the parallelogram face
poly3d = Poly3DCollection(faces, alpha=0.25, linewidths=1, edgecolors='r', facecolors='cyan')
ax.add_collection3d(poly3d)

# Plot the vertices
ax.scatter(vertices[:, 0], vertices[:, 1], vertices[:, 2], color='r', s=50)

# Annotate the vertices
for i, txt in enumerate(['A', 'B', 'C', 'D']):
    ax.text(vertices[i, 0], vertices[i, 1], vertices[i, 2], txt, color='k', fontsize=12)

# Set labels
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

# Set title
ax.set_title('3D Plot of Parallelogram')

# Save the plot as a .png file in the root directory of Termux
plt.savefig('/root/parallelogram.png')

# Show the plot
plt.show()
