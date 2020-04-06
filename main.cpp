//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_Licon

4-06-2020


create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack> //for stack
#include <set> // for set
#include <utility> // for pair
#include <map> // for map

using namespace std; 

//for Map (must be written above int main() )
typedef map < string,int > MapT;
typedef MapT :: const_iterator MapIterT;

//All 3 below Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      {vec = v;} 

void print() 
/// print the value of vector
{for (int i = 0; i < vec.size(); i++) {cout << vec[i] << " ";}} 

};

//** We can also initialize using initialer list. **

class MyClassVector2 
{ 
    vector<int> vec2; 
  
public: 
    MyClassVector2 (vector<int> v) : vec2(v) 
    { } 
void print() 
/// print the value of vector
{for (int i = 0; i < vec2.size(); i++) cout << vec2[i] << " "; } 

};  

/* 
When class member is a vector a reference.
In C++, references must be initialized using initializer list.
*/

class MyClassVector3 
{ 
    vector<int>& vec3; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3 (vector<int>& arr) : vec3(arr) 
    { } 
void print() 
/// print the value of vector
{for (int i = 0; i < vec3.size(); i++) cout << vec3[i] << " "; } 

};

bool less_than_7( int value )

{return value < 7;}


//***********************************************************

int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);

    //add 3 elements to the vi vector
    vi.push_back(4);
    vi.push_back(5);
    vi.push_back(6);

   // add 3 elements to the vs vector
    vs.push_back("Mind");
    vs.push_back("Equals");
    vs.push_back("Blown!");
//************************************************
   // display the 3 elements in the vd vector
   cout <<"\nValues in vd: \n"; 
   for(double vals : vd)

   {cout << vals << endl;}

   cout <<"\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)

   {cout << vd[i] << endl;}

cout <<"\n***********************************"<<endl;
    //display the 3 elements in the vi vector
   cout <<"\nValues in vi: \n"; 
   for(double vals : vi)

   {cout << vals << endl;}

   cout <<"\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vi.size(); i++)

   {cout << vi[i] << endl;}

cout <<"\n***********************************"<<endl;
   // display the 3 elements in the vs vector
   
   cout <<"\nValues in vs: \n"; 
   for(string vals : vs)

   { cout << vals << endl; }

   cout <<"\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vs.size(); i++)

   { cout << vs[i] << endl; }
//*************************************************

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout <<"\nVector_as_Class_Member\n"<< endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3

  /****Section_Name***Vector_as_Class_Member2*/

   cout <<"\n\nVector_as_Class_Member2\n"<< endl; 
    vector<int> vec2; 
        for (int i = 1; i <= 5; i++) 
            vec2.push_back(i); 
        MyClassVector2 obj2(vec); 
        obj.print();

  /****Section_Name***Vector_as_Class_Member3*/

   cout <<"\n\nVector_as_Class_Member3\n"<< endl; 
    vector<int> vec3; 
        for (int i = 1; i <= 5; i++) 
            vec3.push_back(i); 
        MyClassVector3 obj3(vec); 
        obj.print();


    /****Section_Name***STL_Iterators*/ 

cout <<"\n\n***STL_Iterators***\n"<< endl;

  vector<int> vint(10); // Vector with 10 integer numbers
  vint[ 0 ] = 10;
  vint[ 1 ] = 20;
  vint[ 2 ] = 30;
  vint[ 3 ] = 40;
  vint[ 4 ] = 50;
  vint[ 5 ] = 60;
  vint[ 6 ] = 70;
  vint[ 7 ] = 80;
  vint[ 8 ] = 90;
  vint[ 9 ] = 100;

  // Display elements of the vector:

  vector < int > :: iterator it;
  
  for ( it = vint.begin(); it != vint.end(); ++it ) 

  // Like pointer, iterator is derefernced to
  // access the value of the element pointed by it:

  {cout << " " << *it;}


    /****Section_Name*** Stack*/

//cout <<"\n\n***Stack***\n"<< endl;

  stack < int > st;

  // push number on the stack
  st.push( 100 );
  assert( st.size() == 1 ); //verify one element is on the stack
  assert( st.top() == 100 ); //verify element value

  // assign new value
  st.top() = 456; 
  assert( st.top() == 456 );

  // remove element
  st.pop(); 
  assert( st.empty() == true );


