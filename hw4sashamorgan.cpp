/**
* @file <HW3-SashaMorgan>
* <This program allows users to input data into the system which returns the output of the shapes of a triangle, diamond, and hill.
* @author <Sasha Morgan, sasha97>
* @date   <September 13, 2015>
*
* Virginia Tech Honor Code Pledge
* On my honor:
*
* - I have not discussed the C++ language code in my program with
* anyone other than my instructor or the teaching assistants
* assigned to this course.
* - I have not used C++ language code obtained from another student,
* or any other unauthorized source, either modified or unmodified.
* - If any C++ language code or documentation used in my program
* was obtained from another source, such as a text book of coarse
* notes, that has been clearly noted with a proper citation in
* the comments of my program.
* - I have not designed this program in such a way as to defeat or
* interfere with the normal operation of the Web-Cat Server.
*
* <Sasha Morgan>
*/

#include <iostream>
using namespace std;


int rowNum;//declaration of rowNum
int x, y, z;//declaration of x,y,z


int Hill(int rowNum){//begining of the hill function
	cout << "" << endl;//syntax 
	cout << "Hill:";// Draw the hill
	for (int x = 0; x <= (rowNum + 1) / 2; x++){
		for (int y = 0; y < 2 * x - 1; y++){
			cout << "*";
		}//end of for loopy

		cout << endl;//blank line
		
	}//end of for loop x
	cout << endl;//blank line
	return rowNum;
}
//beginning of the triangle function

int Triangle(int rowNum){
	
	int x = 1;
	// beginning of the space for loop
	for (int x = 1; x <= rowNum / 2 + 1; x++){
		for (int y = rowNum / 2 - x; y >= 0; y--){
			cout << " ";
		}//end of y
		//beginning fo the asterisk for loop
		for (int z = 0; z < 2 * x - 1; z++){
			cout << "*";
		}//end of z	
		cout << endl;//blank line
	}//end of x
	return rowNum;//return
}

//Beginning of the Diamond function 
int Diamond(int rowNum){
	//Diamond
	cout << "Diamond:" << endl; // display the diamond output
	//Top half of the diamond start
	Triangle(rowNum);
	//bottom half of the diamond start
	for (int x = 1; x <= rowNum / 2; x++){
		for (int y = 1; y <= x; y++){
			cout << " ";
		}//end of y
		//beginning of the asterisk for loop
		for (int z = 1; z <= rowNum - (x * 2); z++){
			cout << "*";
		}//end of z
		cout << endl;//blank line
	}//end of x	

	return rowNum;//ends the program
}

int main() // main frame
{

	// The maximum width of the diamond, hill, or triangle
	int x, y, z;
	cout << "Enter an odd number width: "; // User inputs the width
	cin >> rowNum;//retrieves input


	if (rowNum % 2 != 0){ //Makes sure the number is odd

		//beginning of hill
		
		Hill(rowNum);
		
		//Triangle
		cout << "Triangle:" << endl;// draw the triange display
		Triangle(rowNum);
		cout << endl;//blank line
		
		//Diamond
		Diamond(rowNum);
		return 0;
	}//end of odd display

	//even number portion of the if statement
	else{//even numbers
		while (rowNum % 2 == 0){//continual check for even number
			if (rowNum % 2 == 0){
				cout << "Enter an odd number width: ";//asks for a correct number
				cin >> rowNum;
			}//end of if statment

			if (rowNum % 2 != 0){
				//beginning of hill
				Hill(rowNum);
				//Triangle
				cout << "Triangle:" << endl;// draw the triange display
				Triangle(rowNum);
				cout << endl;//blank line
				//Diamond
				Diamond(rowNum);

			}//end of while
		}//end of else statment
	}
	return 0; // end of program
}//end of main frame