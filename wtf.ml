A=[-2 1 2; -1 2 4; 1 1 5; 5 0 5];
z=A(:,1); v=-z; normz=rats(norm(z,2));
if v(1)>0, v(1)=v(1)+norm(z,2); else
v(1)=v(1)-norm(z,2); end;
P=eye(4)-2*(v*v')/(v'*v),
A=P*A,
P1=P;
z=A(1:3,2);
v=-z; normz=rats(norm(z,2));
if v(1)>0, v(1)=v(1)+norm(z,2); else
v(1)=v(1)-norm(z,2); end;
P=eye(3)-2*(v*v')/(v'*v);
P2(3:4,3:4)=P; P2(1,1)=1;

A=P2*A,

P2=P,
z=A(1:2, 3);
v=-z; normz=rats(norm(z,2));
if v(1)>0, v(1)=v(1)+norm(z,2); else
v(1)=v(1)-norm(z,2); end;
P=eye(2)-2*(v*v')/(v'*v);
P3(2:4,2:4)=P; P3(1,1)=1; P3(2,2)=1

A=P3*A

R=A,
Q=P1*P2*P3,
check= Q*R