/*  Write comments that help one better understand what the code is doing.

- A Stack is a container that permits to insert and extract its elements only from the top of the container

*/
    /****Section_Name**** Set*/

cout <<"\n\n***Set***\n"<< endl;

    //Write the code as presented in: 3. std::set

set < int > iset; // set of unique integer numbers

  iset.insert ( 11 ); // populate set with some values
  iset.insert ( -11 );
  iset.insert ( 55 );
  iset.insert ( 22 );
  iset.insert ( 22 );

  if ( iset.find( 55 ) != iset.end() ) 
   
  //is value already stored?

    { iset.insert( 55 ); }

  assert ( iset.size() == 4); // sanity check :-)
  set < int > :: iterator it1;
  
  for ( it1 = iset.begin(); it1 != iset.end(); it1++ )

    { cout << " " << *it1; }

/* Write comments that help one better understand what the code is doing.

- A set ia a container that holds unique elements.

*/

    /****Section_Name****Pair_Structure*/

//cout <<"\n\n***Pair_Structure***\n"<< endl;

    //Write the code as presented in: 4. std::pair structure

    pair < string, string > strstr;
    strstr.first = "Hello";
    strstr.second = "World";

    pair < int, string > intstr;
    intstr.first = 1;
    intstr.second = "one";

    pair< string, int > strint ( "two", 2 );
    assert( strint.first == "two" );
    assert( strint.second == 2 );



/* Write comments that help one better understand what the code is doing.

- A pair is much like a container that holds exactly two elements

- The pair is defined in the standard header named utility

*/

    /****Section_Name**** Map_Insert*/

//cout <<"\n\n***Map_Insert***\n"<< endl;

    //Write the code as presented in: 14. std::map::insert

  MapT amap;

  pair < MapIterT, bool > result =
    amap.insert ( make_pair( "Fred" , 45 ) );

  assert ( result.second == true );

  assert ( result.first->second == 45 );

  result = amap.insert ( make_pair ( "Fred" , 54 ) );

// Fred was already in the map, and result.first
// simply points there now:
  assert ( result.second == false );
  assert ( result.first->second == 45 );

/*Write comments that help one better understand what the code is doing.

- Use insert() to put in a new item only if isnt there

*/
    /****Section_Name****Map_Summary*/

cout <<"\n\n***Map_Summary***\n"<< endl;

    //Write the code as presented in: 16. Map summary

    map< string, string > phone_book;
    phone_book [ "411" ] = "Directory";
    phone_book [ "911" ] = "Emergency";
    phone_book [ "508-678-2811" ] = "BCC";
      if ( phone_book.find ( "411" ) != phone_book.end() ) 
  {

      phone_book.insert( 
        make_pair( 
          string ( "411" ), 
          string ( "Directory" ) 
          )
      );
  }

  assert ( phone_book.size() == 3 );
  map< string, string > :: const_iterator it3;
    for ( it3 = phone_book.begin(); it3 != phone_book.end(); ++it3 )

{ cout << " " << it3->first << " " << it3->second << " " << endl; }



/*Write comments that help one better understand what the code is doing.

- A Map is a container that holds unique pairs of keys and values.

- The element in std::map are always sorted bt its keys

- Each element of the map is formed by the combination of the key value and a mapped value.

- Map iterator access both the key and the mapped value at the same time.

*/


    /****Section_Name**** Sort_Algorithm*/

//cout <<"\n\n***Sort_Algorithm***\n"<< endl;

    //Write the code as presented in: 23. sort example

int arr[ 100 ];
sort (arr, arr + 100 );

vector < int > v1;
sort( v1.begin(), v1.end() );

/*

Write comments that help one better understand what the code is doing.

- will sort in vector

*/

    /****Section_Name****Predicate_Algorithm*/

//cout <<"\n\n****Predicate_Algorithm***\n" << endl;

    //Write the code as presented in: 25. count_if and predicate function

//Starts on line 74

vector < int > v2;
int count_less = std::count_if (v2.begin(), v2.end(), less_than_7 );

/*

Write comments that help one better understand what the code is doing.

- returns numbers that are less_than_7

*/    

      return 0; 
 }