intersect([],L,[]).
intersect([X|L1],L2,[X|L3]):-
    list_member(X,L2),
    !,
    intersect(L1,L2,L3).
intersect([X|L1],L2,L3):-
    intersect(L1,L2,L3).
