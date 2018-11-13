/* Pseudo Code written in c since I don't know C++ */
/* Can also work with just one line at a time */
#define UNDERSCORE '_'

void parse(FILE* open_file, int num_of_lines)
{
	int character, line = 0;
	for( line; line < num_of_lines; line++ )
	{
		//determine line length and make into a string
		char* line; = //take line from file and make it into str
		int line_length; = //find length 
		for( character = 0; character < line_length; character++ )
		{
			if( line[ character ] == UNDERSCORE )
			{
				//skip curly brace
				//get the alphanumeric characters
				//convert characters to unicode by removing _{}
				//display unicode characters to scrren
			}
			//more conditionals for different escape sequences
			if(){}
			if(){}
		}
	}
}