//#define __cplusplus 201103L
//#include <stdio.h>
//———————————————————————————————————————————————————————————————————————————————————————//
#include <memory.h>
#include <iostream>
#include <vector>
#include <algorithm>

//———————————————————————————————————————————————————————————————————————————————————————//
// Set USEMOVE to '1' to enable move semantics
// Set USEMOVE to '0' to disable it
// Try change USEMOVE and play with it
#define USEMOVE 1

//———————————————————————————————————————————————————————————————————————————————————————//
class T {
public:
  int* tab;

  T ( int v=0 ) : tab ( new int ) {
    *tab = v;
    std::cout << "T ctor " << tab << " " << *tab << std::endl;
  }


  ~T(){
    std::cout << "T dtor " << tab << std::endl;
    if ( tab ) delete tab;
  }

  T ( const T& o) : tab(new int){
    *tab = *o.tab;
    std::cout << "T ctor& " << tab << " " << *tab << std::endl;
  }

  T& operator=( const T& o ) {
    if( this == &o ) return *this;
    std::cout << "op=& " << o.tab << *tab << std::endl;
    delete tab;
    tab = new int;
    memcpy ( tab, o.tab, sizeof(int) );
    return *this;
  }

#if USEMOVE==1
  T ( T&& o ) {
    tab = o.tab;
    std::cout << "move && " << o.tab << std::endl;
    o.tab = nullptr;
  }

  T& operator=( T&& o ) {
    if( this == &o ) return *this;
    std::cout << "move op=&& " << tab << " " << o.tab << std::endl;
    auto t = tab;
    tab = o.tab;
    o.tab = t;
    return *this;
  }
#endif
  void show(){
    std::cout << tab << std::endl;
  }

  bool operator<( const T& other) const {
    return std::less<const int>()( *tab , *other.tab );
  }
};

//———————————————————————————————————————————————————————————————————————————————————————//
int main() {
  std::cout << "Move semantics" << std::endl << std::endl;

  std::vector<T> vt;  // pusta tablica
  vt.reserve(5);      // rezerwujemy z gory pamiec na obiekty

  std::cout << "Adding objects..." << std::endl;
  // dodajemy obiekty do tablicy
  vt.push_back ( T(2) );
  vt.push_back ( T(1) );
  vt.push_back ( T(4) );
  vt.push_back ( T(3) );
  vt.push_back ( T(5) );

  std::cout << std::endl << "Sorting..." << std::endl;
  std::sort ( vt.begin(), vt.end() );

  std::cout << std::endl << "After sort..." << std::endl;
  for ( T& tt : vt ) {
    std::cout << *tt.tab << std::endl;
  }

  std::cout << "End." << std::endl << std::endl;

  return 0;
}
