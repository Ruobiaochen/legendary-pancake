#notational convention
n is the normal vector pointed outward the region.

//gradient and directional derivative:consider the tangent space at the point
//2 variable:integrate "along" gradients using small plane instead of short line as in one variable.
//partial derivative:fix other variables and integrate as if in one variable.
//a function's differential information(up to first order approximation) at a point is fully captured by the following way:if u=u(x,y,z),R3->R1,u at a point m where u(m)=n,then consider the surface u=n,which is actually a map R2->R1,then the direction of gradient is just the direction of its normal vector.(cf.Lagrange method on quasi linear equation)the magnitude of the gradient is obtained by measuring u along this direction.(in other words,an "axis".)(which is R1->R2)this can be generalized to a somewhat surprising result:consider v:R3->R3,=(v1,v2,v3),and apply the idea respectively on v1,v2,v3,we get three surface and three axis,which determine the div,curl,etc.completely.(and can be seen as surface put together:R2->R3,axis put together:R1->R6)
//by rotating around a specified point M,a function u=u(x,y,z) first derivative at M can be made zero:ux=uy=uz=0 and second derivative(Hessian matrix) at M can be made diagonal.

//strauss

//ch1.intro
order:highest derivative that appears
linear operator.
//remark.(maybe locally,but I don't know) variable coefficient equation can't be reduced to a change of coordinate between partial derivatives(thus the change of x,y,z,...) because this will induce to solve a similar equation.
//remark.the parametrization method (in D. Bleecker) is overly complicated for simple computational problems.
characteristic curve method.
//remark.the parametrization method(which is actually based on characteristic curve method):s and t are parameters,delx/delt=...,dely/delt=...,delu/delt=...,then put the boundary/initial condition:set t=0 and s=the variable in the condition.
initial condition:specify u at all space points at time t0.
boundary condition:specify u at all time at boundary of space points.
conditions at infinity.
jump conditions.
well-posed:exist,unique,stable.
eg.backward diffusion.singular matrix.half plane.
types of second order equation.
//remark.in the classification,we rename t to y.
elliptic:positive-definite or negative-definite.
hyperbolic:1+ other- or 1- other+.
ultrahyperbolic.
parabolic:1zero other same.
if the coefficients are variable,the equation can change type in different regions.

//ch2.wave and diffusion on the whole line
wave equation:utt=c^2*uxx.in the domain R*R.c is not zero.
this is hyperbolic.
solution:u(x,t)=f(x+ct)+g(x-ct).
f travels left:dx/dt=-c.resp. g.
Initial value problem:utt=c^2*uxx.in the domain R*R.c is not zero.u(x,0)=p(x),ut(x,0)=q(x).
this is unique and exist.
Causality.
Energy.
diffusion equation:ut=kuxx.
this is parabolic.
Maximum principle.if u satisfy diffusion equation in a rectangle x:0~l,t:0~T,then the maximum must appear at the bottom side or the lateral sides.
unique
Stability:two sense
ut=kuxx,x in R,t>0,k is not 0.u(x,0)=p(x).
many invariance property.
fundamental solution:S(x,t)=1/sqrt(4pi*kt)*e^(-x^2/(4kt))
general solution,ignoring t:u(x)=H(S,p)(x)=int -inf to inf S(x-k)p(k)dk.in operator form:u=Ap,where A is called the source operator.

//ch3.reflections and source
ut=kuxx,x>0,t>0,k not 0.u(x,0)=p(x),u(0,t)=0.
odd extension method.
ut=kuxx,x>0,t>0,k not 0.u(x,0)=p(x),ux(0,t)=0.
even extension method.
utt=c^2*uxx,x>0,t in R.u(x,0)=p(x),ut(x,0)=q(x),u(0,t)=0.
domain of dependence changed.
wave on finite interval,extension method.
ut-kuxx=f(x,t),x in R,t>0.u(x,0)=p(x).
Duhamel's principle method.
consider ut-kuxx=f(x,t),x in R,t>0.u(x,0)=0. and ut-kuxx=0,x in R,t>0.u(x,0)=p(x). and combine to get the solution.
the integral factor is A(-t),where A is source operator mentioned above,so that u-kuxx=u-Bu=d/dt(A(-t)u(t)).(B is a temporary notation)
//remark.what is A(-t)? I don't know now...(A is well-defined for A(t) s.t. t>0.)
boundary source:subtraction method.
wave with source:3 methods.
wave with boundary source.on finite interval.
smoothness of solution of diffusion function.

//ch4.boundary problems
utt=c^2*uxx,x=0 to l.u(0,t)=u(l,t)=0.u(x,0)=p(x),ut(x,0)=q(x).
separated solution:u=X(x)T(t).
Here comes Fourier and Euler!
//remark.the partition of interval x induces a partition on line t.
eigen.normal mode.
//remark.diagonalization...
the eigenvalues (of this equation) must be positive.(they cannot be complex numbers!)(with not zero Im part)
Neumann conditions.Robin conditions.

//ch5.fourier series and boundary problem
//remark.differential equations with homogeneous boundary conditions induce eigenvalues and eigenfunctions,where their orthogonality is related to symmetry of boundary conditions,then we can use them to solve the corresponding(!) equation with inhomogeneous boundary conditions.
fourier series cannot be differentiated term by term.
equation with inhomogeneous boundary conditions:although fourier series is zero at endpoint,we still use because it's correct in every neighborhood of the endpoint.
hard calculation method with fourier expansion.
subtraction method(shifting the data).

//ch6.harmonic function
Maximum principle.
Uniqueness.
Invariance of laplacian operator under rigid motion.
//remark.as for me,this means the laplacian and the rigid motion commute(in the sense of operator composition).
Poisson formula in dim 2:if uxx+uyy=0 in a circle x^2+y^2=a^2,then u(m)=1/(2pi*a)*int (on the boundary) (a^2-m^2)/(k-m)^2*u(k)|dk|,where k is a vector point to somewhere on the boundary.

//ch7.Green's identities and Green's functions
int lapu dV = int delu/deln dS.
//remark.(thanks to gzw)to get delu/deln=delu/delr (on a sphere),we must first put the transformation (x,y,z)->(r,theta,phi),or that would be meaningless to write delu/delr.(we should not view it as a directional derivative here.because the directionnal derivative in direction l,delu/dell,although same notation,but completely different definition.)
energy:Dirichlet's principle.
representation formula,radial solution.
Green function.

//ch8.computation of solutions

//ch9.waves in space
Characteristic cone.
Kirchhoff formula and Huygens principle.
light ray.characteristic surface.
relativistic geometry

//ch10.boundary problems in higher dimension
spherical harmonics
nodal sets

//ch11.general eigenvalue problems
energy

//ch12.distributions and transforms

//ch13.pde problems from physics

//ch14.nonlinear pdes
Bifurcation:study of solutions depending on parameters
Calculus of variations
