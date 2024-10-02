/*
    B*-tree of order m is a search tree that is either empty or that satisfies three properties:

    The root node has minimum two and maximum 2 floor ((2m-2)/3) +1 children
    Other internal nodes have the minimum floor ((2m-1)/3) and maximum m children
    All external nodes are on the same level.
*/