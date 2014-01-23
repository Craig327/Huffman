//Walter Gates and Craig Smith
//Sites used for general reference
	// Stackoverflow.com
	// cplusplus.com


#include "Compress.h"

int main( int argc, char** argv ) {
	
	if( argc == 1 ) cout << "Please Specify Filename" << endl;
	if( argc == 2 )
	{
		OurFile file( argv[1] );
		return 0;
	}
	else cout << "Too many arguments" << endl;
    return 0;
}

















