#!/usr/bin/python3
""" Find islande perimeter """


def island_perimeter(grid):
    "find island perimeters"
    floor = len(grid)
    index = 0
    prim = 0

    for layer in grid:
        if 0 in layer:
            break
        height = len(grid)
        width = len(layer)
        return 2 * height + 2 * width

    for layer in range(0, floor):
        try:
            topLayer = grid[layer - 1]
        except:
            topLayer = None
        try:
            bottomLayer = grid[layer + 1]
        except:
            bottomLayer = None

        middleLayer = grid[layer]
        length = len(middleLayer) - 1

        for index, value in enumerate(middleLayer):

            if value == 0:
                continue

            top = None
            if topLayer is not None:
                top = topLayer[index]

            bottom = None
            if bottomLayer is not None:
                bottom = bottomLayer[index]

            left = None
            if index != 0:
                left = middleLayer[index - 1]

            right = None
            if index != length:
                right = middleLayer[index + 1]

            if top == 0 or top is None:
                prim += 1

            if bottom == 0 or bottom is None:
                prim += 1

            if left == 0 or left is None:
                prim += 1

            if right == 0 or right is None:
                prim += 1

    return prim
