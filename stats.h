/**
 * @file stats.h
 * @brief Header file for first week assignment. 
 *
 * First week assignments header file for the course "Introduction to Embedded Systems Software and Development Environments".
 *
 * @author Jon Gilvey
 * @date 3/18/2018
 *
 */

#ifndef __STATS_H__
#define __STATS_H__


/* No comments about declarations */ 


 /**

 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.

 *

 * The function takes the array and passes it to the functions "find_minimum", "find_maximum", "find_mean" and "find_median". The function then prints out the values these other functions return. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return The function does not return a value

 */

 void print_statistics(unsigned char* ucptr, unsigned int n);

 

 /**

 * @brief Given an array of data and a length, prints the array to the screen

 *

 * The function will take the array and then print out the values individually separated by commas. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return The function does not return a value

 */

void print_array(unsigned char* ucptr, unsigned int n);



 /**

 * @brief Given an array of data and a length, returns the median value

 *

 * The function will take the array, sort the array and then find the median of the array based off the number of elements in the array. The function will call "sort_array" to perform an initial sort. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return The median of the array, the data type will be unsigned char. 

 */

 unsigned char find_median(unsigned char* ucptr, unsigned int n);



 /**

 * @brief Given an array of data and a length, returns the mean.

 *

 * The function will return a floating number which will be the mean. This will be done by summing up the values in the array and then dividing by the total number of elements. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return Floating point number giving the mean. 

 */

 float find_mean(unsigned char* ucptr, unsigned int n);

 

 /**

 * @brief Given an array of data and a length, returns the maximum.

 *

 * The function will first call the "sort_array" function and return the zeroth value. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return An unsigned char which is the miniumum value of the array. 

 */

 unsigned char find_maximum(unsigned char* ucptr, unsigned int n);



 /**

 * @brief Given an array of data and a length, returns the minimum

 *

 * The function will first call the "sort_array" function and return the "n-1" value. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return An unsigned char which is the miniumum value of the array. 

 */

 unsigned char find_minimum(unsigned char* ucptr, unsigned int n);

 

 /**

 * @brief Given an array of data and a length, sorts the array from largest to smallest. 

 *

 * The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. This will be implemented using a "bubble sort" algorithm. 

 *

 * @param ucptr	The unsigned char pointer which points to an n-element data array.

 * @param n An unsigned integer which gives the size of the array pointed to by "ucptr" 

 * @return This function will return a pointer to the reordered array (I know this is redundant). 

 */

 unsigned char* sort_array(unsigned char* ucptr, unsigned int n);


#endif /* __STATS_H__ */
