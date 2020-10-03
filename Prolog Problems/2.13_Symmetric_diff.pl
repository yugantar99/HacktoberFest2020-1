sym_diff([],[],[]).
sym_diff(L1,L2,L3):-
    difference(L1,L2,L4),
    difference(L2,L1,L5),
    union(L4,L5,L3).
