#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

ifstream input_file_ids("studentId.txt", ios::in);
ifstream input_file_projects("studentProjectGrades.txt", ios::in);
ifstream input_file_examGrades("studentExamGrades.txt", ios::in);
ifstream input_file_names("studentNames.txt", ios::in);
ofstream output_file_pEP1("out.txt", ios::out);

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

		TOTAL_GRADE(int);

	private: //Allowed due to no inheritance, once heritance is required change to protected.

		int students = 100, exams = 20, projects = 20;
		int ids[students], examGrades[students][exams], projectGrades[students][projects];
		
		char LastName[students][12]; //12 Character cap for last name.
		char FirstName[students][12];
}

SORT_EVERYTHING::SORT_EVERYTHING(int x, int y, int z){
	
	//x is noof students, y is noof projects, z is noof exams.
	int i, j;
	output_file_pEP1 << "+ PROGRAM IS BOOTED +" << endl;
	output_file_pEP1 << "+ OUTPUT FROM SORT_EVERYTHING CONSTRUCTOR + " << endl;
	if (x < students && x > 0 && y < projects && y > 0 && z < exams && z > 0){
		
		for(i=0; i < x; i++){
			input_file_ids >> ids[x];
		}
		for(i=0; i < x; i++){
			for(j = 0; j < y; j++){	
				input_file_projects >> grades[i][j];
			}
		}
		for(i = 0; i < x; i++){
			for(j = 0; j < z; j++){
				input_file_projects >> grades[i][j];
			}
		}
		for(i = 0; i < x; i++){
			input_file_names >> LastName[i] >> FirstName[i];
		}
	}
	else {
		output_file_pEP1 << "+ NOT VALID INPUT" << endl;
	}
	output_file_pEP1 << "+ AN OBJECT OF SORT_EVERYTHING IS CREATED +" << endl;
}












