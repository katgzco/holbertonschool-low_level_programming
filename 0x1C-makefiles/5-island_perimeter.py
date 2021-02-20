#!/usr/bin/python3
"""module island perimter"""


def island_perimeter(grid):
    """
    Function returns the perimeter
    of the island described in grid:
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically
    (not diagonally).
    Grid is rectangular, width and height
    don’t exceed 100
    Grid is completely surrounded by water, and
    there is one island (or nothing).
    """
    rows, columns, perimeter = len(grid), len(grid[0]), 0
    for row in range(rows):
        for spot in range(columns):
            if grid[row][spot] == 0:
                continue
            if row == 0 or grid[row - 1][spot] == 0:
                perimeter += 1
            if row == rows - 1 or grid[row + 1][spot] == 0:
                perimeter += 1
            if spot == 0 or grid[row][spot - 1] == 0:
                perimeter += 1
            if spot == columns - 1 or grid[row][spot + 1] == 0:
                perimeter += 1
    return perimeter
