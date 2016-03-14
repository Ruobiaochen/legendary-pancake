//Little technique
compact
boundary estimation

//Cantor set C
IntC=0,FrC=C

//set-theoretic
for any union,union commutes with function.
generally, relative complement do not commute with function.

//main source: E.M.Stein,R.Shakarchi
//but it's not very reliable...the first (fault?) I see is the definition of limit point.

//ch1.measure theory
distance:d(E,F)=inf(x,y),x in E,y in F
almost disjoint:the interior are disjoint
//decomposition of open set in Rn using closed cubes
//but if we want to assign measure as this we should see how it would not depend on different ways of the decomposition
eg.Cantor set.
exterior measure:m*(E)=inf(sigma j=1 to inf |Qj|),where E is in R,over all countable coverings of E by closed cubes.
//monotonicity implies bounded set m* is finite.
//it's not true that if E1 and E2 are disjoint,then m*(E1UE2)=m*(E1)+m*(E2).
Lebesgue measurable:E is measurable if for all t>0 there exists open set O st. O covers E and m*(O-E)<t.
//remark.we cannot simply replace O by closed C because for given O,m*(C-O) can have a positive lower bound,that is because m*(closureO-O) can be positive,consider Cantor-like set.
//eg.open set,closed set,m*=0 set,countable union,countable intersection,complement
Lebesgue measure:m(E)=m*(E) where E is measurable.
//countable additivity now holds.
Ek go up to E:union(Ek)=E and Ek is in Ek+1.
Ek go down to E:intersection(Ek)=E and Ek+1 is in Ek.
//if Ek go up to E,m(E)=lim m(Ek).
//if Ek go down to E and m(Ek) is finite,m(E)=lim m(Ek).
//A Lebesgue-measurable set can be "squeezed" between a containing open set and a contained closed set.
//Lebesgue measure is inner regular:the measure of a set can be approximated from within by compact subsets.
//approximation by finite union of closed cubes with symmetric difference.
//invariance property under translation and dilation
sigma-algebra:a sigma-algebra on a set X is a collection of subsets of X that is closed under complement,countable union,countable intersection.
Borel sigma-algebra:the intersection of all sigma-algebra on Rn that contains all open sets
Borel set:element of Borel sigma-algebra
//there exists Lebesgue measurable set which is not Borel set.
G-delta set:a set which is countable intersection of open sets
F-sigma set:a set which is countable union of closed sets
null set.
//A Lebesgue-measurable set can be "squeezed" between a containing Gδ set and a contained Fσ set.

