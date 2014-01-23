#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <functional>
#include <list>
#include <sstream>

using namespace std;

string BitDecompressHelper( char ch );

int main( int argc, char** argv )
{
	char ch;
	double i = 0, j = 1; 
	ifstream inf("blank101 - In Shadows and Darkness");
	while( !inf.eof() )
	{
		//if( i > ( 1024 * 1410 ) ) { cout << "End of file" << endl; break; }
		inf >> ch;
		i++;
		if( i == ( 100000000 * j )) 
		{ 
			stringstream out;
			out.precision(0);
			out << fixed << i;
			string temp = out.str();

			int num = 0;
			for(int d = temp.size() - 3; d >= 1; d-=3)
			temp.insert(d,",");
			
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"
				 << "HERE: " << temp << " => " << ch; 
				 j++; 
		}
	}
	cout << endl << "Size: " << i << endl;
	inf.close();
	
	//ifstream inf("blank101 - In Shadows and Darkness");
	//ofstream outf("Test.out");
	// while( !inf.eof() )
	// {
		// inf >> noskipws >> ch;
		// outf << BitDecompressHelper( ch );
		// if( i == int( round( fsize * .05 ) ) ) cout << "5%" << endl;
		// if( i == int( round( fsize * .10 ) ) ) cout << "10%" << endl;
		// if( i == int( round( fsize * .15 ) ) ) cout << "15%" << endl;
		// if( i == int( round( fsize * .20 ) ) ) cout << "20%" << endl;
		// if( i == int( round( fsize * .25 ) ) ) cout << "25%" << endl;
		// if( i == int( round( fsize * .30 ) ) ) cout << "30%" << endl;
		// if( i == int( round( fsize * .35 ) ) ) cout << "35%" << endl;
		// if( i == int( round( fsize * .40 ) ) ) cout << "40%" << endl;
		// if( i == int( round( fsize * .45 ) ) ) cout << "45%" << endl;
		// if( i == int( round( fsize * .50 ) ) ) cout << "50%" << endl;
		// if( i == int( round( fsize * .55 ) ) ) cout << "55%" << endl;
		// if( i == int( round( fsize * .60 ) ) ) cout << "60%" << endl;
		// if( i == int( round( fsize * .65 ) ) ) cout << "65%" << endl;
		// if( i == int( round( fsize * .70 ) ) ) cout << "70%" << endl;
		// if( i == int( round( fsize * .75 ) ) ) cout << "75%" << endl;
		// if( i == int( round( fsize * .80 ) ) ) cout << "80%" << endl;
		// if( i == int( round( fsize * .85 ) ) ) cout << "85%" << endl;
		// if( i == int( round( fsize * .90 ) ) ) cout << "90%" << endl;
		// if( i == int( round( fsize * .95 ) ) ) cout << "95%" << endl;
		// if( i == int( round( fsize * .96 ) ) ) cout << "96%" << endl;
		// if( i == int( round( fsize * .97 ) ) ) cout << "97%" << endl;
		// if( i == int( round( fsize * .98 ) ) ) cout << "98%" << endl;
		// if( i == int( round( fsize * .99 ) ) ) cout << "99%" << endl;
		// i++;
	// }
	//inf.close();
	//outf.close();
}

