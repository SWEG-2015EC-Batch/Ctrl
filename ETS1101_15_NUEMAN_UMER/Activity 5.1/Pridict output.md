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
 - value of v  address of V
 - address_of V  address of ptr2
 - address of Arr1  address of Arr1 
 -  address of Arr1[2]  address_of_ptr1 

- value of v  address_of_V
- address_of_V  address_of_ptr2
- address_of_Arr2   address_of_Arr2
- address_of_Arr2[2]  address_of_ptr1

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
	   k=4 x=950 y=3000
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
     
Line	Value
	i	j	ptr	    pptr
4	5	10     0x37129	   dangling
5	5	10     0x37129	   0x1fc825
6	3	10     0x37129	   0x1fc825
7	7	10     0x37129	   0x1fc825	
8	7	10     0x5863a	   0x1fc825
9	7	9      0x5863a	   0x1fc825	
10	7	9      0x37129	   0x1fc825	
11	-2	9      0x37129	   0x1fc825	
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
         5      address of 5
	 5      address of 5 after increament
	 10     address of 10 after increament
	 10     address of 10 
	 11     address of 11 
	 12     address of 12 
	 12     address of 12 
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
       Mark[0][2]=24
       Mark[1][3]=30
       Mark[2][2]=40
