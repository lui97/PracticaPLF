hombre(luis).
hombre(david).
hombre(angel).
hombre(mauricio).

espadre(luis,david).
espadre(david,angel).
espadre(angel,mauricio).

esabuelo(X,Y):-
espadre(X,A),
espadre(A,Y).
