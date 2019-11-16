"""Module with a function to compute the area of an irregular figure on a
rectangular matrix.
"""


def check_borders(grid):
    """Function that checks the borders of the matrix to search irregular 1's.

    Args:
        grid (list): The matrix that will be checked.

    Returns:
        bool: True if grid is a valid matrix, False otherwise.
    """
    # Check first and last row
    if sum(grid[0]) == 0 and sum(grid[-1]) == 0:
        # Check first and last column
        representation = [row[0] + row[-1] for row in grid]
        if sum(representation) == 0:
            return True
    return False


def island_perimeter(grid):
    """Function that checks the perimeter of an irregular figure
    inside a 2D rectangular matrix of 1's and 0's
    where 1 is a part of the figure and 0 is a void in the matrix.

    Args:
        grid (list): The matrix that will be checked.

    Returns:
        int: The value perimeter's value of the figure inside the matrix.
    """
    perimeter = 0
    if isinstance(grid, list):
        if len(grid[0]) > 0:
            if check_borders(grid):
                size_x = len(grid[0])
                size_y = len(grid)
                for pos_y in range(1, size_y - 1):
                    for pos_x in range(1, size_x - 1):
                        if grid[pos_y][pos_x] == 1:
                            up = pos_y - 1
                            down = pos_y + 1
                            left = pos_x - 1
                            right = pos_x + 1
                            if left >= 0 and grid[pos_y][left] == 0:
                                perimeter += 1
                            if right <= size_x and grid[pos_y][right] == 0:
                                perimeter += 1
                            if up >= 0 and grid[up][pos_x] == 0:
                                perimeter += 1
                            if down <= size_y and grid[down][pos_x] == 0:
                                perimeter += 1
    return perimeter