string BitDecompressHelper( char ch )
{
	if( ch == char( 0 ) ) return "00000000";
	if( ch == char( 1 ) ) return "00000001";
	if( ch == char( 2 ) ) return "00000010";
	if( ch == char( 3 ) ) return "00000011";
	if( ch == char( 4 ) ) return "00000100";
	if( ch == char( 5 ) ) return "00000101";
	if( ch == char( 6 ) ) return "00000110";
	if( ch == char( 7 ) ) return "00000111";
	if( ch == char( 8 ) ) return "00001000";
	if( ch == char( 9 ) ) return "00001001";
	if( ch == char( 10 ) ) return "00001010";
	if( ch == char( 11 ) ) return "00001011";
	if( ch == char( 12 ) ) return "00001100";
	if( ch == char( 13 ) ) return "00001101";
	if( ch == char( 14 ) ) return "00001110";
	if( ch == char( 15 ) ) return "00001111";
	if( ch == char( 16 ) ) return "00010000";
	if( ch == char( 17 ) ) return "00010001";
	if( ch == char( 18 ) ) return "00010010";
	if( ch == char( 19 ) ) return "00010011";
	if( ch == char( 20 ) ) return "00010100";
	if( ch == char( 21 ) ) return "00010101";
	if( ch == char( 22 ) ) return "00010110";
	if( ch == char( 23 ) ) return "00010111";
	if( ch == char( 24 ) ) return "00011000";
	if( ch == char( 25 ) ) return "00011001";
	if( ch == char( 26 ) ) return "00011010";
	if( ch == char( 27 ) ) return "00011011";
	if( ch == char( 28 ) ) return "00011100";
	if( ch == char( 29 ) ) return "00011101";
	if( ch == char( 30 ) ) return "00011110";
	if( ch == char( 31 ) ) return "00011111";
	if( ch == char( 32 ) ) return "00100000";
	if( ch == char( 33 ) ) return "00100001";
	if( ch == char( 34 ) ) return "00100010";
	if( ch == char( 35 ) ) return "00100011";
	if( ch == char( 36 ) ) return "00100100";
	if( ch == char( 37 ) ) return "00100101";
	if( ch == char( 38 ) ) return "00100110";
	if( ch == char( 39 ) ) return "00100111";
	if( ch == char( 40 ) ) return "00101000";
	if( ch == char( 41 ) ) return "00101001";
	if( ch == char( 42 ) ) return "00101010";
	if( ch == char( 43 ) ) return "00101011";
	if( ch == char( 44 ) ) return "00101100";
	if( ch == char( 45 ) ) return "00101101";
	if( ch == char( 46 ) ) return "00101110";
	if( ch == char( 47 ) ) return "00101111";
	if( ch == char( 48 ) ) return "00110000";
	if( ch == char( 49 ) ) return "00110001";
	if( ch == char( 50 ) ) return "00110010";
	if( ch == char( 51 ) ) return "00110011";
	if( ch == char( 52 ) ) return "00110100";
	if( ch == char( 53 ) ) return "00110101";
	if( ch == char( 54 ) ) return "00110110";
	if( ch == char( 55 ) ) return "00110111";
	if( ch == char( 56 ) ) return "00111000";
	if( ch == char( 57 ) ) return "00111001";
	if( ch == char( 58 ) ) return "00111010";
	if( ch == char( 59 ) ) return "00111011";
	if( ch == char( 60 ) ) return "00111100";
	if( ch == char( 61 ) ) return "00111101";
	if( ch == char( 62 ) ) return "00111110";
	if( ch == char( 63 ) ) return "00111111";
	if( ch == char( 64 ) ) return "01000000";
	if( ch == char( 65 ) ) return "01000001";
	if( ch == char( 66 ) ) return "01000010";
	if( ch == char( 67 ) ) return "01000011";
	if( ch == char( 68 ) ) return "01000100";
	if( ch == char( 69 ) ) return "01000101";
	if( ch == char( 70 ) ) return "01000110";
	if( ch == char( 71 ) ) return "01000111";
	if( ch == char( 72 ) ) return "01001000";
	if( ch == char( 73 ) ) return "01001001";
	if( ch == char( 74 ) ) return "01001010";
	if( ch == char( 75 ) ) return "01001011";
	if( ch == char( 76 ) ) return "01001100";
	if( ch == char( 77 ) ) return "01001101";
	if( ch == char( 78 ) ) return "01001110";
	if( ch == char( 79 ) ) return "01001111";
	if( ch == char( 80 ) ) return "01010000";
	if( ch == char( 81 ) ) return "01010001";
	if( ch == char( 82 ) ) return "01010010";
	if( ch == char( 83 ) ) return "01010011";
	if( ch == char( 84 ) ) return "01010100";
	if( ch == char( 85 ) ) return "01010101";
	if( ch == char( 86 ) ) return "01010110";
	if( ch == char( 87 ) ) return "01010111";
	if( ch == char( 88 ) ) return "01011000";
	if( ch == char( 89 ) ) return "01011001";
	if( ch == char( 90 ) ) return "01011010";
	if( ch == char( 91 ) ) return "01011011";
	if( ch == char( 92 ) ) return "01011100";
	if( ch == char( 93 ) ) return "01011101";
	if( ch == char( 94 ) ) return "01011110";
	if( ch == char( 95 ) ) return "01011111";
	if( ch == char( 96 ) ) return "01100000";
	if( ch == char( 97 ) ) return "01100001";
	if( ch == char( 98 ) ) return "01100010";
	if( ch == char( 99 ) ) return "01100011";
	if( ch == char( 100 ) ) return "01100100";
	if( ch == char( 101 ) ) return "01100101";
	if( ch == char( 102 ) ) return "01100110";
	if( ch == char( 103 ) ) return "01100111";
	if( ch == char( 104 ) ) return "01101000";
	if( ch == char( 105 ) ) return "01101001";
	if( ch == char( 106 ) ) return "01101010";
	if( ch == char( 107 ) ) return "01101011";
	if( ch == char( 108 ) ) return "01101100";
	if( ch == char( 109 ) ) return "01101101";
	if( ch == char( 110 ) ) return "01101110";
	if( ch == char( 111 ) ) return "01101111";
	if( ch == char( 112 ) ) return "01110000";
	if( ch == char( 113 ) ) return "01110001";
	if( ch == char( 114 ) ) return "01110010";
	if( ch == char( 115 ) ) return "01110011";
	if( ch == char( 116 ) ) return "01110100";
	if( ch == char( 117 ) ) return "01110101";
	if( ch == char( 118 ) ) return "01110110";
	if( ch == char( 119 ) ) return "01110111";
	if( ch == char( 120 ) ) return "01111000";
	if( ch == char( 121 ) ) return "01111001";
	if( ch == char( 122 ) ) return "01111010";
	if( ch == char( 123 ) ) return "01111011";
	if( ch == char( 124 ) ) return "01111100";
	if( ch == char( 125 ) ) return "01111101";
	if( ch == char( 126 ) ) return "01111110";
	if( ch == char( 127 ) ) return "01111111";
	if( ch == char( 128 ) ) return "10000000";
	if( ch == char( 129 ) ) return "10000001";
	if( ch == char( 130 ) ) return "10000010";
	if( ch == char( 131 ) ) return "10000011";
	if( ch == char( 132 ) ) return "10000100";
	if( ch == char( 133 ) ) return "10000101";
	if( ch == char( 134 ) ) return "10000110";
	if( ch == char( 135 ) ) return "10000111";
	if( ch == char( 136 ) ) return "10001000";
	if( ch == char( 137 ) ) return "10001001";
	if( ch == char( 138 ) ) return "10001010";
	if( ch == char( 139 ) ) return "10001011";
	if( ch == char( 140 ) ) return "10001100";
	if( ch == char( 141 ) ) return "10001101";
	if( ch == char( 142 ) ) return "10001110";
	if( ch == char( 143 ) ) return "10001111";
	if( ch == char( 144 ) ) return "10010000";
	if( ch == char( 145 ) ) return "10010001";
	if( ch == char( 146 ) ) return "10010010";
	if( ch == char( 147 ) ) return "10010011";
	if( ch == char( 148 ) ) return "10010100";
	if( ch == char( 149 ) ) return "10010101";
	if( ch == char( 150 ) ) return "10010110";
	if( ch == char( 151 ) ) return "10010111";
	if( ch == char( 152 ) ) return "10011000";
	if( ch == char( 153 ) ) return "10011001";
	if( ch == char( 154 ) ) return "10011010";
	if( ch == char( 155 ) ) return "10011011";
	if( ch == char( 156 ) ) return "10011100";
	if( ch == char( 157 ) ) return "10011101";
	if( ch == char( 158 ) ) return "10011110";
	if( ch == char( 159 ) ) return "10011111";
	if( ch == char( 160 ) ) return "10100000";
	if( ch == char( 161 ) ) return "10100001";
	if( ch == char( 162 ) ) return "10100010";
	if( ch == char( 163 ) ) return "10100011";
	if( ch == char( 164 ) ) return "10100100";
	if( ch == char( 165 ) ) return "10100101";
	if( ch == char( 166 ) ) return "10100110";
	if( ch == char( 167 ) ) return "10100111";
	if( ch == char( 168 ) ) return "10101000";
	if( ch == char( 169 ) ) return "10101001";
	if( ch == char( 170 ) ) return "10101010";
	if( ch == char( 171 ) ) return "10101011";
	if( ch == char( 172 ) ) return "10101100";
	if( ch == char( 173 ) ) return "10101101";
	if( ch == char( 174 ) ) return "10101110";
	if( ch == char( 175 ) ) return "10101111";
	if( ch == char( 176 ) ) return "10110000";
	if( ch == char( 177 ) ) return "10110001";
	if( ch == char( 178 ) ) return "10110010";
	if( ch == char( 179 ) ) return "10110011";
	if( ch == char( 180 ) ) return "10110100";
	if( ch == char( 181 ) ) return "10110101";
	if( ch == char( 182 ) ) return "10110110";
	if( ch == char( 183 ) ) return "10110111";
	if( ch == char( 184 ) ) return "10111000";
	if( ch == char( 185 ) ) return "10111001";
	if( ch == char( 186 ) ) return "10111010";
	if( ch == char( 187 ) ) return "10111011";
	if( ch == char( 188 ) ) return "10111100";
	if( ch == char( 189 ) ) return "10111101";
	if( ch == char( 190 ) ) return "10111110";
	if( ch == char( 191 ) ) return "10111111";
	if( ch == char( 192 ) ) return "11000000";
	if( ch == char( 193 ) ) return "11000001";
	if( ch == char( 194 ) ) return "11000010";
	if( ch == char( 195 ) ) return "11000011";
	if( ch == char( 196 ) ) return "11000100";
	if( ch == char( 197 ) ) return "11000101";
	if( ch == char( 198 ) ) return "11000110";
	if( ch == char( 199 ) ) return "11000111";
	if( ch == char( 200 ) ) return "11001000";
	if( ch == char( 201 ) ) return "11001001";
	if( ch == char( 202 ) ) return "11001010";
	if( ch == char( 203 ) ) return "11001011";
	if( ch == char( 204 ) ) return "11001100";
	if( ch == char( 205 ) ) return "11001101";
	if( ch == char( 206 ) ) return "11001110";
	if( ch == char( 207 ) ) return "11001111";
	if( ch == char( 208 ) ) return "11010000";
	if( ch == char( 209 ) ) return "11010001";
	if( ch == char( 210 ) ) return "11010010";
	if( ch == char( 211 ) ) return "11010011";
	if( ch == char( 212 ) ) return "11010100";
	if( ch == char( 213 ) ) return "11010101";
	if( ch == char( 214 ) ) return "11010110";
	if( ch == char( 215 ) ) return "11010111";
	if( ch == char( 216 ) ) return "11011000";
	if( ch == char( 217 ) ) return "11011001";
	if( ch == char( 218 ) ) return "11011010";
	if( ch == char( 219 ) ) return "11011011";
	if( ch == char( 220 ) ) return "11011100";
	if( ch == char( 221 ) ) return "11011101";
	if( ch == char( 222 ) ) return "11011110";
	if( ch == char( 223 ) ) return "11011111";
	if( ch == char( 224 ) ) return "11100000";
	if( ch == char( 225 ) ) return "11100001";
	if( ch == char( 226 ) ) return "11100010";
	if( ch == char( 227 ) ) return "11100011";
	if( ch == char( 228 ) ) return "11100100";
	if( ch == char( 229 ) ) return "11100101";
	if( ch == char( 230 ) ) return "11100110";
	if( ch == char( 231 ) ) return "11100111";
	if( ch == char( 232 ) ) return "11101000";
	if( ch == char( 233 ) ) return "11101001";
	if( ch == char( 234 ) ) return "11101010";
	if( ch == char( 235 ) ) return "11101011";
	if( ch == char( 236 ) ) return "11101100";
	if( ch == char( 237 ) ) return "11101101";
	if( ch == char( 238 ) ) return "11101110";
	if( ch == char( 239 ) ) return "11101111";
	if( ch == char( 240 ) ) return "11110000";
	if( ch == char( 241 ) ) return "11110001";
	if( ch == char( 242 ) ) return "11110010";
	if( ch == char( 243 ) ) return "11110011";
	if( ch == char( 244 ) ) return "11110100";
	if( ch == char( 245 ) ) return "11110101";
	if( ch == char( 246 ) ) return "11110110";
	if( ch == char( 247 ) ) return "11110111";
	if( ch == char( 248 ) ) return "11111000";
	if( ch == char( 249 ) ) return "11111001";
	if( ch == char( 250 ) ) return "11111010";
	if( ch == char( 251 ) ) return "11111011";
	if( ch == char( 252 ) ) return "11111100";
	if( ch == char( 253 ) ) return "11111101";
	if( ch == char( 254 ) ) return "11111110";
	if( ch == char( 255 ) ) return "11111111";
	cout << "unrecognized character in file" << endl;
	exit(1);
}