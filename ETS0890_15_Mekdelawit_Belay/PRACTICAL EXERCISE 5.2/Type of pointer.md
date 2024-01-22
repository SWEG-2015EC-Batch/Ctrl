- Analyze the segment below and identify
   - Type of pointers
   - Invalid statements
     
  int x = 10, y = 20;
     const int z = 10;
     int *p1 = &x;
     int *p1 = 20;             // Error: redeclaration of 'p1'
     p1 = &y;
     const int *p2 = &x;       // pointer to constant
     *p2 = 50;                 // Error: assignment of read-only location '*p2'
      p2 = &y;
     *ptr = 100;                // Error: 'ptr' was not declared in this scope
      int *const p3 = &x;       //constant pointer 
      *p3 = 60;
      p3 = &y;                   // Error: assignment of read-only variable 'p3'
      const int *const p4 = &x;  //pointer constant to constan
      p4 = &y;                   // Error: assignment of read-only variable 'p4'
      *p4 = 90;                  // Error: assignment of read-only location '*p4'
