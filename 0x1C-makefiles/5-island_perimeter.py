#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid

    Args:
        grid ([list]): [list of list of integers]

    Returns:
        [int]: [perimeter of the island described in grid]
    """
    column = 0
    row = 0
    counter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if (column - 1) == -1 or grid[row][column - 1] == 0:
                    counter += 1
                if (column + 1) or grid[row][column + 1] == 0:
                    counter += 1
                if (row - 1) or grid[row - 1][column] == 0:
                    counter += 1
                if (row + 1) or grid[row + 1][column] == 0:
                    counter += 1

    return (counter)
