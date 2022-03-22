#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    grid4x5 = [
        [0, 0, 0, 0, 0],
        [0, 1, 0, 1, 0],
        [0, 1, 1, 1, 0],
        [0, 0, 0, 0, 0],
    ]
    gridone = [
        [0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0],
        [0, 0, 1, 0, 0],
        [0, 0, 0, 0, 0],
    ]
    gridzero = [
        [0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0],
    ]
    grid2x5 = [
        [0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0],
    ]
    grid3x3 = [
        [0, 0, 0],
        [0, 1, 0],
        [0, 0, 0],
    ]


    print("grid: ",island_perimeter(grid))
    print("4x4: ",island_perimeter(grid4x5))
    print("one: ",island_perimeter(gridone))
    print("zero: ",island_perimeter(gridzero))
    print("2x5: ",island_perimeter(grid2x5))
    print("3x3: ",island_perimeter(grid3x3))

