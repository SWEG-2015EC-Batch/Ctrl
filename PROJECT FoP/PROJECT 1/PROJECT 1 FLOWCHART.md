  # FLOWCHART
```mermaid
    flowchart TD;
    A([Start])-->B[/Read n - number of students/];
    B-->C[/Accept first name, last name, performance hours for 7 days/];
    C-->D[Initialize i=0]; 
    D-->E{Check i=n};
    E--False-->B;
    E--True==>F[Calculate total hours of performance for n students];
    F==>G[Calculate average for each days];
    G==>H[Display name, each day performance, total hours, and average in tabular form];
    H==>I[/Read individual 0, 1, or 2 to see specific information/];
    I==>J{ individual=1};
    J--True==>K[/Read roll number/];
    K==>L[Display name, each day performance, total hours in tabular form based on the given roll number];
    L-->Q;
    J--False==>M{ individual=2};
    M--True==>N[/ read first name and last name/];
    N==>O[Display name, each day performance, total hours in tabular form based on the given name];
    O-->Q;
    M--False==>P([End]);
    Q==>R[Read m to continue or to end];
    R==>S{m=0}
    S--True-->P;
    S--False-->I;
    

```

