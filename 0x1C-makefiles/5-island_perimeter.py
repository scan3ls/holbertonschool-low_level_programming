#!/usr/bin/python3
""" Find islande perimeter """


def island_perimeter(grid):
    "find island perimeters"
    floor = len(grid) - 1
    index = 0
    prim = 0

    for layer in range(1, floor):
        topLayer = grid[layer - 1]
        middleLayer = grid[layer]
        bottomLayer = grid[layer + 1]

        for index, value in enumerate(middleLayer):

            if value == 0:
                continue

            top = topLayer[index]
            bottom = bottomLayer[index]
            left = middleLayer[index - 1]
            right = middleLayer[index + 1]

            if top == 0:
                prim += 1

            if bottom == 0:
                prim += 1

            if left == 0:
                prim += 1

            if right == 0:
                prim += 1

    return prim
