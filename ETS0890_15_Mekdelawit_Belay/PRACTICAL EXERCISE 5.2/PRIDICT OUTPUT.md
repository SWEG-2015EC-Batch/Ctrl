## 1,
    int V, *ptr1, *ptr2 = &V;
    int Arr1[5];
    ptr1 = &(Arr1[2]);
    cout << V << " " << &V << endl;
    cout << ptr2 << " " << &ptr2 << endl;
    cout << Arr1 << " " << &Arr1 << endl;
    cout << ptr1 << " " << &ptr1 << endl;
    
    char *ptr3 = reinterpret_cast<char*>(&V);
    double Arr2[5];
    double *Ptr1 = &(Arr2[2]); 
    cout << V << " " << &V << endl;
    cout << ptr2 << " " << &ptr2 << endl;
    cout << Arr2 << " " << &Arr2 << endl; 
    cout << Ptr1 << " " << &Ptr1 << endl; 
## output
 - <random_value> <address_of_V>
 - <address_of_V> <address_of_ptr2>
 - <address_of_Arr1> <address_of_Arr1>
 - <address_of_Arr1[2]> <address_of_ptr1>

- <random_value> <address_of_V>
- <address_of_V> <address_of_ptr2>
- <address_of_Arr2> <address_of_Arr2>
- <address_of_Arr2[2]> <address_of_ptr1>

## 2,
     int a,*p,**q;
     a=58;
     p=&a;
     q=&p;
     cout<< a<<" ";
     cout<< *p<<" ";
     cout<< **q<<" ";
## output
- 58 58 58
## 3,
     int k=4,*ptr,**ptrptr;
     ptr=&k, ptrptr=&ptr;
     cout<<" k="<<k;
     cout<<" x="<<ptr;
     cout<<" y="<<ptrptr;
     cout<<endl;
     *ptr=k+10;
     cout<<" k="<<k<<endl;
     **ptrptr=*ptr+k;
     cout<<" k="<<k<<endl;
   ## output
	   k=4 x=address of k(950) y=address of ptr(3000)
	   k=14
	   k=28
## 4,
         1  int i=5,j=10;
	 2  int *ptr;
	 3  int **ptrptr;
	 4  ptr=&i;
	 5  ptrptr=&ptr;
	 6  *ptr=3;
	 7  **ptrptr=7;
	 8  ptr=&j;
	 9  **ptrptr=9;
	 10 **ptrptr=&i;
	 11 *ptr=-2;
 ## output
        i    j     ptr   ptrptr
        5    10    &i    dangling
        5    10    &i    &ptr
        3    10    &i    &ptr
        7    10    &i    &ptr
        7    10    &j    &ptr
        7    9     &j    &ptr
        7    9     &i    &ptr
       -2    9     &i    &ptr
## 5,
     int i=5, j=10;
     int *ptr=&i,**ptrptr=&ptr;
	    cout<<*ptr++<<" "<<ptr<<endl;
	    cout<<*(ptr++)<<" "<<ptr<<endl;
	    cout<<*++ptr<<" "<<ptr<<endl;
	    cout<<*(++ptr)<<" "<<ptr<<endl;
	   cout<<++*ptr<<" "<<ptr<<endl;
	   cout<<++(*ptr)<<" "<<ptr<<endl;
	   cout<<(*ptr)++<<" "<<ptr<<endl;
	 
## output
          5      address of i
	 10     address of j 
	 10     address of j after Increments
	 11     address of j after Increments
	 11     address of j after Increments
	 12     address of j 
	 12     address of j 
 ## 6,
           float a[5];
	   float *ptr;
	   ptr=&(a[3]);
	   *ptr=9.8;
	   ptr-=2;
	   *ptr=5;  ptr--;
	   *ptr=6;
	   ptr+=3;
	   *ptr=7; 
 ## output 
   a[0] : 6
     a[1] : 5 
      a[2] : 7
        a[3] : 9.8
          a[4] : intialized number
   
   ## 7,
           float mark[3][5]={{10,11,12,13,14}, {20,21,22,23,24},{30,31,32,33,34}};
	   float *ptr=mark[0];
	   ptr+=2;
	   *ptr *=2;
	   ptr=*(mark+1)+3;
	   *ptr+=7;
	   ptr+=4;
	   *ptr+=8;
	   
   ## output 
       10 11 24 13 14 
       20 21 22 30 24 
       30 31 32 33 42 
