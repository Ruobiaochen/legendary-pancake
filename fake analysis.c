#notation:{f<a}={x st. f(x)<a}
#notation:X is characterize function
#in integration theory,the function under consideration are measurable.
#Lebesgue integral is integrate by density:int f(x)=int f(-x).

//Little technique
compact
boundary estimation
every operation can be seen as a function. eg. A+B is f:RnxRn->Rn:(a,b)->a+b,in which A+B=f(A*B).
characteristic function
int X(P)=m(P)
A general idea is to generalize some special choice,such as 1/n,1/2^n. As in sigma 1/2^n < +inf,the point is that when every a(n) can be arbitrary small,their sum can also be arbitrary small.
It's deemed to fail if to consider problem involving a.e. pointwisely,precisely because they would fail pointwisely.

//Cantor set C
IntC=0,FrC=C

//topology of Rn
closed is almost compact.
compact is sequential compact is limit point compact.
closed is equivalent to that every convergent sequence in A converges into A.
Rn has countable basis.that is,balls with rational center of rational radius.
Baire category theorem:countable intersection of open dense sets is dense.

//set-theoretic
for any union,union commutes with function.
generally, relative complement do not commute with function.
for any union,union commutes with one Cartesian product.
sup(-a)=-inf(a)
X(EintersectB)=X(E)*X(B)


//main source: E.M.Stein,R.Shakarchi
//but it's not very reliable...the first (fault?) I see is the definition of limit point.

//ch1.measure theory
//decomposition of open set in Rn using closed cubes
exterior measure:m*(E)=inf(sigma j=1 to inf |Qj|),where E is in R,over all countable coverings of E by closed cubes.
//it's not true that if E1 and E2 are disjoint,then m*(E1UE2)=m*(E1)+m*(E2).
Lebesgue measurable:E is measurable if inf {m*(O-E) | O is a closed set covering E} = 0. //It's ok to change closed to open here.
//remark.we cannot simply replace O by closed C because for given O,m*(C-O) can have a positive lower bound,that is because m*(closureO-O) can be positive,consider Qintersect[0,1] or complement of Cantor-like set.(but note they can be covered by countable closed sets in the sense of the definition of exterior measure.)
//eg.open set,closed set,m*=0 set,countable union,countable intersection,complement
Lebesgue measure:m(E)=m*(E) where E is measurable.
//countable additivity now holds.
Ek go up to E:union(Ek)=E and Ek is in Ek+1.
Ek go down to E:intersection(Ek)=E and Ek+1 is in Ek.
//if Ek go up to E,m(E)=lim m(Ek).
//if Ek go down to E and m(Ek) is finite,m(E)=lim m(Ek).
//approximation by finite union of closed cubes with symmetric difference.
sigma-algebra:a sigma-algebra on a set X is a collection of subsets of X that is closed under complement,countable union,countable intersection.
Borel sigma-algebra:the intersection of all sigma-algebra on Rn that contains all open sets
Borel set:element of Borel sigma-algebra
//there exists Lebesgue measurable set which is not Borel set.
G-delta set:a set which is countable intersection of open sets
F-sigma set:a set which is countable union of closed sets
null set.
//A Lebesgue-measurable set can be "squeezed" between a containing Gδ set and a contained Fσ set.
//remark.this shows Lebesgue measurable is the completion of Borel measurable,ie. by adding null sets.
finite valued:f doesn't take inf.
measurable function:f:E->Rextended,for all a,f-1[-inf,a) is measurable.
//equivalently,we can change open to closed, {f<=a}.or change the direction of the sign.
//alternative definition:a function between measurable spaces is said to be measurable if the preimage of each measurable set is measurable.
//actually it's between (R^n,L) and (Rextended,B),where B means Borel.
equal almost everywhere:{x st.f(x)!=g(x)} is measure zero.
simple function:f=a1XE1+...+atXEt,where XM is the character function of M and ak are const.
step function:simple function in which Ek are rectangles.
//measurable function can be approximated in various norms by many ways.
//eg.f(x):[0,1]->R,0 if x is in Q,otherwise 1
f is measurable:f-1(0) is Qintersect[0,1],which is measurable,f^(-1) also.
Qintersect[0,1] is nearly finite union of intervals:choose a cover of it and truncate.
approximation by simple function:fn=f=1*E(.)
approximation by step function a.e.:gn=1
approximation uniformly on a closed subset:[0,1]-Q has a measure 1-miu closed subset.consider a cover of Q in [0,1].then there must be some irrational number that is not covered,what's more,their set has measure 1-miu.
continuity when restricted to a closed subset:choose the set above.
Minkowski addition:A+B
//Brunn-Minkowski inequality,concave of f(A)=(m(A))^(1/n)

//ch2.integral theory
//notational remark.int f(x)dx=int f(x)dm(x)=int f(x)dV
if f=g for a.e. x, inf f=int g.
support:supp(f)={x st.f(x)!=0},then we say f is supported on supp(f).
//Fatou lemma:for non-negative functions,int (lim inf fn) <= lim inf (int fn)
//Borel-Cantelli lemma.
Lebesgue integral for general case
//now integrable means int |f| < +inf
//integral is absolute continuous.
//Fatou-Lebesgue theorem
L1 norm:||f||=int |f| (int is Lebesgue integral)
L1 space:Lebesgue integrable function with L1 norm
//norm induces a metric
complete:every Cauchy sequence converges
//L1 space is complete
//remark.in this sense,L integral to R integral is real to rational.
dense in L1(ways of approximation)
eg.simple,step,continuous with compact support
//remark.L integrable is equivalent to approximatable by,say,step functions?
modes of convergence:http://www.johndcook.com/blog/modes_of_convergence/

//ch3.differentiation and integration
//average problem:density differentiation
H-L maximal function(uncentered version):f*(x)=sup 1/m(B)*int (B) |f|,where sup is over all B,which is a ball containing x.(not necessarily center.)
//Vitali lemma
//inequality for maximal function
locally integrable:L1-loc(Rd)
//Lebesgue density theorem
//identity for convolutions
function of bounded variation:a variation of f on [a,b] here refers to sigma |df| over a finite partition of f.
//a curve z=(x(t),y(t)) is rectifiable iff x,y are continuous and of bounded variation.
total variation T,positive variation P,negative variation N.
//df=P-N,T=P+N
//rising sun lemma
absolutely continuous:for all miu there exists delta st. sigma(m(dx))<delta implies sigma(m(df))<miu,where dx are disjoint.
//if F(x)=int a to x f(t)dt,then F is absolutely continuous.
//T=int |f'|
Minkowski content
//L integrable function has a.e. L point,ie. not oscillate too much in average sense.

//ch6.abstract measure and integration theory
measure space:(X,M,u),where M is a sigma-algebra of X and u:M->[0,+inf] satisfy countable additivity.
sigma-finite:X is union of countable sets k in M which u(k) are finite.
eg.counting measure #
exterior measure:u*:2^X->[0,+inf],satisfy u*(empty)=0,inclusion implies no more than,countable sub additivity.
Caratheodory measurable:E is Caratheodory measurable if for all A,u*(A)=u*(EintersectA)+((X-E)intersectA)
//Caratheodory measurable is complete.
//on a metric space we can define Borel sigma-algebra.
distance between two sets:d(A,B)
metric exterior measure:an exterior measure u* that d(A,B)>0 implies additivity(of A and B)
//Borel sets are Caratheodory measurable with metric exterior measure.
algebra,premeasure
