#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main( int argc, char** argv )
{
	ifstream inf("a.out");
	ofstream outf("a2.out");
	string Convert;
	int i = 0;
	while( !inf.eof() )
	{//if( ch == char(0) ) return "00000000";
		getline( inf, Convert );
		outf << "if( ch == char( "
			 << i
			 << " ) ) return \""
			 << Convert
			 << "\";"
			 << endl;
		i++;
	}
	
	inf.close();
	outf.close();
	return 0;
}