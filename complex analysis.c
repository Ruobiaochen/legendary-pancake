#the integral direction is assumed to be counterclockwise if not mentioned.

//Euler formula.The first insight comes from consider df/dz at z=0.(we want to go up in the im axis.)from this we can see in order to further the extension,we need to know some other information,such that df/dz=f at non-real z. Now we change the perspective that exp should satisfy f(x+y)=f(x)f(y).in fact we can infer from this that f will satisfy the previous condition,and we've done.(i know two ways:1.calculate df/dz just use definition of derivative.(amazingly,from baiduzhidao!) 2.take log and it's converted to Cauchy's functional equation.) 
//rather than saying extend to the complex case,i'd say it connects two functions f(x) and f(ix) through the complex structure.(x is real) So the essential idea here is introduction of complex structure.
//b^(rs)=(b^r)^s does not hold when b<0.
//note that f/bf=e^(2iargf).log(||)=0.5log(||^2).
//the grid change of the complex plane or even the corresponding Riemann sphere under the map may be illuminating.eg.e^z take vertical lines and horizontal lines to what?

//Shijihuai,Liutaishun

//ch1.preliminary
//duality:conjugate
take care of a complex number equals zero:re part and im part both zero.
Arg is a set,Arg0 is undefined,arg is between (-pi,pi].
point at infinity:one point compactification.
Riemann sphere. this can remove some kind of singularities by set them to the infinity point.

//ch2.complex differtiable condition
//this is two fold.
//first,once the condition is satisfied,df will behave linearly with df.otherwise,consider df(dz)=df=sdz+tdbz=sdz+tbdz,df(qdz)=sqdz+tb(qdz)=qsdz+bqtbdz!=qdf(dz).
//second,the condition is related to C-R equation of two real-valued function.
remark.as with the (locally) approximation by linear map,here C->C is approached by y(z)=az,which means amplifying and rotating.
f(z)=h(x,y)=u+iv=h(0.5(p+q),-0.5(p-q))=g(p,q).
//remark.yes,p is z and q is bz,but here we see them as independent.
//notation:df is f(z+dz)-f(z),df/dx is defined as dh/dx,df/dy as dh/dy,df/dz as dg/dp,df/dbz as dg/dq.
real diff implies df=fzdz+fbzdbz,if fbz=0,which equals satisfy C-R equations,f is complex diff.
dbz=bdz.
//note that gradu·gradv=0,and the related physical interpretation.
harmonic:u:D->R,D in C,lapu=0.
lapu=4uzbz.
C-R implies Imf and Ref are harmonic.

//Möbius trans
//(from wiki)Geometrically, a Möbius transformation can be obtained by first performing stereographic projection from the plane to the unit two-sphere, rotating and moving the sphere to a new location and orientation in space, and then performing stereographic projection (from the new position of the sphere) to the plane.(cf.Riemann sphere)
cross-ratio is an invariant of Möbius trans and is related to inversion.in light of inversion the four point circleness is just one point is its own inversion point of the circle of other three points.
eg.Möbius trans are holomorphic automorphism of Riemann sphere.
eg.holomorphic automorphism of unit disk.
//remark.holomorphic aut vs biholomorphic aut vs conformal aut?

//ch3.integral representation
