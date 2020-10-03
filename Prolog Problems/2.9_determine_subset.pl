is_subset([X],[X|Rest]).
is_subset([X],[Y|Rest]):-
    X=\=Y,
    is_subset([X],Rest).
is_subset([X|Rest1],[Z|Rest2]):-
    is_subset(Rest1,Rest2).
