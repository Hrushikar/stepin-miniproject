# TEST PLAN:
***
## High-level test plan:
***
**Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** | **Type of Test**
------------|-----------------|-------------|-------------|----------------|-----------------
H_01|Entering "1" performs Simple Calculations|1|Perform Simple Calculations|Performed Simple Calculations|Requirement and Scenario based
H_02|Entering "2" performs Matrix Calculations|2|Perform Matrix Calculations|Performed Matrix Calculations|Requirement and Scenario based
H_03|Entering "3" performs Trigonometric Calculations|3|Perform Trigonometric Calculations|Performed Trigonometric Calculations|Requirement and Scenario based
H_04|Entering values other than 1,2 and 3 will print "Sorry. Value not accepted" and exit|7|Print "Sorry. Value not accepted" and exit|Prints "Sorry. Value not accepted" and exits|Boundary based

***

## Low-level test plan:
***
**Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** | **Type of Test**
------------|-----------------|-------------|-------------|----------------|-----------------
L_01|Entering "1"  inside "Simple Calculations" performs Addition|1|Perform Addition|Performs Addition|Requirement and Scenario based
L_02|Entering "2"  inside "Matrix Calculations" performs Matrix Subtraction|2|Perform Matrix Subtraction|Performs Matrix Subtraction|Requirement and Scenario based
L_03|Entering "3"  inside "Trigonometric Calculations" performs Tangent operation|3|Perform Tangent operation|Performs Tangent operation|Requirement and Scenario based
L_04|Entering values other than "1, 2, 3, 4, 5" inside "Simple Calculations" will print "Sorry. Value not accepted" and exit|9|Print "Sorry. Value not accepted" and exit|Prints "Sorry. Value not accepted" and exits|Boundary based
L_05|Entering values other than "1, 2, 3, 4" inside "Matrix Calculations" will print "Sorry. Value not accepted" and exit|0|Print "Sorry. Value not accepted" and exit|Prints "Sorry. Value not accepted" and exits|Boundary based
L_06|Entering values other than "1, 2, 3, 4, 5, 6" inside "Tigonometric Calculations" will print "Sorry. Value not accepted" and exit|7|Print "Sorry. Value not accepted" and exit|Prints "Sorry. Value not accepted" and exits|Boundary based
