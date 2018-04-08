
var     a,b: array[1..100000] of longint;
        i,n: longint;
        r,x,t,k,p: int64;
function min(a,b: int64): int64;
begin
        if a<b then exit(a) else exit(b);
end;
procedure swap(var a,b: longint);
var     c: longint;
begin
        c:=a; a:=b; b:=c;
end;
procedure sort(l,r: longint);
var     c,i,j: longint;
begin
        c:=b[random(r-l+1)+l]; i:=l; j:=r;
        repeat
                while b[i]<c do inc(i);
                while b[j]>c do dec(j);
                if i<=j then
                begin
                        swap(a[i],a[j]); swap(b[i],b[j]);
                        inc(i); dec(j);
                end;
        until i>j;
        if i<r then sort(i,r);
        if j>l then sort(l,j);
end;
begin
        randomize;
        read(n,r,x);
        x:=x*n;
        t:=0;
        for i:=1 to n do
        begin
                read(a[i],b[i]);
                t:=t+a[i];
        end;
        if t>=x then
        begin
                write(0);
                halt;
        end;
        sort(1,n);
        k:=0;
        for i:=1 to n do
        begin
                p:=min(r-a[i],x-t);
                k:=k+p*b[i];
                t:=t+p;
                if t=x then
                begin
                        write(k);
                        halt;
                end;
        end;
end.
