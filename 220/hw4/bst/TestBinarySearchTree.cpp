// Mark Weiss, Data Structures and Algorithm Analysis in C++, 4th edition
#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

    // Test program
int main( )
{
    BinarySearchTree<int> t;
    int NUMS = 40;
    const int GAP  =   1;
    int i;

    cout << "Checking... (no more output means success)" << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );

    for( i = 1; i < NUMS; i+= 2 )
        t.remove( i );

    
    cout << "Printing tree\n";
    if( NUMS <= 40 )
        t.printTree( );
    cout << "Testing floorceiling\n";
    const int test = 7;
    cout <<"Test value : " << test << '\n';
    int f = -1;
    int c = INT_MAX;
    t.floorceiling(test, f, c);
    if( t.findMin( ) != 2 || t.findMax( ) != NUMS - 2 )
        cout << "FindMin or FindMax error!" << endl;

    for( i = 2; i < NUMS; i+=2 )
        if( !t.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i+=2 )
    {
        if( t.contains( i ) )
            cout << "Find error2!" << endl;
    }

    BinarySearchTree<int> t2;
    t2 = t;

    for( i = 2; i < NUMS; i+=2 )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;

    for( i = 1; i < NUMS; i+=2 )
    {
        if( t2.contains( i ) )
            cout << "Find error2!" << endl;
    }
    cout << "Removing elements and printing tree...\n";
    for(int i = 10; i < 30; i++){
        t.remove(i);
    }
    t.printTree();
    const int test2 = 40000;
    cout << "Test value: "<<test2 << '\n';
    f= -1; c = INT_MAX;
    t.floorceiling(test2, f, c);

    f= -1; c = INT_MAX;
    const int test3 = 28;
    t.floorceiling(test3, f, c);
    cout << "Test value: "<<test3 << '\n';
    cout << "Clearing tree...\n";
    t.makeEmpty();
    t.printTree();
    f = -1; c = INT_MAX;
    t.floorceiling(GAP, f,c);
    cout << "Finished testing" << endl;

    return 0;
}
