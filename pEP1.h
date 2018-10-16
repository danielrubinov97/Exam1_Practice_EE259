#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

ifstream input_file_ids("studentId.txt", ios::in);
ifstream input_file_projects("studentProjectGrades.txt", ios::in);
ifstream input_file_examGrades("studentExamGrades.txt", ios::in);
ifstream input_file_names("studentNames.txt", ios::in);
ofstream out_file_pEP1("out.txt", ios::out);

class SORT_EVERYTHING {
	public:  //Allows for future inheritance with possible future review projects.
		 //Allows for easy access to the below methods down the line.
	
		SORT_EVERYTHING(int, int, int); // Use case is: w.SORT_EVERYTHING(x, y, x, "ASCENDING")
							// This is a constructor that takes in parameters of noof students, noof projects, and noof examGrades.
		LIST_ID(int); //Job is to print ids in the ids array in which ever order they are in.
			      //The parameter is takes if the orientation of the output meaning,
			      //to output just as in the array or in reverse order. Must check for
			      //invalid inputs.
		LIST_EXAMGRADES(int); //Either lists grades by exam # or by studentID.
				      //A different method handles 
				      //listing grades by Name (First OR LAST).
		LIST_PROJECTGRADES(int); //Same Job as previous method, and different method handles name filter.

		LIST_BYNAME_EXAMGRADES(char *); //Prioritizes last name, finds if first last name 
					       //exists then checks for first name. 
					       //Single input possible hick-up with 
					       //first and last name inputs.

		LIST_BYNAME_PROJECTGRADES(char *); //Same as previous method.

		EXAMGRADES_RANGE(int);//Two possible inputs, a 4 digit ID or a up to a 3 digit exam number.					 //Possible down the line issue because these grades 
				      //aren't weighed the same.

		PROJECTGRADES_RANGE(int);//Same as previous method, except all projects are weighed the same.

		SORT_ID(char *);//Sorts ideas by value since IDs are all 4 digit numbers.

		SORT_EXAMGRADES(char *);

		SORT_PROJECTGRADES(char *);	

		SORT_NAME(char *);

}
