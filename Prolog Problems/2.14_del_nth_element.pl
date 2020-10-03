del_n(0,[X|Rest],Rest).
del_n(1,[Rest1|[T|Rest2]],[Rest1|Rest2]).
del_n(P,[X|Y],[X|R]):-
 P1 is P-1,
 del_n(P1,Y,R).

