replace_n(0,Y,[Y|Rest]).
replace_n(1,Y,[Rest1|[X|Rest2]],[Rest1|[Y|Rest2]]).
replace_n(N,[X|Rest1],[X|Rest2]):-
 N1 is N-1,
 replace_n(N1,Rest1,Rest2).
