#!/usr/bin/python3
""" Module: perimeter of the island """


def island_perimeter(grid):
    """ Returns the perimeter of an island representation in a matrix """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    count += 1
                if j + 1 > (len(grid[i]) - 1) or grid[i][j + 1] == 0:
                    count += 1
                if i + 1 > (len(grid) - 1) or grid[i + 1][j] == 0:
                    count += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    count += 1
    return count
