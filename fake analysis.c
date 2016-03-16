#notation:{f<a}={x st. f(x)<a}
#in integration theory,the function under consideration are measurable.
#Lebesgue integral is integrate by density:int f(x)=int f(-x).

//Little technique
compact
boundary estimation
every operation can be seen as a function. eg. A+B is f:RnxRn->Rn:(a,b)->a+b,in which A+B=f(A*B).
characteristic function

//Cantor set C
IntC=0,FrC=C

//topology of Rn
closed is almost compact.
compact is sequential compact is limit point compact.
closed is equivalent to that every convergent sequence in A converges into A.

//set-theoretic
for any union,union commutes with function.
generally, relative complement do not commute with function.
for any union,union commutes with one Cartesian product.
sup(-a)=-inf(a)

//Littlewood principles
Littlewood stated the principles in his 1944 Lectures on the Theory of Functions as:
There are three principles, roughly expressible in the following terms: Every (measurable) set is nearly a finite sum of intervals; every function (of class Lp) is nearly continuous; every convergent sequence of functions is nearly uniformly convergent.
//eg.f(x):[0,1]->R,0 if x is in Q,otherwise 1
f is measurable:f-1(0) is Qintersect[0,1],which is measurable,f^(-1) also.
Qintersect[0,1] is nearly finite union of intervals:choose a cover of it and truncate.
approximation by simple function:fn=f=1*E(.)
approximation by step function a.e.:gn=1
approximation uniformly on a closed subset:[0,1]-Q has a measure 1-miu closed subset.consider a cover of Q in [0,1].then there must be some irrational number that is not covered,what's more,their set has measure 1-miu.
continuity when restricted to a closed subset:choose the set above.


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
finite valued:f doesn't take inf.
measurable function:f:E->Rextended,for all a,f-1[-inf,a) is measurable.
//equivalently,we can change open to closed, {f<=a}.or change the direction of the sign.
//if f is finite valued,{a<f<b} is sufficient.
//alternative definition:a function between measurable spaces is said to be measurable if the preimage of each measurable set is measurable.
//actually it's between (R^n,L) and (Rextended,B),where B means Borel.
//continuous is B->B measurable in this sense.
equal almost everywhere:{x st.f(x)!=g(x)} is measure zero.
simple function:f=a1XE1+...+atXEt,where XM is the character function of M and ak are const.
step function:simple function in which Ek are rectangles.
//measurable function can be approximated pointwisely by simple function or step function a.e..
Minkowski addition:A+B
//Brunn-Minkowski inequality,concave of f(A)=(m(A))^(1/n)

//ch2.integral theory
canonical form of simple function:coefficients non-zero,different,sets disjoint.
Lebesgue integral of simple function
//notational remark.int f(x)dx=int f(x)dm(x)=int f(x)dV
if f=g for a.e. x, inf f=int g.
support:supp(f)={x st.f(x)!=0},then we say f is supported on supp(f).
Lebesgue integral of bounded function supported on a set of finite measure
Lebesgue integral of non-negative function which is extended-valued
//now integrable means int f < +inf.
//Fatou lemma:for non-negative functions,int (lim inf fn) <= lim inf (int fn)
Lebesgue integral for general case
//now integrable means int |f| is integrable in the above sense.
//for all miu there exists delta st. for all E,m(E)<delta implies int (E) |f| <miu.(this is named absolute continuous)
//Fatou-Lebesgue theorem
L1 norm:||f||=int |f| (int is Lebesgue integral)
L1 space:Lebesgue integrable function with L1 norm
//norm induces a metric
complete:every Cauchy sequence converges
//L1 space is complete
//sequence which converges in L1 has a subsequence converges pointwise a.e.
dense in L1
eg.simple,step,continuous with compact support
//if f is in L1 space,then f is L1 continuous.
