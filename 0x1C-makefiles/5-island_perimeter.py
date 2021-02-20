#!/usr/bin/python3
def isla(grid):
    """ returns the perimeter of the island described in grid

    Args:
        grid ([list]): [list of list of integers]

    Returns:
        [int]: [perimeter of the island described in grid]
    """
    size = len(grid[0]) - 1
    column = 0
    row = 0
    counter = 0
    resul = 0

    if not grid or size == -1:
        return 0

    for row in range(size):
        for column in range(size):
            if grid[row][column] == 1:
                counter = 4
                if column >= 1 and grid[row][column + 1] == 1:
                    counter -= 1
                if column < (size - 1) and grid[row][column - 1] == 1:
                    counter -= 1
                if row >= 1 and grid[row - 1][column] == 1:
                    counter -= 1
                if row < (size - 1) and grid[row + 1][column + 1] == 1:
                    counter -= 1
                resul += counter

    return (resul - 1)
