circular_left_shift([],[]).
circular_left_shift([X],[X]).
circular_left_shift([X|L],L1):-
    append(L,[X],L1).
