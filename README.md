# Exam1_Practice_EE259 Spec Sheet
### From Scratch Combination of Projects 0, 1, and 2. Possible improvements branch?

###### Possible fork into inheritance from scratch but with some optimizations for input files (sample_p0.h)

#### PROJECT 0:

##### Purpose of project 0:
	
	Write a C++ class definition called COUNTER which calculates the number of passing and failing grades in a list of grades.

*This doesn't make any sense because this is not the actual purpose of project 0. Even though this is stated on ho_p0.*

##### True purpose of project 0 is to:
	
	Instantiate (load into program) an object with students ids then,
	list the ids in specific orders (1, -1, and invalid).

###### Possibly look into altering p0.h where the program isn't limited to one file, and can be called in multiple times. So for ifstream input_file_p0 (VARIABLE, ios::in); where the VARIABLE is input the by the main user (using cin >> ).

##### So summary/spec of project 0 is to:
	
	Read a file of student Ids and collect the student Ids in an array to use later.
	Then create a method that uses these ids and lists them into an output file.

#### PROJECT 1:

##### Purpose of project 1:

	Write a C++ class definition called STUDENT_GRADE which will inherit from STUDENT_ID class as described below.

##### Summary/Spec of project 1 is to:

	Read a file of student grades and collect those grades into an array for later use.
	Must be able to list ids using p0.h implementation.
	List grades of a specific student by given ID.
	List the range of a specific exam.

###### Possibly look into altering p1.h where the program not only list the range of a specific exam but also list the range of a specific student's grades.

#### PROJECT 2:

##### Purpose of project 2:

	Write a C++ class definition called SORT_INFO which will perform to the following tasks. SORT_INFO class will inherit from STUDENT_GRADE class, which in turn inherits from STUDENT_ID class.

##### Summary/Spec of project 2 is to:

	Read a file of student names and save those names by last name and first name into two seperate arrays.
	Create a method to sort student ids in ascending or descending order; returns no values;
	Create a method to sort grades for a given exam in ascending or descending order; returns no values;
	Create a method to sort students by their last names in alphabetical or reverse alphabetical order; returns no values;

###### Possibily look into adding to p2.h by doing a similar alteration to what was suggested earlier for p1.h where possible second student grade method one that sorts students by highest average grade.

#### Review for Exam 1:

###### The following section highlights the spec of the review project in order to be prepared for exam 1. This section also combines the purposes of the first three projects into one none inherited project.


