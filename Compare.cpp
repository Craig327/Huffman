#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

bool FileCompare()
{
	ifstream inf1, inf2;
	inf1.open( "USConstitution.txt" );
	inf2.open( "DecompressTest.out" );
	// inf1.open( "Compressedout1.out" );
	// inf2.open( "Compressedout2.out" );
	char ch1, ch2;
	int i = 0;
	while( !inf1.eof() && !inf2.eof() )
	{
		inf1 >> noskipws >> ch1;
		inf2 >> noskipws >> ch2;
		if( int(ch1) != int(ch2) ) { cout << "i = " << i << endl << "ch1 => " << int(ch1) << " ch2 => " << int(ch2) << endl; cout.flush(); return false; }
		i++;
	}
	
	if( inf1.eof() && inf2.eof() ) return true;
	else return false;
}

int main( int argc, char** argv )
{
	if( !FileCompare() ) cout << "Files were not the same" << endl;
	else cout << "Files Were The Same!" << endl;
	return 0;
}