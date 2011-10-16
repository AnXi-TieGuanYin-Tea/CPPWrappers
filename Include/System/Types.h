/**
 *
 *       @file  Types.h
 *
 *      @brief  Types class
 *
 *    @version  1.0
 *       @date  10/13/2011 09:28:55
 *
 *     @author  Ben D. (BD), dbapps2@gmail.com
 *
 */

#ifndef TYPES_H__
#define TYPES_H__
#include <iostream>
#include <sstream>
using namespace std;

class Types{
	public:
		/**
		 * @brief Converts an int to a string 
		 * @return the int converted to string
		 */
		static string toString(int);

		/**
		 * @brief Converts a char to a String
		 * @return the converted to string
		 */
		static string toString(char);
};

#endif